#!/usr/bin/env python
# scripts for Cognata_ROS1_SDK that enable simulator teleoperation control for EGO car via wheel and pedals inputs.
# for Cognata SDK_ROS1-v0.1.04 and G920 wheel and pedals.
# include acc control and speed display with brake response to stop acc

import rclpy
import math
import keyboard  # Requires Super User (sudo -s)
import datetime
from sensor_msgs.msg import Joy




# publishers
car_cmd_publisher_steer = rclpy.Publish('/cognataSDK/car_command/steer_cmd', Float32,
                                                queue_size=10)  # Publisher
car_cmd_publisher_accel = rclpy.Publish('/cognataSDK/car_command/acceleration_cmd', Float32,
                                                queue_size=10)  # Publisher
car_cmd_publisher_drive = rclpy.Publish('/cognataSDK/car_command/driver_cmd', Int8,
                                                queue_size=10)  # Publisher
car_cmd_publisher_brake = rclpy.Publish('/cognataSDK/car_command/brake_cmd', Float32,
                                                queue_size=10)  # Publisher
car_cmd_publisher_gas = rclpy.Publish('/cognataSDK/car_command/gas_cmd', Float32,
                                              queue_size=10)  # Publisher
                                        

car_cmd_steer.data = -1 * msg.axes[0]
car_cmd_accB = msg.buttons[23]
car_cmd_gas.data = (1 + msg.axes[2]) / 2
car_cmd_brake.data = (1 + msg.axes[3]) / 2

car_cmd_publisher_brake.publish(car_cmd_brake)
car_cmd_publisher_steer.publish(car_cmd_steer)
car_cmd_publisher_gas.publish(car_cmd_gas)




      


