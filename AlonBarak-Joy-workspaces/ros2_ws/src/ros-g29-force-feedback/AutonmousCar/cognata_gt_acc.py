#!/usr/bin/env python
# scripts for Cognata_ROS1_SDK that enable simulator teleoperation control for EGO car via wheel and pedals inputs.
# for Cognata SDK_ROS1-v0.1.04 and G920 wheel and pedals.
# include acc control and speed display with brake response to stop acc

import rospy2
import math
import keyboard  # Requires Super User (sudo -s)
import json
import datetime
from cognata_sdk.msg import DOGTOutput as MGT
from sensor_msgs.msg import NavSatFix
from std_msgs.msg import Float32, Int8
from sensor_msgs.msg import Joy

closeList = []


class Fonts:  # works only for print() function
    CYAN = '\033[96m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BLUE = '\033[94m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'


class FrontCar:
    def __init__(self):
        self.id = -1
        self.distance_x = 0
        self.distance_y = 0
        self.velocity_x = 0
        self.velocity_y = 0


class Vehicle:

    def __init__(self):
        self.car_cmd_steer = Float32()
        self.car_cmd_accel = Float32()
        self.car_cmd_brake = Float32()
        self.car_cmd_gas = Float32()
        self.car_cmd_accB = Float32()
        self.car_speed = Float32()
        self.acc_on = False  # ACC Flag


class AdaptiveCruiseControl:

    def __init__(self):

        # for running and shutting down purposes
        self.in_session = False

        # represent a struct that contains data about the car state
        self.car = Vehicle()

        # perception parameters
        self.distance = None
        self.can_change_lane = False  # can change lane?
        self.vehicleList = None
        self.lane_num = 2
        self.ego_car_lane = 0
        self.front_car = FrontCar()

        # Predefined parameters
        self.keyboard_increment_factor = 0.1
        self.lane_size = 3.7  # meters
        self.currentListIdx = 0
        self.maximum_front_car_distance = 100  # Initializing maximum front car distance
        self.time_distance = 2.0
        self.reference_distance = 10.0  # Desired keeping distance
        self.error_percentage = 0.1  # 10% Error

        # PID control Parameters
        self.kp = 0.25
        self.kd = 0.7
        self.ka = 1

        # subscribers
        self.dogt_listener = None
        self.gps_listener = None
        self.wheel_listener = None

        # publishers
        self.car_cmd_publisher_steer = None
        self.car_cmd_publisher_accel = None
        self.car_cmd_publisher_drive = None
        self.car_cmd_publisher_brake = None
        self.car_cmd_publisher_gas = None

        # init nodes
        self.init_ros_nodes()

        # wait for response from the perception topics
        print(Fonts.YELLOW + "waiting for all topics to be available...")
        rospy2.wait_for_message("/cognataSDK/dogt", MGT)  # , 120)
        rospy2.wait_for_message("/cognataSDK/GPS/info", NavSatFix)  # , 120)
        print(Fonts.BLUE + "starting ACC application" + Fonts.ENDC)

        # find the number of agents in our radius
        self.number_of_agents = self.find_num_of_agents()

        # set the rate to 10[Hz]
        self.rate = None
        self.set_rate(10)

        # set acceleration ON
        self.acc_on = True

    def init_ros_nodes(self):
        # create a node name 'adaptive_cruise_control_node'
        rospy2.init_node('adaptive_cruise_control_node', anonymous=True)
        rospy2.on_shutdown(self.shutdown_handler)

        # subscribers
        self.dogt_listener = rospy2.Subscriber("/cognataSDK/dogt", MGT, self.DOGTcb)  # DOGT Listener
        self.gps_listener = rospy2.Subscriber("/cognataSDK/GPS/info", NavSatFix, self.GPScb)  # GPS Listener
        self.wheel_listener = rospy2.Subscriber("joy", Joy, self.WHEELcb)  # wheel Listener

        # publishers
        self.car_cmd_publisher_steer = rospy2.Publisher('/cognataSDK/car_command/steer_cmd', Float32,
                                                        queue_size=10)  # Publisher
        self.car_cmd_publisher_accel = rospy2.Publisher('/cognataSDK/car_command/acceleration_cmd', Float32,
                                                        queue_size=10)  # Publisher
        self.car_cmd_publisher_drive = rospy2.Publisher('/cognataSDK/car_command/driver_cmd', Int8,
                                                        queue_size=10)  # Publisher
        self.car_cmd_publisher_brake = rospy2.Publisher('/cognataSDK/car_command/brake_cmd', Float32,
                                                        queue_size=10)  # Publisher
        self.car_cmd_publisher_gas = rospy2.Publisher('/cognataSDK/car_command/gas_cmd', Float32,
                                                      queue_size=10)  # Publisher

    def find_num_of_agents(self) -> int:
        # method that base on the perception, finds the number of objects surrenders our vehicle
        return len(self.vehicleList)  # problematic, len might not work on that Object

    def set_rate(self, rate: int):
        # this method change the Hz in runtime
        self.rate = rospy2.Rate(rate)  # 10 [Hz], default

    # DOGT message callback
    def DOGTcb(self, msg):
        self.vehicleList = msg.vehicleList
        for idx, car in enumerate(self.vehicleList):
            self.distance = pow(car.description.boundingBox.transform.translation.x, 2) + \
                            pow(car.description.boundingBox.transform.translation.y, 2)
            if (math.sqrt(self.distance)) < 10:  # 10 what?? apples, bananas??
                closeList.append(str((0.03 * msg.header.seq)) + ": " + (  # check why we use this
                        str(car.description.ROISubtype) + " Number " + str(
                    car.description.objectId) + " in lane " + str(-int(car.laneId)) + " (X:" + str(
                    ('%.3f' % car.description.boundingBox.transform.translation.x)) + " ,Y:" + str(
                    ('%.3f' % car.description.boundingBox.transform.translation.y)) + ")"))
                # print("Close Vehicle:" + str('%.3f' % (math.sqrt(self.distance))))

    # GPS message callback
    def GPScb(self, msg):
        self.ego_car_lane = msg.position_covariance_type
        self.car.car_speed = msg.longitude

    def WHEELcb(self, msg):
        self.car.car_cmd_steer.data = -1 * msg.axes[0]
        self.car.car_cmd_accB = msg.buttons[23]
        # if self.acc_on == 0:
        self.car.car_cmd_gas.data = (1 + msg.axes[2]) / 2
        self.car.car_cmd_brake.data = (1 + msg.axes[3]) / 2

    def shutdown_handler(self):
        # if self.in_session:
        print(Fonts.BOLD + Fonts.CYAN + "Quitting Adaptive Cruise Control")

    # Pull Front Car
    def get_front_car(self):

        # Initializing front car
        self.front_car.id = -1
        self.front_car.distance_y = 0
        self.front_car.distance_x = self.maximum_front_car_distance  # 100
        self.front_car.velocity = 0

        for idx, car in enumerate(self.vehicleList):
            if (-int(car.laneId) == self.ego_car_lane and
                    car.description.boundingBox.transform.translation.x > 0 and
                    abs(car.description.boundingBox.transform.translation.y) < self.lane_size):
                # print("Distance =" + str(car.description.boundingBox.transform.translation.x) + " to Car#" + str(
                # idx) + " in vehicle list ")

                if car.description.boundingBox.transform.translation.x < self.front_car.distance_x:
                    self.front_car.distance_x = car.description.boundingBox.transform.translation.x
                    self.front_car.distance_y = car.description.boundingBox.transform.translation.y
                    self.front_car.velocity_x = car.description.motion.linear.x
                    self.front_car.velocity_y = car.description.motion.angular.z
                    self.front_car.id = idx

    def cars_in_zone_right(self):
        cars_in_lanes = self.get_cars_in_lane(self.ego_car_lane + 1)
        for car in cars_in_lanes:
            if 25 > car.description.boundingBox.transform.translation.x > 0:
                return False

        return True

    def cars_in_zone_center(self):
        if self.front_car.distance_x > self.reference_distance:
            return False

        return True

    def cars_in_zone_left(self):
        cars_in_lanes = self.get_cars_in_lane(self.ego_car_lane - 1)
        for car in cars_in_lanes:
            if 25 > car.description.boundingBox.transform.translation.x > 0:
                return False

        return True

    def change_lane(self, direction):
        if direction == -1:
            return

    def switch_decision(self):
        if self.lane_num > 1:

            left = self.cars_in_zone_left() and self.cars_in_zone_center()  # if left area is clear
            right = self.cars_in_zone_right() and self.cars_in_zone_center()  # if right area is clear

            if left:
                try:
                    self.change_lane(-1)
                except:
                    print("error in change lane left")

            elif right:
                try:
                    self.change_lane(1)
                except:

                    print("error in change lane left")

    #   PID control for applying adaptive cruise
    def control(self):
        # X Control
        self.lane_num = 2  # need to be change dynamically with subscriber in cognata sdk
        error = self.front_car.distance_x - self.reference_distance  # distance
        error_dot = self.front_car.velocity_x  # - ego_car_speed
        error_itg = 0  #
        output = self.kp * error + self.kd * error_dot + self.ka * error_itg

        if ((error / self.reference_distance) > self.error_percentage) or (
                (error / self.reference_distance) < -self.error_percentage):
            print(Fonts.ENDC + "no car in lane")

        else:
            print(Fonts.ENDC + "distance = " + Fonts.GREEN + str(error / self.reference_distance * 100)[0:5] + "%")

            if self.front_car.velocity_x < 30 and self.front_car.distance_x < 80:
                self.switch_decision()

        if (error / self.reference_distance) >= 4:  # speed limit to 75 (ratio of 15 speed to acceleration)
            self.car.car_cmd_accel.data = 5 / self.car.car_speed

        else:
            self.car.car_cmd_accel.data = output
        # self.car_cmd_accel.data = self.clamp(output, -1, 1)

    def keyboard_listener(self):
        if keyboard.is_pressed('escape'):
            quit()
        if keyboard.is_pressed('space'):
            if not self.acc_on:
                print(Fonts.BOLD + Fonts.GREEN + "ACC Activated" + Fonts.ENDC)
                self.acc_on = True
            else:
                print(Fonts.BOLD + Fonts.RED + "ACC Disengage" + Fonts.ENDC)
                self.acc_on = False

    # Clamp
    def clamp(self, n, smallest, largest):
        return max(smallest, min(n, largest))

    def get_cars_in_lane(self, lane_id):  # test
        """
        Get all the vehicles in a given lane
        :param lane_id: the id of the lane
        :return: a list of vehicles
        """
        return [car for car in self.vehicleList if car.laneId == lane_id]


if __name__ == '__main__':
    try:
        # create a new instance of adaptive_cruise_control
        acc = AdaptiveCruiseControl()

        # preform as long as ros2 is ON
        while not rospy2.is_shutdown():

            # listen to command from the keyboard (might change in the future to ros joy)
            acc.keyboard_listener()
            # publish the desired steer base on the input from the keyboard
            acc.car_cmd_publisher_steer.publish(acc.car.car_cmd_steer)

            # check if the breaks are pressed, update the acceleration
            if acc.car.car_cmd_brake.data != 0.0:
                acc.acc_on = False

            # check if the car accelerate or not
            if acc.acc_on:
                # look for nearby objects (cars, animals, humans etc..)
                print(Fonts.BOLD + Fonts.GREEN + "ACC IS ON")
                acc.get_front_car()
                # base on the objects found nearby, update the steer of the wheel and publish it
                acc.control()
                acc.car_cmd_publisher_accel.publish(acc.car.car_cmd_accel)
            else:
                # publish that the car is slowing down since acceleration is off
                print(Fonts.BOLD + Fonts.RED + "ACC IS OFF")
                acc.car_cmd_publisher_brake.publish(acc.car.car_cmd_brake)
                acc.car_cmd_publisher_gas.publish(acc.car.car_cmd_gas)
            acc.rate.sleep()

        acc.in_session = True
        print(Fonts.BOLD + Fonts.CYAN + "Quitting Adaptive Cruise Control")
    except rospy2.ROSInterruptException:
        rospy2.loginfo("adaptive_cruise_control_node finished")
