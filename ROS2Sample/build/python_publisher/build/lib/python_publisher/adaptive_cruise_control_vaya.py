#!/usr/bin/env python
# generic imports
from audioop import avg
from calendar import c
from dataclasses import dataclass
from os import stat
from turtle import st
from typing import Tuple
from xmlrpc.client import DateTime
import matplotlib as plt
from threading import Thread
import rclpy
from rclpy.node import Node
import matplotlib.pyplot as plt
import csv
# import keyboard  # Requires Super User (sudo -s)
import haversine as hs
import numpy as np
import pandas as pd
from datetime import *
import os

# Ros Topics Data types - Vaya
from tracked_lane_msgs.msg import LaneResults, Lane, Boundary, Point
from tracked_object_msgs.msg import TrackedObjectArray, TrackedObject
from nav_msgs.msg import OccupancyGrid, Odometry
from geometry_msgs.msg import Twist, Pose, Point
from std_msgs.msg import Float32

# Submodoles 
from .submodules.lane_reader import LaneReader
from .controllerPID import PID
from .submodules.Pure_Pursuit import *
from .submodules.switch_cognata import *
from .submodules.switch_vaya import *

# Idan driver
from autoware_auto_msgs.msg import VehicleControlCommand
from additional_msgs.msg import CanPacket


# Google Earth
# from simplekml import Kml
# from pydrive.auth import GoogleAuth
# from pydrive.drive import GoogleDrive


fig, ax = plt.subplots()
LANE_DIR = "src/python_publisher/python_publisher/submodules/lanes"

"""
    Auxuliary Classes
"""
class fonts:  
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

fig, ax = plt.subplots()

"""
    Main Class
"""

