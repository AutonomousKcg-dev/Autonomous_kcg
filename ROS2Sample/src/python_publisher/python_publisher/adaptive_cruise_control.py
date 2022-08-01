#!/usr/bin/env python
from dataclasses import dataclass
import matplotlib as plt
from threading import Thread
import rclpy
from rclpy.node import Node
import matplotlib.pyplot as plt
import csv
import keyboard  # Requires Super User (sudo -s)

import haversine as hs

# from cognata_sdk_ros2.msg import *
from cognata_sdk_ros2.msg import ROIAndDOGTOutput, GPSAdditionalData, VehicleMsg
from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
import numpy as np
from .controllerPID import PID
# from msg._ForceFeedback import ForceFeedback
from .submodules.Pure_Pursuit import *

# Google Earth 
from simplekml import Kml
from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive

# TODO 1 - closing loop with PID on the distance to front car as well as y axis for staying in the lane
# TODO 2 - front car class

fig, ax = plt.subplots()


def get_path(file_name):
    with open(file_name, 'r') as datafile:
        plotting = csv.reader(datafile, delimiter=',')

        X = []
        Y = []

        for ROWS in plotting:
            Y.append(float(ROWS[0]))
            X.append(float(ROWS[1]))

        return Y, X

# plt.plot(Y, X)
# plt.title('Line Graph using CSV')
# plt.xlabel('X')
# plt.ylabel('Y')
# plt.show()


fig, ax = plt.subplots()


