import rclpy
from rclpy.node import Node

import keyboard  # Requires Super User (sudo -s)
# from cognata_sdk_ros2.msg import *
from cognata_sdk_ros2.msg import ROIAndDOGTOutput, GPSAdditionalData, VehicleMsg
from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
import numpy as np
from .controllerPID import PID
import matplotlib.pyplot as plt 
# TODO 1 - closing loop with PID on the distance to front car as well as y axis for staying in the lane
# TODO 2 - front car class



class record_sub(Node):

    def __init__(self):
        super().__init__("record_sub")
        # copy this ya gever
        self.ego_car_pose_y_nav = NavSatFix()
        self.ego_car_pose_x_nav = NavSatFix()
        self.sub = self.create_subscription(NavSatFix, "cognataSDK/GPS/navsat/CognataGPS0002", self.GPScb_nav, 30) # GPS Point listener
        self.x_list = []
        self.y_list = []
        
    

    def GPScb_nav(self, msg: NavSatFix):
        self.ego_car_pose_y_nav = msg.latitude
        self.ego_car_pose_x_nav = msg.longitude
        print("Longitude: " , self.ego_car_pose_x_nav)
        print("Latitude: " , self.ego_car_pose_y_nav)
        with open("path.txt", "a") as gps_path:
            gps_path.write(str(self.ego_car_pose_x_nav) + "," + str(self.ego_car_pose_y_nav) +'\n')
        self.x_list.append(self.ego_car_pose_x_nav)
        self.y_list.append(self.ego_car_pose_y_nav)
        plt.plot(self.x_list, self.y_list)
        # copy until here!!!!!!!!!!

def main(args=None):
    rclpy.init(args=args)

    rcc = record_sub()

    rclpy.spin(rcc)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    rcc.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