class adaptive_cruise_control(Node):
    def __init__(self):
        super().__init__("adaptive_cruise_control_vaya")
        # self.in_session = False  # for running and shutting down purposes

        # acc :
        self.padesterianList = []
        self.vehicleList = []
        self.acc_on = False  # ACC Flag
        self.lane_size = 3.7  # meters
        self.front_car = front_car()
        self.front_padasterian = front_padastrian()
        self.dist_from_front_car: float = 0    # GPS distance from the closest car
        self.currentListIdx = 0
        self.maximum_front_car_distance = 100  # Initializing maximum front car distance
        self.ego_car_pose_y_nav = 0.0
        self.ego_car_pose_x_nav = 0.0
        self.reference_distance = 50  # Desired keeping distance
        self.keyboard_increment_factor = 0.1
        self.max_speed = 5.0
        self.ego_car_v_x = 0.0
        self.ego_car_v_y = 0.0
        self.target_point = (0,0)

        # ego car:
        self.ego_car_lane = 0
        self.ego_car_lane_offset = 0.0
        self.vehicle_cmd = Twist()
        self.ego_car_speed = 0.0

        # Lanes data
        self.right_lanes = []   # lanes on the right side of the ego car
        self.left_lanes = []   # lanes on the left side of the ego car
        self.ego_lane : Lane = Lane()   # ego lane
        self.desired_lane: Lane = self.ego_lane    # serves us when switching lane
        self.num_of_lanes = 4   # default -> update alone
        self.cx = [0.0]
        self.cy = [0.0]

        # Route Plane GPS
        self.route = []

        # PID
        self.velocity_PID = PID(kp=0.08, ki=0, kd=0.013)
        self.wheel_PID = PID(kp=0.05, ki=0, kd=0.002)
        self._switching_lane = False
        self.error_w = 0
        self.error_v = 0
        self.output_w = 0.0
        self.output_v = 0.0

        # Switch
        self.switch = switch_vaya(self.reference_distance)

        # Rate
        self.rate = self.create_rate(8)  # 10 [Hz]

        # Occupancy Grid Params
        self.colormap = [[0,0,0],[0,240,0],[0,100,0],[120,0,0],[255,0,0]]+[[255,255,255] for i in range(251)]
        self.color_lookup = np.array(self.colormap, dtype=np.uint8)
        self.channels = 3

        # Log section
        self.log_pd = pd.DataFrame(columns=
        ['Time stamp', 'Error Wheel', 'Output wheel', 'Error Velocity / Brake', 'Output velocity' , 'Center Point - Lane x', 'Center Point - Lane Y', 'GPS', 'Ego Velocity', 'P', 'I', 'D'])
        self.curr_date = datetime.now()
        self.log_filename = str("src/python_publisher/python_publisher/submodules/log/log_%s.csv" % self.curr_date )


        print(fonts.YELLOW + "waiting for all topics to be avalable...")
        
        # subscribers - Vaya    < == > GPS will be self created in the future !
        self.create_subscription(
            LaneResults, "/tracked_lanes", self.lane_message_callback, 10)
        self.create_subscription(
            TrackedObjectArray, "/tracked_objects", self.objects_message_callback, 10)  # same as DOGT
        self.create_subscription(
            OccupancyGrid, "/occupancy_grid", self.occupancy_grid_callback, 10)
        self.create_subscription(
            Odometry, "/ego_motion", self.ego_motion_callback, 10)  
        self.create_subscription(
            NavSatFix, "gps_data", self.GPScb_nav, 10)
        self.create_subscription(
            Tuple, "plane_topic", self.plane_cb, 10)

        
        # Idan Subscriber
        self.Idan_driver_listener = self.create_subscription(
            VehicleControlCommand, "/vehicle_command_feedback", self.idan_vehicle_cb, 10)   # Idan driver - listener 

        # publishers    -   Cognata
        self.car_cmd_publisher_steer = self.create_publisher(
            Float32, '/cognataSDK/car_command/steer_cmd', 10)
        self.car_cmd_publisher_accel = self.create_publisher(
            Float32, '/cognataSDK/car_command/acceleration_cmd', 10)
        self.car_cmd_publisher_brake = self.create_publisher(
            Float32, '/cognataSDK/car_command/brake_cmd', 10)
        self.car_cmd_publisher_gas = self.create_publisher(
            Float32, '/cognataSDK/car_command/gas_cmd', 10)
        
        # publisher - Idan
        self.Idan_driver_sender = self.create_publisher(
            VehicleControlCommand, "raw_command", 10)       # idan driver - sender
        
        # timer
        time_period = 0.1
        self.create_timer(time_period, self.control)

        print(fonts.BLUE + "starting ACC application" + fonts.ENDC)




    #####################################################
    # DOGT message callback
    #####################################################
    
    def objects_message_callback(self, msg : TrackedObjectArray):
        """
            Same method as DOGTcb from cognata.
            update the vehicle list and pedestrian list.
            also update the switch.
        """
        self.vehicleList.clear()
        self.padesterianList.clear()

        vehicle_list = []
        pedestrian_list = []
        for Tobject in msg.tracked_objects:
            Tobject : TrackedObject = Tobject
            if Tobject.object_type == 11000:
                # Pedestrian
                pedestrian_list.append(Tobject)

            elif Tobject.object_type == 20000:
                # Vehicle
                vehicle_list.append(Tobject)
        
        self.vehicleList = vehicle_list
        self.padesterianList = pedestrian_list
        
        # update the data of the Vaya Switch 
        self.switch.update_objects(vehicle_list, pedestrian_list)

        self.save_state("%s:%s" % (msg.header.stamp.sec , msg.header.stamp.nanosec))


    #####################################################
    # GPS message callback
    #####################################################

    def GPScb_nav(self, msg:  NavSatFix):
        #self.ego_car_degree = np.arccos(self.ego_car_velocity._x / (self.ego_car_speed/3.6))
        self.ego_car_pose_y_nav = msg.latitude
        self.ego_car_pose_x_nav = msg.longitude
        

   #####################################################
    # Plane message callback
    ##################################################### 
    
    def plane_cb(self, msg : Tuple):
        """
            This method receives a point on the plane from the converter Node.
            Adds to the route list.
        """
        self.route.append(msg)


    #####################################################
    # Ego Motion message callback
    #####################################################

    def ego_motion_callback(self, msg : Odometry):
        """
            This method is responsible for Velocity updates, 
            as well as Position.
        """
        self.ego_car_v_x = msg.twist.twist.linear.x
        self.ego_car_v_y = msg.twist.twist.linear.y
        speed_square = math.pow(self.ego_car_v_x ,2) + math.pow(self.ego_car_v_y, 2)
        self.ego_car_speed = math.sqrt(speed_square)
        print(msg.pose.pose.position.x)
        print(msg.pose.pose.position.y)
        print("SPEED: ", self.ego_car_speed)
        
        
    
    ##################################################
    ## Occupancy Grid call back ######################
    ##################################################

    def occupancy_grid_callback(self, msg: OccupancyGrid):
        """
            This method is responsible for GUI & Occupancy Grid data update
        """
        
        if len(list(msg.data)) > 0:
            data = map(self.change_color, msg.data) 
            grid = np.array(list(data), dtype=np.uint8)
            print("all zeros: ", all(np.equal(grid.flatten(), np.zeros_like(grid).flatten())))
            grid = np.reshape(grid, (msg.info.height, msg.info.width, 3))
            wheel_img = cv2.imread("src/python_publisher/python_publisher/submodules/tesla_wheel.png")
            (h, w) = wheel_img.shape[:2]
            (cX, cY) = (w // 2, h // 2)
            angle = self.output_w * 45
            M = cv2.getRotationMatrix2D((cX, cY), int(angle), 1.0)
            wheel_img = cv2.warpAffine(wheel_img, M, (w, h))
            wheel_img = cv2.putText(wheel_img, str(angle), (0, 50), cv2.FONT_HERSHEY_COMPLEX , 2, (255, 0, 0), 5)
            cv2.imshow("Wheel", wheel_img)
            cv2.imshow("frame", grid)
            cv2.waitKey(1)
    
    ###################################################
    ######  Lane call back ############################
    ###################################################

    def lane_message_callback(self, msg: LaneResults):
        """
            This method is responsible for lanes update.
        """
        self.left_lanes.clear()
        self.right_lanes.clear()

        # update left lanes
        for lane in msg.adjacent_left:
            self.left_lanes.append(lane)
        # update right lanes
        for lane in msg.adjacent_right:
            self.right_lanes.append(lane)
        # update ego lane
        self.ego_lane = msg.ego_lane

        self.update_pure_pursuit(self.ego_lane)

        # update switch with lanes data
        self.switch.update_lane_info(self.right_lanes, self.left_lanes)
        

    #####################################
    ## Idan driver listener call back ###
    #####################################

    def idan_vehicle_cb(self, msg : VehicleControlCommand):
        """
            this method receive information about the state of the vehicle 
            after the last command has been sent
        """
        print(msg)
    
    ##################################################
    ### UTILS   ######################################
    ##################################################

    def save_state(self, time_stamp):
        """
            This method saves the current state in the pandas table:
            Time stamp', 'Error Wheel', 'Output wheel', 'Error Velocity / Brake', 'Output velocity' , 'Center Point - Lane x', 'Center Point - Lane Y', 'GPS', 'Ego Velocity', 'P', 'I', 'D'
        """
        state_data = []
        state_data.append(time_stamp)
        state_data.append(self.error_w)
        state_data.append(self.output_w)
        state_data.append(self.error_v)
        state_data.append(self.output_v)
        state_data.append(self.cx)
        state_data.append(self.cy)
        state_data.append((self.ego_car_pose_x_nav, self.ego_car_pose_y_nav))
        state_data.append((self.ego_car_v_x, self.ego_car_v_y))
        state_data.append(self.wheel_PID.pTerm)
        state_data.append(self.wheel_PID.iTerm)
        state_data.append(self.wheel_PID.dTerm)
        self.log_pd.loc[len(self.log_pd.index)] = state_data
        self.log_pd.to_csv(self.log_filename, index=False)
    
    def dist(self, point1, point2):
        # return distance betweeen point1 and point2 - 8 digit accuracy - meters
        dist = hs.haversine(point1, point2)
        return 1000*round(dist, 8)

    def change_color(self, number):
        return self.colormap[number]

    def shutdown_handler(self):
        # if self.in_session:
        print(fonts.BOLD + fonts.CYAN + "Quitting Adaptive Cruise Control")
    
    def at_boundary(self, point: Pose) -> bool:
        """
            For a given 3D point (x, y, z), 
            return True if the point is in the Lane Boundary
            else, return False.
        """
        radius_y = 1    
        # loop after the boundary points of the ego_lane
        for pointL, pointR in zip(self.ego_lane.left_boundary.points, self.ego_lane.right_boundary.points):
            pointL:Point = pointL
            pointR:Point = pointR
            # print("Point:", int(point.position.x), " Boundary: ", pointL.x, pointR.x)
            if int(point.position.x) >= int(pointL.x) and int(point.position.x) <= int(pointR.x):
                if int(point.position.y) >= int(pointL.y) - radius_y and int(point.position.y) <= int(pointL.y) + radius_y or \
                    int(point.position.y) >= int(pointR.y) - radius_y and int(point.position.y) <= int(pointR.y) + radius_y:
                    return True
        return False
    
    def get_target_point(self, radius):
        """
        find the farthest point from us in a certain radius.
        """
        current_point = (0,0)
        for i, (x, y) in enumerate(zip(self.cx, self.cy)):
            if math.dist(current_point, (x,y)) > radius:
                return (x, y)



    def get_front_padasterian(self):
        """
            This method finds the closest pedestrian to the ego car.
        """
        # radius
        radius = 3.5
        # Initializing front car
        self.front_padasterian.id = -1
        self.front_padasterian.distance_y = 100
        self.front_padasterian.distance_x = self.maximum_front_car_distance
        self.front_padasterian.velocity_x = 0
        self.front_padasterian.velocity_y = 0
        # look for the closest pedestrian
        for padestrian in self.padesterianList:
            padestrian:TrackedObject = padestrian
            center_point = padestrian.object_pose_m_quat
            velocity : Twist = padestrian.object_velocity_mps_radps
            if -radius < int(center_point.position.y) < radius and center_point.position.x > 0:
                if (center_point.position.x < self.front_car.distance_x):
                    # update front car
                    self.front_padasterian.distance_x = center_point.position.x
                    self.front_padasterian.distance_y = center_point.position.y
                    self.front_padasterian.velocity_x = velocity.linear.x
                    self.front_padasterian.velocity_y = velocity.linear.y

    def get_front_car(self):
        """
            This method finds and update the closest Vehicle to the ego car.
        """
        # Initializing front car
        self.front_car.id = -1
        self.front_car.distance_y = 100
        self.front_car.distance_x = self.maximum_front_car_distance
        self.front_car.velocity_x = 0
        self.front_car.velocity_y = 0
        # look for the closest car
        for car in self.vehicleList:
            car:TrackedObject = car
            center_point = car.object_pose_m_quat
            velocity : Twist = car.object_velocity_mps_radps
            if self.at_boundary(center_point) and center_point.position.x > 0 and center_point.position.y < self.front_car.distance_y:
                if (center_point.position.x < self.front_car.distance_x):
                    # update front car
                    self.front_car.distance_x = center_point.position.x
                    self.front_car.distance_y = center_point.position.y
                    self.front_car.velocity_x = velocity.linear.x
                    self.front_car.velocity_y = velocity.linear.y

    def calc_output_vel(self):
        """
            This method calculate the error base on the closest object 
            to the ego car.
            Using the PID and the error we find the output and return it.
        """
        # calaulate the error
        dist_error_car = self.front_car.distance_x - self.reference_distance  
        dist_error_ped = self.front_padasterian.distance_x - self.reference_distance
        dist_error = dist_error_car if dist_error_car < dist_error_ped else dist_error_ped
        
        error_speed = self.max_speed - self.ego_car_speed
        error = error_speed
        # if no object detected, use speed as an error
        if len(self.padesterianList) == 0 and len(self.vehicleList) == 0:
            output = self.velocity_PID.output(error)
            self.error_v = error
        else: 
            # find the gas & brake output using the PID class
            output = self.velocity_PID.output(dist_error)
            self.error_v = error
        self.output_v = output
        return output
    
    def calc_output_wheel(self):
        """
            This method calculates the error of the yaw using Pure Pursuit Algorithm, 
            the error base the on the distance from the look ahead point
            and using PID, finds the desired output.
        """
        # finds the Yaw error
        velocity_angle = math.atan2(self.ego_car_v_y, self.ego_car_v_x)

        # calculate path angle
        path_angle = 0.0
        self.target_point = self.get_target_point(30.0)
        
        if self.target_point:
            desired_vector = (self.target_point[0] - self.cx[0], self.target_point[1] - self.cy[0])

            path_angle = math.atan2(desired_vector[0], desired_vector[1])

        path_relative_angle = 0.0
        if self.target_point:
            on_path_vector = (self.target_point[0] - self.cx[0],
                            self.target_point[1] - self.cy[0])
            on_path_angle = math.atan2(on_path_vector[0], on_path_vector[1])
            path_relative_angle = path_angle - on_path_angle

        error_w = path_relative_angle - velocity_angle

        print("Velocity Angle: ", math.degrees(velocity_angle))
        print("Path Angle: (Relative)", math.degrees(path_relative_angle))
        print("Result Angle: ", math.degrees(-error_w))

        output = self.wheel_PID.output(-error_w)
        self.error_w = -error_w
        self.output_w = output
        return output


    def update_pure_pursuit(self, ego_lane : Lane):
        """
            This method update the cx, cy values of the pure pursuit object
        """
        self.cx = []
        self.cy = []
        cx2, cy2 = [], []

        ax.cla()
        for lane in self.right_lanes:
            for pointL, pointR in zip(lane.left_boundary.points, lane.right_boundary.points):
                pointL:Point = pointL
                pointR:Point = pointR
                x = (pointL.x + pointR.x) / 2.0
                y = (pointL.y + pointR.y) / 2.0
                cx2.append(x)
                cy2.append(y)

            ax.plot(cx2, cy2, "--b")
            cx2.clear()
            cy2.clear()

        for lane in self.left_lanes:
            for pointL, pointR in zip(lane.left_boundary.points, lane.right_boundary.points):
                pointL:Point = pointL
                pointR:Point = pointR
                x = (pointL.x + pointR.x) / 2.0
                y = (pointL.y + pointR.y) / 2.0
                cx2.append(x)
                cy2.append(y)

            ax.plot(cx2, cy2, "--b")
            cx2.clear()
            cy2.clear()
        
        for pointL, pointR in zip(ego_lane.left_boundary.points, ego_lane.right_boundary.points):
            pointL:Point = pointL
            pointR:Point = pointR
            x = (pointL.x + pointR.x) / 2.0
            y = (pointL.y + pointR.y) / 2.0
            self.cx.append(x)
            self.cy.append(y)
        ax.plot(self.cx, self.cy, "-r")
        if self.target_point:
            ax.scatter(self.target_point[0], self.target_point[1], c="b")

        plt.pause(0.01)
    
    def get_path(self, file_name):
        """
            only if use gps path and gps data
        """
        with open(file_name, 'r') as datafile:
            plotting = csv.reader(datafile, delimiter=',')

            X = []
            Y = []

            for ROWS in plotting:
                Y.append(float(ROWS[0]))
                X.append(float(ROWS[1]))

            return Y, X
        

    #####################################################
    # PID control for applying adaptive cruise
    #####################################################

    def acc(self):
        """
            this method is responsible for the ACC control:
            - Gas & Brake PID
            - Wheel PID
        """

        # Gas & Brake Section:

        # create the gas and brake messages
        gas_msg = Float32()
        brake_msg = Float32()

        self.max_speed = 30
        output_gas_brake = self.calc_output_vel()

        # base on the current speed decide the final output
        if (output_gas_brake > 0):
            if self.ego_car_speed > self.max_speed:
                gas_msg.data = 0.0
                brake_msg.data = 0.0
            elif self.max_speed - 10 < self.ego_car_speed < self.max_speed:
                gas_msg.data = output_gas_brake * 0.7
                brake_msg.data = 0.0
            else:
                gas_msg.data = output_gas_brake
                brake_msg.data = 0.0
        else:
            gas_msg.data = 0.0
            brake_msg.data = -(output_gas_brake)
    
        # Wheel Section:

        # find the wheel output
        output_wheel = self.calc_output_wheel()


        # build the wheel message
        wheel_msg = Float32()
        wheel_msg.data = output_wheel

        # IDAN Section:
        Idan_msg = VehicleControlCommand()
        # convert the wheel into radians
        Idan_msg.front_wheel_angle_rad = (wheel_msg.data * 450) * (math.pi/180)
        
        # Acceleration base on the Velocity output
        Idan_msg.long_accel_mps2 = gas_msg.data if brake_msg.data == 0.0 else brake_msg.data


        # Publish Data to the topics
        self.car_cmd_publisher_steer.publish(wheel_msg)
        self.car_cmd_publisher_gas.publish(gas_msg)
        self.car_cmd_publisher_brake.publish(brake_msg)
        self.Idan_driver_sender.publish(Idan_msg)

        # DEBUG 
        print("GAS: ", gas_msg.data)
        print("BRAKE: ", brake_msg.data)
        print("WHEEL: ", output_wheel)
        print("Front Car Distance: " + str(self.front_car.distance_x))      # DEBUG
        print(self.switch.state)

    def change_lane(self):
        """
            This method switch the lane which the car will follow using pure pursuit.
            TODO Sync with the Lane_cb function, Sync with the Switch.
        """
        print("CHANGING_LANE")

        # get direction from the switch and change the lane we are tracking
        direction = self.switch.switch_lane_direction

        if direction == Direction.LEFT:
            if len(self.left_lanes) > 0:
                self.update_pure_pursuit(self.left_lanes[0])
                self.desired_lane = self.left_lanes[0]

        elif direction == Direction.RIGHT:
            if len(self.right_lanes) > 0:
                self.update_pure_pursuit(self.right_lanes[0])
                self.desired_lane = self.right_lanes[0]


    def stop_car(self):
        """
            When it is impossible to switch lane 
            and front car is too close -> Stop ego car.
        """
        print("STOP_CAR")
        msg_gas = Float32()
        msg_brake = Float32()
        msg_gas.data = 0.0
        msg_brake.data = 1.0
        idan_msg = CanPacket
        self.car_cmd_publisher_brake.publish(msg_brake)
        self.car_cmd_publisher_gas.publish(msg_gas)
        

    def stop_pedestrian(self):
        """
            When pedestrian is detected near by -> Stop ego car.
        """
        print("STOP_PED")
        msg_gas = Float32()
        msg_brake = Float32()
        msg_gas.data = 0.0
        msg_brake.data = 1.0
        self.car_cmd_publisher_brake.publish(msg_brake)
        self.car_cmd_publisher_gas.publish(msg_gas)

    def control(self):
        """
            This is the control method.
            It look for the closest object to the ego car 
            and base on the current switch it operates the car.
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
    """
        ROS2 main method - Node.
    """
    rclpy.init(args=args)
    acc_vaya = adaptive_cruise_control()
    rclpy.spin(acc_vaya)
    acc_vaya.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
