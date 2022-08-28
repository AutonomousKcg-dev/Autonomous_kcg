import rclpy
from rclpy.node import Node

from typing import List
from dataclasses import field, dataclass

from tracked_lane_msgs.msg import LaneResults, Lane, Boundary, Point
from tracked_object_msgs.msg import TrackedObjectArray, TrackedObject

from nav_msgs.msg import OccupancyGrid
from sensor_msgs.msg import NavSatFix

import math
import sys
from operator import concat
import matplotlib.pyplot as plt
import numpy as np
import cv2

from .submodules.lanes import LaneData
from .submodules.objects import Object
from .submodules.switch import SwitchControl

fig, ax = plt.subplots(figsize=(20, 12))


def plot_all(objects: List[Object], lanes: List[Lane], switch: SwitchControl = None):
    # plot all lanes
    if lanes:
        for lane in lanes:
            try:
                ax.plot(lane.left_bound[:, 0], lane.left_bound[:, 1], "-r")
                ax.plot(lane.right_bound[:, 0], lane.right_bound[:, 1], "-r")
                if len(lane.center) > 0:
                    ax.plot(lane.center[:, 0], lane.center[:, 1], "--b")
            except Exception as e:
                pass

    # plot all cars
    if objects:
        for obj in objects:
            plt.scatter(obj.position[0], obj.position[1], c="black")

    if switch and switch.front_car:
        plt.scatter(
            switch.front_car.position[0], switch.front_car.position[1], c="red")

    plt.pause(0.1)


def boundary_to_numpy(boundary: Boundary) -> np.ndarray:
    # print(boundary.points)
    return np.array([[p.x, p.y] for p in boundary.points])


class Switch(Node):
    def __init__(self):
        super().__init__('switch')
        # subscribers
        self.create_subscription(
            LaneResults, "/tracked_lanes", self.lane_message_callback, 10)
        self.create_subscription(
            TrackedObjectArray, "/tracked_objects", self.objects_message_callback, 10)
        self.create_subscription(
            OccupancyGrid, "/occupancy_grid", self.occupancy_grid_callback, 10)
        self.create_subscription(
            NavSatFix, "/gps_data", self.gps_data_callback, 10)

        # lanes
        self.lanes = []

        # objects
        self.objects = []

        # switch
        self.switch = SwitchControl(self.objects, self.lanes)

    def lane_message_callback(self, msg: LaneResults):
        # init lanes list
        lanes = list(msg.adjacent_right) + \
            [msg.ego_lane] + list(msg.adjacent_left)
        self.lanes.clear()

        # clear axis and plot the lanes
        ax.cla()
        if lanes:
            for lane in lanes:
                right_boundary = boundary_to_numpy(lane.right_boundary)
                left_boundary = boundary_to_numpy(lane.left_boundary)
                new_lane = LaneData(right_boundary, left_boundary)
                self.lanes.append(new_lane)

            self.switch.lanes = self.lanes
            self.switch.update_car_lanes()
            plot_all(self.objects, self.lanes, self.switch)

    def objects_message_callback(self, msg: TrackedObjectArray):
        self.objects.clear()
        if msg.tracked_objects:
            for obj in msg.tracked_objects:
                obj: TrackedObject = obj
                x = obj.object_pose_m_quat.position.x
                y = obj.object_pose_m_quat.position.y
                new_object = Object(np.array([x, y]))
                self.objects.append(new_object)

            self.switch.objects = self.objects
            self.switch.update_car_lanes()
            

        # plot
        ax.cla()
        plot_all(self.objects, self.lanes, self.switch)

    def occupancy_grid_callback(self, msg: OccupancyGrid):
        pass

    def gps_data_callback(self, msg: NavSatFix):
        pass


def main(args=None):
    print("Switch Node Running")

    rclpy.init(args=args)
    switch = Switch()

    rclpy.spin(switch)

    switch.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