class fonts:  # works only for print() function
    CYAN = '\033[96m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BLUE = '\033[94m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'


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
        self.vehicleList: VehicleMsg = []
        self.acc_on = False  # ACC Flag
        self.lane_size = 3.7  # meters
        self.front_car = front_car()
        self.dist_from_front_car : float = 0    # GPS distance from the closest car
        self.currentListIdx = 0
        self.maximum_front_car_distance = 100  # Initializing maximum front car distance

        self.reference_distance = 25  # Desired keeping distance
        self.keyboard_increment_factor = 0.1

        # ego car:
        self.ego_car_lane = 0
        self.ego_car_lane_offset = 0.0
        self.vehicle_cmd = Twist()
        self.ego_car_speed = 0.0

        # PID
        self.velocity_PID = PID(kp=0.75, ki=0, kd=0.3)

        self.wheel_PID = PID(kp=0.05, ki=0, kd=0.002)
        # self.wheel_PID = PID(kp=0.05, ki=0, kd=0)

        # subscribers
        
        self.dogt_listener = self.create_subscription(
            ROIAndDOGTOutput, "/cognataSDK/dogt/GlobalSensors", self.DOGTcb, 10)  # DOGT Listener
        self.gps_listener = self.create_subscription(
            GPSAdditionalData, "/cognataSDK/GPS/info/CognataGPS0002", self.GPScb, 10)  # GPS Listener
        self.GPSnavPoint = self.create_subscription(
            NavSatFix, "cognataSDK/GPS/navsat/CognataGPS0002", self.GPScb_nav, 10)  # GPS Point listener

        # publishers
        # self.vehicle_cmd_publisher = rospy2.Publisher('/cognataSDK/vehicle_cmd', Twist, queue_size=10) # Publisher
        self.car_cmd_publisher_steer = self.create_publisher(
            Float32, '/cognataSDK/car_command/steer_cmd', 10)
        self.car_cmd_publisher_accel = self.create_publisher(
            Float32, '/cognataSDK/car_command/acceleration_cmd', 10)
        self.car_cmd_publisher_brake = self.create_publisher(
            Float32, '/cognataSDK/car_command/brake_cmd', 10)
        self.car_cmd_publisher_gas = self.create_publisher(
            Float32, '/cognataSDK/car_command/gas_cmd', 10)

        # pure pursuit algo
        cy, cx = get_path(
            "/home/kcg/copy/ROS2Sample/path.txt")
        self.pure_pursuit = PurePursuit(cy, cx, 0.0)
        # self.ai = 0  # speed proportion control
        # self.di = 0  # steer control

        # start putr pursuit
        

        # timer
        time_period = 0.1
        self.create_timer(time_period, self.control)

        print(fonts.YELLOW + "waiting for all topics to be avalable...")
        print(fonts.BLUE + "starting ACC application" + fonts.ENDC)
        self.number_of_agents = len(self.vehicleList)
        # print(fonts.BOLD + fonts.BLUE + "Vehicle List Size = " +str(len(self.vehicleList))) # Printing Number of Vehicle Agents
        self.rate = self.create_rate(8)  # 10 [Hz]


        # Google Earth Visualization    - DO NOT DELETE
        # self.drive = GoogleDrive(GoogleAuth)
        # self.upload_file_list = ['LinkLine.kml']
        # self.file_drive = self.drive.CreateFile({'id': '1GNyVRxN3BvbHoYt5Bt8GqgJ9mpYoTu6P'})
        # # coordinates list of (lon, lat) tuples
        # self.coords = []
        # # Kml template
        # self.kml = Kml()


    def dist(self, point1, point2):
        # return distance betweeen point1 and point2 - 8 digit accuracy - meters
        print(point1)
        print(point2)
        dist = hs.haversine(point1, point2)
        return 1000*round(dist, 8)


    #####################################################
    # DOGT message callback
    #####################################################
    def DOGTcb(self, msg: ROIAndDOGTOutput):
        self.vehicleList = msg.vehicle_list
        
        # print("sus vehiclelist sususususuususususuusususus:", self.vehicleList)

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
        ax.plot(self.pure_pursuit.cx, self.pure_pursuit.cy, "-r") # plot course

        ax.plot([self.pure_pursuit.car_state.x_coord, self.pure_pursuit.target_point[0]],
                [self.pure_pursuit.car_state.y_coord, self.pure_pursuit.target_point[1]], "-g") # pot target point

        abline(self.pure_pursuit.linear_reg.coef_, self.pure_pursuit.linear_reg.intercept_, ax,
               self.pure_pursuit.cx[self.pure_pursuit.curr_index], self.pure_pursuit.cx[self.pure_pursuit.curr_index + sample]) # draw linear regression

        ax.scatter([self.pure_pursuit.target_point[0]], 
                   [self.pure_pursuit.target_point[1]], marker="+") # mark target point

        ax.scatter([self.pure_pursuit.car_state.x_coord],
                   [self.pure_pursuit.car_state.y_coord]) # draw car
        plt.pause(0.001)

        # Google Earth Visualization    - DO NOT DELETE!!
        # lon = msg.longitude
        # lat = msg.latitude
        # self.coords.append((lon, lat))
        # # update the kml on google drive -> update on google earth 
        # docs = self.kml.newdocument(name= 'LinkLine')
        # docs.newlinestring(name= 'PCBLine', coords = self.coords)
        # self.kml.save('LinkLine.kml')
        # for upload_file in self.upload_file_list:
        #     # Read file and set it as the content of this instance.
        #     self.file_drive.SetContentFile(upload_file)
        #     self.file_drive.Upload()


        # self.pure_pursuit.state.update(self.ai, self.di)
        # self.pure_pursuit.state.y = self.ego_car_pose_y_nav * 10000000000000
        # self.pure_pursuit.state.x = self.ego_car_pose_x_nav

        # ax.clear()
        # ax.plot(self.pure_pursuit.target_course.cy,
        #         self.pure_pursuit.target_course.cx, "-r")
        # # ax.scatter([self.pure_pursuit.state.y], [self.pure_pursuit.state.x])
        # plt.pause(0.033)

        # print("i am sus nav: ", self.ego_car_pose_y_nav)
        # print(" i am sus target: ", max(self.pure_pursuit.target_course.cy))

    #####################################################
    # GPS message callback
    #####################################################

    def GPScb(self, msg: GPSAdditionalData):
        self.ego_car_lane = msg.lane_number
        self.ego_car_lane_offset = msg.lane_offset
        self.ego_car_velocity = msg._velocity_local_3d
        self.ego_car_speed = msg.speed * 3.6
        self.ego_car_degree = np.arccos(self.ego_car_velocity._x / (self.ego_car_speed/3.6))
        self.ego_car_pose_y = msg.position._y
        self.ego_car_pose_x = msg.position._x
        self.ego_car_v_x = msg.velocity_local_3d.x
        self.ego_car_v_y = msg.velocity_local_3d.y
        self.ego_car_pose = msg.position
        

        # self.pure_pursuit.state.v = self.ego_car_velocity._x
        # self.pure_pursuit.state.yaw = msg.yaw
        #print(fonts.GREEN + "Ego car lane ID = " + str(self.ego_car_lane))

    # def pure_sus(self):
    #     # for plotting
    #     ax.clear()
    #     ax.plot(self.pure_pursuit.target_course.cx,
    #             self.pure_pursuit.target_course.cy, "-r")
    #     plt.plot(self.pure_pursuit.sus_states.x,
    #              self.pure_pursuit.sus_states.y, "-b", label="trajectory")

    #     # for plotting
    #     print("Degree: ", self.di)
    #     plot_arrow(self.pure_pursuit.state.x,
    #                self.pure_pursuit.state.y, self.pure_pursuit.state.yaw)
    #     plt.pause(0.001)

    def shutdown_handler(self):
        # if self.in_session:
        print(fonts.BOLD + fonts.CYAN + "Quitting Adaptive Cruise Control")

    # Pull Front Car
    def get_front_car(self):

        # Initializing front car
        self.front_car.id = -1
        self.front_car.distance_y = 0
        self.front_car.distance_x = self.maximum_front_car_distance
        self.front_car.velocity = 0

        for idx, car in enumerate(self.vehicleList):
            if(int(car.lane_id) == self.ego_car_lane and car.description.bounding_box.transform.translation.x > 0 and abs(car.description.bounding_box.transform.translation.y) < self.lane_size):
                # print("Distance =" + str(car.description.bounding_box.transform.translation.x) +" to Car#"+ str(idx) +" in vehicle list ")
                if (car.description.bounding_box.transform.translation.x < self.front_car.distance_x):
                    # print("Detected Front Car")
                    self.front_car.distance_x = car.description.bounding_box.transform.translation.x
                    self.front_car.distance_y = car.description.bounding_box.transform.translation.y
                    self.front_car.velocity_x = car.description.motion.linear.x
                    self.front_car.velocity_y = car.description.motion.angular.z
                    self.front_car.id = idx

                 
        print(self.front_car.distance_x , self.front_car.distance_y)

        # new_latitude  = latitude  + (dy / r_earth) * (180 / pi);
        # new_longitude = longitude + (dx / r_earth) * (180 / pi) / cos(latitude * pi/180);   

        point1 = (self.ego_car_pose_x_nav, self.ego_car_pose_y_nav)
        new_latitude = point1[1] + (self.front_car.distance_y / 6378*1000) * (180/math.pi)
        new_longitude = point1[0] + ((self.front_car.distance_x/ (6378*1000)) * (180/math.pi)) / math.cos(point1[1] * math.pi/180)
        point2 = (new_longitude, new_latitude)

        self.dist_from_front_car = self.dist(point1= point1, point2= point2)
        print(self.dist_from_front_car)


    #####################################################
    # PID control for applying adaptive cruise
    #####################################################
    def control(self):
        self.get_front_car()

        #####################################################
        # printing
        # print("ego lane id :", self.ego_car_lane)
        # print("ego car lane offset dis :", self.ego_car_lane_offset)
        # print("speed Km/h:", self.ego_car_speed)
        # print("ego car deg :", self.ego_car_degree)
        # print("ego car pose x",  self.ego_car_pose_x)
        # print("ego car pose y",  self.ego_car_pose_y)
        # print("ego car pose",  self.ego_car_pose)
        # print("ego car v",  self.ego_car_velocity)
        #####################################################

        # gas and barke Control
        error = self.front_car.distance_x - self.reference_distance
        output = self.velocity_PID.output(error)
        # print("sus error: ", error)
        # print("self sus distanse: ", self.front_car.distance_x,
        #       "i am the sus of the sus not change")
        # print("speed pid: ", output)

        #####################################################
        # wheel control
        #####################################################
        error_yaw, error_dist = self.pure_pursuit.run()
        # error_w = error_dist + error_yaw
        error_w = error_yaw
        output_w = self.wheel_PID.output(error_w)
        print("steer: ", output_w)

        #####################################################
        # gas & brake Control
        #####################################################
        # if (error > 1 or error < -1):
        #     print("Error = " + fonts.RED + str(error) +
        #           fonts.ENDC + " Output = " + str(output))
        # else:
        #     print("Error = " + fonts.GREEN + str(error) +
        #           fonts.ENDC + " Output = " + str(output))

        if (output > 0):
            # print("output > 0")
            # self.vehicle_cmd.linear.x = output
            # self.vehicle_cmd.linear.y = 0
            msg = Float32()
            if (self.ego_car_speed > 30):
                msg.data = 0.3
                self.car_cmd_publisher_brake.publish(msg)
                msg.data = 0.0
            elif (20 < self.ego_car_speed < 30):
                msg.data = output * 0.7
            else:
                msg.data = output
                # print("output important :", output)
            self.car_cmd_publisher_gas.publish(msg)
        elif (output < 0):
            # print("output < 0")
            # self.vehicle_cmd.linear.x = 0
            # self.vehicle_cmd.linear.y = -output
            msg = Float32()
            msg.data = -(output)
            self.car_cmd_publisher_brake.publish(msg)
        else:
            # self.vehicle_cmd.linear.x = 0
            # self.vehicle_cmd.linear.y = 0
            msg = Float32()
            msg.data = 0.0
            self.car_cmd_publisher_gas.publish(msg)
            self.car_cmd_publisher_brake.publish(msg)

        #####################################################
        # wheel Control
        #####################################################
        # print("output w : ", output_w)
        # ~~~~~~~~~~~~~~~~ #
        # if self.ego_car_lane != self.desired_lane:
        #     output_w = -output_w
        # ~~~~~~~~~~~~~~~~ #

        if (0 < output_w < 1):
            # self.vehicle_cmd.linear.x = output
            # self.vehicle_cmd.linear.y = 0
            msg = Float32()
            msg.data = output_w
            self.car_cmd_publisher_steer.publish(msg)
            # g29 wheel
            # msg29 = ForceFeedback()
            # msg29.position = output_w
            # msg29.torque = 0.2
            # print("g29")
            # self.wheel_publisher_g29.publish(msg29)

        elif (-1 < output_w < 0):
            # self.vehicle_cmd.linear.x = 0
            # self.vehicle_cmd.linear.y = -output
            msg = Float32()
            msg.data = output_w
            self.car_cmd_publisher_steer.publish(msg)
            # g29 wheel
            # msg29 = ForceFeedback()
            # msg29.position = output_w
            # msg29.torque = 0.2
            # print("g29")
            # self.wheel_publisher_g29.publish(msg29)

        else:
            msg = Float32()
            msg.data = output_w
            self.car_cmd_publisher_steer.publish(msg)
            # g29 wheel
            # msg29 = ForceFeedback()
            # msg29.position = output_w
            # msg29.torque = 0.2
            # print("g29")
            # self.wheel_publisher_g29.publish(msg29)

    #####################################################
    # keyboard listener
    #####################################################

    def keyboard_listener(self):
        # TODO - write it in switch-case format
        if keyboard.is_pressed('escape'):
            quit()

        if keyboard.is_pressed('w'):
            if self.acc_on:
                self.acc_on = False
                print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
            if self.vehicle_cmd.linear.y == 0:
                self.vehicle_cmd.linear.x += self.keyboard_increment_factor
            else:
                self.vehicle_cmd.linear.y -= self.keyboard_increment_factor

        if keyboard.is_pressed('s'):
            if self.acc_on:
                self.acc_on = False
                print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
            if self.vehicle_cmd.linear.x > 0:
                self.vehicle_cmd.linear.x -= self.keyboard_increment_factor
            else:
                self.vehicle_cmd.linear.y += self.keyboard_increment_factor

        if keyboard.is_pressed('a'):
            # if self.acc_on:
            #     self.acc_on = False
            #     print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
            self.vehicle_cmd.angular.z -= self.keyboard_increment_factor/2
        else:
            if keyboard.is_pressed('d'):
                # if self.acc_on:
                #     self.acc_on = False
                #     print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
                self.vehicle_cmd.angular.z += self.keyboard_increment_factor/2
            else:
                self.vehicle_cmd.angular.z = 0

        if keyboard.is_pressed('space'):
            if not self.acc_on:
                print(fonts.BOLD + fonts.GREEN + "ACC Activated" + fonts.ENDC)
                self.acc_on = True
            else:
                print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
                self.acc_on = False

        # Clamp
        if self.vehicle_cmd.linear.x > 1:
            self.vehicle_cmd.linear.x = 1
        elif self.vehicle_cmd.linear.x < 0:
            self.vehicle_cmd.linear.x = 0

        if self.vehicle_cmd.linear.y > 1:
            self.vehicle_cmd.linear.y = 1
        elif self.vehicle_cmd.linear.y < 0:
            self.vehicle_cmd.linear.y = 0

        if self.vehicle_cmd.angular.z > 1:
            self.vehicle_cmd.angular.z = 1

        if self.vehicle_cmd.angular.z < -1:
            self.vehicle_cmd.angular.z = -1

    # def on_key_release(self):
    #     # TODO - write it in switch-case format
    #     if keyboard.is_released('w'):
    #         print(fonts.BOLD + fonts.CYAN + "W key released")
    #     if keyboard.is_released('s'):
    #         print(fonts.BOLD + fonts.CYAN + "S key released")
    #     if keyboard.is_released('a'):
    #         print(fonts.BOLD + fonts.CYAN + "A key released")
    #     if keyboard.is_released('d'):
    #         print(fonts.BOLD + fonts.CYAN + "D key released")


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
