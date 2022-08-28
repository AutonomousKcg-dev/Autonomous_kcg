#!/usr/bin/env python
from audioop import avg
from dataclasses import dataclass
from os import stat
import matplotlib as plt
from threading import Thread
import rclpy
from rclpy.node import Node
import matplotlib.pyplot as plt
import csv
import keyboard  # Requires Super User (sudo -s)

import haversine as hs

# from cognata_sdk_ros2.msg import *
from cognata_sdk_ros2.msg import ROIAndDOGTOutput, GPSAdditionalData, VehicleMsg, PedestrianMsg
from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
import numpy as np

from .submodules.lane_reader import LaneReader
from .controllerPID import PID
# from msg._ForceFeedback import ForceFeedback
from .submodules.Pure_Pursuit import *
from .submodules.switch_cognata import *

from autoware_auto_msgs.msg import VehicleControlCommand
from additional_msgs.msg import CanPacket

# Google Earth
# from simplekml import Kml
# from pydrive.auth import GoogleAuth
# from pydrive.drive import GoogleDrive


fig, ax = plt.subplots()
LANE_DIR = "src/python_publisher/python_publisher/submodules/lanes"


def get_path(file_name):
    with open(file_name, 'r') as datafile:
        plotting = csv.reader(datafile, delimiter=',')

        X = []
        Y = []

        for ROWS in plotting:
            Y.append(float(ROWS[0]))
            X.append(float(ROWS[1]))

        return Y, X


