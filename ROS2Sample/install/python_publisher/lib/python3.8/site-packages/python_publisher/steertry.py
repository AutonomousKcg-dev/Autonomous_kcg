#!/usr/bin/env python
# scripts for Cognata_ROS1_SDK that enable simulator teleoperation control for EGO car via wheel and pedals inputs.
# for Cognata SDK_ROS1-v0.1.04 and G920 wheel and pedals.
# include acc control and speed display with brake response to stop acc

from concurrent.futures import thread
from threading import Thread
import threading
import rclpy
from rclpy.node import Node
import math
import keyboard
import json
import datetime
# import cognata_sdk_ros2.msg
from cognata_sdk_ros2.msg import *
import keyboard  # Requires Super User (sudo -s)
import datetime
from sensor_msgs.msg import Joy
from std_msgs.msg import Float32
from python_publisher.adaptive_cruise_control import adaptive_cruise_control


########################################################################################################
########################################################################################################
########################################################################################################


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        # subscribers
        self.joy_sus = self.create_subscription(
            Joy, "/joy", self.joy_callback, 10)

        # publishers
        self.car_cmd_publisher_steer = self.create_publisher(
            Float32, '/cognataSDK/car_command/steer_cmd', 10)
        self.car_cmd_publisher_accel = self.create_publisher(
            Float32, '/cognataSDK/car_command/acceleration_cmd', 10)
        self.car_cmd_publisher_brake = self.create_publisher(
            Float32, '/cognataSDK/car_command/brake_cmd', 10)
        self.car_cmd_publisher_gas = self.create_publisher(
            Float32, '/cognataSDK/car_command/gas_cmd', 10)

        # timer
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

        # msg
        self.car_cmd_steer = Float32()
        self.car_cmd_gas = Float32()
        self.car_cmd_brake = Float32()
        self.pub = False

    def timer_callback(self):
        # publish
        if self.pub:
            self.car_cmd_publisher_brake.publish(self.car_cmd_brake)
            self.car_cmd_publisher_steer.publish(self.car_cmd_steer)
            self.car_cmd_publisher_gas.publish(self.car_cmd_gas)

    def joy_callback(self, message: Joy):
        # recieve
        self.pub = True
        print(message)
        self.car_cmd_steer.data = -1 * message.axes[0]
        self.car_cmd_gas.data = (1 + message.axes[2]) / 2
        self.car_cmd_brake.data = (1 + message.axes[3]) / 2


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
