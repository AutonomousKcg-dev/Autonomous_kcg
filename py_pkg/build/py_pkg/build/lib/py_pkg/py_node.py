from cv2 import CV_8UC3
import rclpy
from rclpy.node import Node

from std_msgs.msg import String


from diagnostic_msgs.msg import DiagnosticArray 

from nav_msgs.msg import *
from nav_msgs.msg import OccupancyGrid
from nav_msgs.msg import Odometry

from tracked_object_msgs.msg import TrackedObjectArray
from tracked_object_msgs.msg import TrackedObject
from tracked_object_msgs.msg import ObjectTypes

from tracked_lane_msgs.msg import LaneResults
from tracked_lane_msgs.msg import Lane
from tracked_lane_msgs.msg import Boundary
from tracked_lane_msgs.msg import Point   

import cv2
import numpy as np 

colormap = [[0,0,0],[0,240,0],[0,100,0],[120,0,0],[255,0,0]]+[[255,255,255] for i in range(251)]
color_lookup = np.array(colormap, dtype=np.uint8)
channels = 3

def change_color(number):
    return colormap[number]

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.occupancy_grid_sub = self.create_subscription(
            OccupancyGrid,
            'occupancy_grid',
            self.show_occupancy_grid,
            10)

        self.ego_motion_sub = self.create_subscription(
            Odometry,
            'ego_motion',
            self.ego_motion,
            10)

        self.tracked_objects_sub = self.create_subscription(
            TrackedObjectArray,
            'tracked_objects',
            self.tracked_objects,
            10)

        self.tracked_lanes_sub = self.create_subscription(
            LaneResults,
            'tracked_lanes',
            self.tracked_lanes,
            10)

    def show_occupancy_grid(self, msg):
        # self.get_logger().info('I heard: "%s"' % msg)
        
        data = map(change_color, msg.data) 
        
        
        grid = np.array(list(data), dtype=np.uint8)
        # image = np.zeros_like((grid,3))
        grid = np.reshape(grid, (msg.info.height, msg.info.width, 3))
        
        # for c in range(channels):
        # 	image[:,:,channels-c-1] = cv2.LUT(src=grid, lut=color_lookup[:,c])

        cv2.imshow("frame", grid)
        cv2.waitKey(1)
    
    def ego_motion(self, msg):
        # print(msg)
        print("something")
    
    def tracked_objects(self, msg):
        print(msg)
        print("\n\n")
    
    def tracked_lanes(self, msg):
        print(msg)
        print("\n\n")

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