class fonts:  # works only for print() function
    CYAN = '\033[96m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BLUE = '\033[94m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'


class front_padastrian:
    id = -1
    distance_x = 100
    distance_y = 0
    velocity_x = 0
    velocity_y = 0


class front_car:
    id = -1
    distance_x = 100
    distance_y = 0
    velocity_x = 0
    velocity_y = 0


def abline(slope, intercept, ax, min_x, max_x):
    """Plot a line from slope and intercept"""
    x_vals = np.array([min_x, max_x])
    y_vals = intercept + slope * x_vals
    ax.plot(x_vals.flatten(), y_vals.flatten(), '--')


class adaptive_cruise_control(Node):
    def __init__(self):
        super().__init__("adaptive_cruise_control")
        # self.in_session = False  # for running and shutting down purposes

        # acc :
        self.padesterianList: PedestrianMsg = []
        self.vehicleList: VehicleMsg = []
        self.acc_on = False  # ACC Flag
        self.lane_size = 3.7  # meters
        self.front_car = front_car()
        self.front_padasterian = front_padastrian()
        self.dist_from_front_car: float = 0    # GPS distance from the closest car
        self.currentListIdx = 0
        self.maximum_front_car_distance = 100  # Initializing maximum front car distance
        self.ego_car_pose_y_nav = 0.0
        self.ego_car_pose_x_nav = 0.0

        self.reference_distance = 25  # Desired keeping distance
        self.keyboard_increment_factor = 0.1

        # ego car:
        self.ego_car_lane = 0
        self.ego_car_lane_offset = 0.0
        self.vehicle_cmd = Twist()
        self.ego_car_speed = 0.0

        # PID
        self.velocity_PID = PID(kp=0.8, ki=0, kd=0.13)
        self.wheel_PID = PID(kp=0.05, ki=0, kd=0.002)
        self._switching_lane = False

        # Switch
        self.switch = switch_cognata(self.reference_distance)

        # subscribers
        self.dogt_listener = self.create_subscription(
            ROIAndDOGTOutput, "/cognataSDK/dogt/GlobalSensors", self.DOGTcb, 10)  # DOGT Listener
        self.gps_listener = self.create_subscription(
            GPSAdditionalData, "/cognataSDK/GPS/info/CognataGPS0002", self.GPScb, 10)  # GPS Listener
        self.GPSnavPoint = self.create_subscription(
            NavSatFix, "cognataSDK/GPS/navsat/CognataGPS0002", self.GPScb_nav, 10)  # GPS Point listener
        self.Idan_driver_listener = self.create_subscription(
            VehicleControlCommand, "/vehicle_command_feedback", self.idan_vehicle_cb, 10)   # Idan driver - listener 

        # publishers
        self.car_cmd_publisher_steer = self.create_publisher(
            Float32, '/cognataSDK/car_command/steer_cmd', 10)
        self.car_cmd_publisher_accel = self.create_publisher(
            Float32, '/cognataSDK/car_command/acceleration_cmd', 10)
        self.car_cmd_publisher_brake = self.create_publisher(
            Float32, '/cognataSDK/car_command/brake_cmd', 10)
        self.car_cmd_publisher_gas = self.create_publisher(
            Float32, '/cognataSDK/car_command/gas_cmd', 10)
        self.Idan_driver_sender = self.create_publisher(
            VehicleControlCommand, "raw_command", 10)       # idan driver - sender

        # pure pursuit algo
        # cy, cx = get_path(
        #     "/home/kcg/copy/ROS2Sample/path.txt")
        self.lane_reader = LaneReader(LANE_DIR, 1)
        cy, cx = self.lane_reader.get_lane()
        self.pure_pursuit = PurePursuit(cy, cx, 0.0)

        # timer
        time_period = 0.1
        self.create_timer(time_period, self.control)

        print(fonts.YELLOW + "waiting for all topics to be avalable...")
        print(fonts.BLUE + "starting ACC application" + fonts.ENDC)
        self.number_of_agents = len(self.vehicleList)
        # print(fonts.BOLD + fonts.BLUE + "Vehicle List Size = " +str(len(self.vehicleList))) # Printing Number of Vehicle Agents
        self.rate = self.create_rate(8)  # 10 [Hz]

    def dist(self, point1, point2):
        # return distance betweeen point1 and point2 - 8 digit accuracy - meters
        dist = hs.haversine(point1, point2)
        return 1000*round(dist, 8)

    #####################################################
    # DOGT message callback
    #####################################################

    def DOGTcb(self, msg: ROIAndDOGTOutput):
        self.vehicleList = msg.vehicle_list
        self.padesterianList = msg.pedestrian_list

        # update the data on the switch
        self.switch.update_objects(msg=msg)

    #####################################################
    # GPS message callback
    #####################################################

    def GPScb_nav(self, msg:  NavSatFix):
        #self.ego_car_degree = np.arccos(self.ego_car_velocity._x / (self.ego_car_speed/3.6))
        self.ego_car_pose_y_nav = msg.latitude
        self.ego_car_pose_x_nav = msg.longitude

        # use pure pursuit algo
        self.pure_pursuit.car_state.last_x_coord = self.pure_pursuit.car_state.x_coord
        self.pure_pursuit.car_state.last_y_coord = self.pure_pursuit.car_state.y_coord
        self.pure_pursuit.car_state.x_coord = self.ego_car_pose_x_nav
        self.pure_pursuit.car_state.y_coord = self.ego_car_pose_y_nav
        self.pure_pursuit.run()

        # plot
        ax.clear()
        ax.plot(self.pure_pursuit.cx, self.pure_pursuit.cy, "-r")  # plot course

        ax.plot([self.pure_pursuit.car_state.x_coord, self.pure_pursuit.target_point[0]],
                [self.pure_pursuit.car_state.y_coord, self.pure_pursuit.target_point[1]], "-g")  # pot target point

        abline(self.pure_pursuit.linear_reg.coef_, self.pure_pursuit.linear_reg.intercept_, ax,
               self.pure_pursuit.cx[self.pure_pursuit.curr_index], self.pure_pursuit.cx[self.pure_pursuit.curr_index + self.pure_pursuit.sample])  # draw linear regression

        ax.scatter([self.pure_pursuit.target_point[0]],
                   [self.pure_pursuit.target_point[1]], marker="+")  # mark target point

        ax.scatter([self.pure_pursuit.car_state.x_coord],
                   [self.pure_pursuit.car_state.y_coord])  # draw car
        plt.pause(0.001)

    #####################################################
    # GPS message callback
    #####################################################

    def GPScb(self, msg: GPSAdditionalData):
        self.ego_car_lane = msg.lane_number
        self.ego_car_lane_offset = msg.lane_offset
        self.ego_car_velocity = msg._velocity_local_3d
        self.ego_car_speed = msg.speed * 3.6
        # self.ego_car_degree = np.arccos(
        #     self.ego_car_velocity._x / (self.ego_car_speed/3.6))
        self.ego_car_pose_y = msg.position._y
        self.ego_car_pose_x = msg.position._x
        self.ego_car_v_x = msg.velocity_local_3d.x
        self.ego_car_v_y = msg.velocity_local_3d.y
        self.ego_car_pose = msg.position
        # update the data on the switch
        self.switch.update_lane_info(msg)

    def shutdown_handler(self):
        # if self.in_session:
        print(fonts.BOLD + fonts.CYAN + "Quitting Adaptive Cruise Control")

    def get_front_padasterian(self):
        # radius
        radius = 3.5

        # Initializing front car
        self.front_padasterian.id = -1
        self.front_padasterian.distance_y = 100
        self.front_padasterian.distance_x = self.maximum_front_car_distance
        self.front_padasterian.velocity = 0

        for idx, padestrian in enumerate(self.padesterianList):
            if -radius < int(padestrian.description.bounding_box.transform.translation.y) < radius and padestrian.description.bounding_box.transform.translation.x > 0:
                # print("Distance =" + str(car.description.bounding_box.transform.translation.x) +" to Car#"+ str(idx) +" in vehicle list ")
                if (padestrian.description.bounding_box.transform.translation.x < self.front_car.distance_x):
                    # print("Detected Front Car")
                    self.front_padasterian.distance_x = padestrian.description.bounding_box.transform.translation.x
                    self.front_padasterian.distance_y = padestrian.description.bounding_box.transform.translation.y
                    self.front_padasterian.velocity_x = padestrian.description.motion.linear.x
                    self.front_padasterian.velocity_y = padestrian.description.motion.angular.z
                    self.front_padasterian.id = idx


    #####################################
    ## Idan driver listener call back ###
    #####################################

    def idan_vehicle_cb(self, msg : VehicleControlCommand):
        """
            this method receive information about the state of the vehicle 
            after the last command has been sent
        """
        print(msg)
    

    # Pull Front Car

    def get_front_car(self):

        # Initializing front car
        self.front_car.id = -1
        self.front_car.distance_y = 0
        self.front_car.distance_x = self.maximum_front_car_distance
        self.front_car.velocity = 0
        for idx, car in enumerate(self.vehicleList):
            if(car.lane_id != "" and int(car.lane_id) == self.ego_car_lane and car.description.bounding_box.transform.translation.x > 0 and abs(car.description.bounding_box.transform.translation.y) < self.lane_size):
                # print("Distance =" + str(car.description.bounding_box.transform.translation.x) +" to Car#"+ str(idx) +" in vehicle list ")
                if (car.description.bounding_box.transform.translation.x < self.front_car.distance_x):
                    # print("Detected Front Car")
                    self.front_car.distance_x = car.description.bounding_box.transform.translation.x
                    self.front_car.distance_y = car.description.bounding_box.transform.translation.y
                    self.front_car.velocity_x = car.description.motion.linear.x
                    self.front_car.velocity_y = car.description.motion.angular.z
                    self.front_car.id = idx

        # print(self.front_car.distance_x)

        # new_latitude  = latitude  + (dy / r_earth) * (180 / pi);
        # new_longitude = longitude + (dx / r_earth) * (180 / pi) / cos(latitude * pi/180);

        # point1 = (self.ego_car_pose_x_nav, self.ego_car_pose_y_nav)
        # new_latitude = point1[1] + \
        #     (self.front_car.distance_y / 6378*1000) * (180/math.pi)
        # new_longitude = point1[0] + ((self.front_car.distance_x / (6378*1000)) * (
        #     180/math.pi)) / math.cos(point1[1] * math.pi/180)
        # point2 = (new_longitude, new_latitude)

        # self.dist_from_front_car = self.dist(point1=point1, point2=point2)
        # print(self.dist_from_front_car)

    #####################################################
    # PID control for applying adaptive cruise
    #####################################################

    def acc(self):
        """
            this method is responsible for the ACC control
        """
        # gas and barke Control
        errorCar = self.front_car.distance_x - self.reference_distance
        errorPad = self.front_padasterian.distance_x - self.reference_distance
        error = 0.0
        if self.front_car.distance_x > self.front_padasterian.distance_x:
            error = errorPad
        else:
            error = errorCar

        output = self.velocity_PID.output(error)

        #####################################################
        # wheel control
        #####################################################
        if self._switching_lane:
            self.pure_pursuit.sample = 100
        else:
            self.pure_pursuit.sample = 75

        error_yaw, _ = self.pure_pursuit.run()
        idx = self.pure_pursuit.curr_index
        dist_error = math.dist((self.pure_pursuit.cx[idx], self.pure_pursuit.cy[idx]), (
            self.ego_car_pose_x_nav, self.ego_car_pose_y_nav)) * math.exp(7)

        error_w = error_yaw + math.sqrt(dist_error)

        output_w = self.wheel_PID.output(error_w)

        dist_from_front_car = abs(self.front_car.distance_x - self.ego_car_pose_x_nav)
        print(dist_from_front_car)
        if self.switch.changing_lane and (dist_from_front_car < 0.5 or dist_from_front_car > 15):
            self._switching_lane = False
            self.switch.changing_lane = False
            print("changed lane")
        
        msg = Float32()
        if self.switch.changing_lane:
            msg.data = output_w / 2.0
        else:
            msg.data = output_w * 0.7       # making the steer softer
        idan_msg.front_wheel_angle_rad = (msg.data * 450) * (math.pi/180)
        self.car_cmd_publisher_steer.publish(msg)
        print(idan_msg)
        self.Idan_driver_sender.publish(idan_msg)

        #####################################################
        # gas & brake Control
        #####################################################
        gas_msg = Float32()
        brake_msg = Float32()
        idan_msg = VehicleControlCommand()

        max_speed = 30.0

        # need to drive up to a certain speed
        if (output > 0):
            if self.ego_car_speed > max_speed:
                gas_msg.data = 0.0
                brake_msg.data = 0.0
                idan_msg.long_accel_mps2 = 0.0
            elif max_speed - 10 < self.ego_car_speed < max_speed:
                gas_msg.data = output * 0.7
                brake_msg.data = 0.0
                idan_msg.long_accel_mps2 = output * 0.7
            else:
                gas_msg.data = output
                brake_msg.data = 0.0
                idan_msg.long_accel_mps2 = output
        else:
            if self.switch.changing_lane:
                gas_msg.data = 0.05
                brake_msg.data = 0.0
                idan_msg.long_accel_mps2 = 0.05
            else:
                gas_msg.data = 0.0
                brake_msg.data = -(output)
                idan_msg.long_accel_mps2 = -(output)

        self.car_cmd_publisher_gas.publish(gas_msg)
        self.car_cmd_publisher_brake.publish(brake_msg)
        

        

    def change_lane(self):
        print("CHANGING_LANE")

        # get direction from the switch and change the lane we are tracking
        direction = self.switch.switch_lane_direction
        current_lane = abs(self.ego_car_lane + 1)

        if direction == Direction.LEFT:
            if current_lane > 0:
                self.lane_reader.change_lane(current_lane - 1)

        elif direction == Direction.RIGHT:
            if current_lane < self.switch.num_of_lanes - 1:
                self.lane_reader.change_lane(current_lane + 1)

        # get lane data
        cx, cy = self.lane_reader.get_lane()

        # update pure pursuit path
        self.pure_pursuit.update_path(cx, cy)

        # set for the PID
        self._switching_lane = True

        # stop change lane state
        # should check if really changed lane !!!
        self.switch.changed_lane = True
        self.switch.changing_lane = True

    def stop_car(self):
        print("STOP_CAR")
        msg_gas = Float32()
        msg_brake = Float32()
        msg_gas.data = 0.0
        msg_brake.data = 1.0
        idan_msg = CanPacket
        self.car_cmd_publisher_brake.publish(msg_brake)
        self.car_cmd_publisher_gas.publish(msg_gas)
        

    def stop_pedestrian(self):
        print("STOP_PED")
        msg_gas = Float32()
        msg_brake = Float32()
        msg_gas.data = 0.0
        msg_brake.data = 1.0
        self.car_cmd_publisher_brake.publish(msg_brake)
        self.car_cmd_publisher_gas.publish(msg_gas)

    def control(self):
        """
            this is the main method, responsible for the movment of the car
        """
        self.get_front_padasterian()
        self.get_front_car()
        # run the switch decision maker
        self.switch.run(self.front_car, self.front_padasterian)

        state = self.switch.state

        if state == State.ACC:
            # the state of the car is in adaptive cruise control
            self.acc()
        elif state == State.CHANGE_LANE:
            # the car is switching lane
            self.change_lane()
        elif state == State.STOP_PED:
            # the car needs to stop, pedestrian detected
            self.stop_pedestrian()
        else:
            # the car needs to stop, vehicle detected
            self.stop_car()


def main(args=None):
    rclpy.init(args=args)

    acc = adaptive_cruise_control()

    rclpy.spin(acc)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    acc.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
