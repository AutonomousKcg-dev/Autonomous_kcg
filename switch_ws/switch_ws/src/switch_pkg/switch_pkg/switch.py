
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


colormap = [[0,0,0],[0,240,0],[0,100,0],[120,0,0],[255,0,0]]+[[255,255,255] for i in range(251)]
color_lookup = np.array(colormap, dtype=np.uint8)
channels = 3



@dataclass()
class road_object:
	type: int = -1
	lane_id: int = -1

@dataclass()
class State:
	lanes: List = field(default_factory=list, repr=False)
	n_lanes: int = 0
	lane_objects: List = field(default_factory=list)
	lane_id: int = -1
	ego_lane: Lane = field(default_factory=Lane, repr=False)
	obj_coords: List = field(default_factory=list, repr=False)

# global state 
state = State()
lane_dict = {}

# hyperparameteres
show_gps = False
show_lanes = True
show_grid = True

# plots
figure, lane_ax = plt.subplots()

gps_trace = []
gps_figure, gps_ax = plt.subplots()

def change_color(number):
    return colormap[number]

def objects_in_lane(objects: List[TrackedObject], lane_id: int):
	if lane_id < len(state.lanes):
		lane: Lane = state.lanes[lane_id]
		if len(lane.left_boundary.points) > 0 and len(lane.right_boundary.points) > 0:
			obj_in_lane = []
			for idx, obj in enumerate(objects):
				# get object coords
				obj_coords = (obj.object_pose_m_quat.position.x, obj.object_pose_m_quat.position.y, obj.object_pose_m_quat.position.z)

				# get closest point from the left
				left_points = lane.left_boundary.points
				closest_left_point = (left_points[0].x, left_points[0].y, left_points[0].z)

				for point in left_points:
					point_tuple = (point.x, point.y, point.z)
					if math.dist(point_tuple, obj_coords) < math.dist(closest_left_point, obj_coords):
						closest_left_point = point_tuple
				
				# get closest point from the right
				right_points = lane.right_boundary.points
				closest_right_point = (right_points[0].x, right_points[0].y, right_points[0].z)

				for point in right_points:
					point_tuple = (point.x, point.y, point.z)
					if math.dist(point_tuple, obj_coords) < math.dist(closest_right_point, obj_coords):
						closest_right_point = point_tuple

				# check if the object is between the boundries
				if obj_coords[1] > closest_right_point[1] and obj_coords[1] < closest_left_point[1]:
					obj_in_lane.append(obj)
			
			return obj_in_lane


class Switch(Node):
	def __init__(self):
		super().__init__('switch')
		# subscribers
		self.create_subscription(LaneResults, "/tracked_lanes", self.lane_message_callback, 10)
		self.create_subscription(TrackedObjectArray, "/tracked_objects", self.objects_message_callback, 10)
		self.create_subscription(OccupancyGrid, "/occupancy_grid", self.occupancy_grid_callback, 10)
		self.create_subscription(NavSatFix, "/gps_data", self.gps_data_callback, 10)

	def lane_message_callback(self, msg: LaneResults):
		state.lane_id = msg.num_adjacent_right
		state.n_lanes = msg.num_adjacent_right + msg.num_adjacent_right + 1
		state.ego_lane = msg.ego_lane
		state.lanes = list(msg.adjacent_right) + [msg.ego_lane] + list(msg.adjacent_left)

	def objects_message_callback(self, msg:TrackedObjectArray):
		object_list = list(msg.tracked_objects)
		
		# plto lanes if requested
		if state.lanes and show_lanes:
			lane_ax.clear()
			lane_ax.set_title("Lanes")
			print("---------------------------------------------------------------------")
			for idx, lane in enumerate(state.lanes):
				left_points = list(lane.left_boundary.points)
				right_points = list(lane.right_boundary.points)
				x_left = [l.x for l in left_points]
				x_right = [l.x for l in right_points]
				y_left = [l.y for l in left_points]
				y_right = [l.y for l in right_points]

				lane_ax.plot(x_left, y_left)
				lane_ax.plot(x_right, y_right)
				print("Left Boundry Of Lane #{}: {}".format(idx, len(left_points)))
				print("Right Boundry Of Lane #{}: {}".format(idx, len(right_points)))
				print()
			print("---------------------------------------------------------------------")
			print()

		# plot objects if requested to plot lanes
		if object_list and show_lanes:
			for obj in object_list:
				object_x = [obj.object_pose_m_quat.position.x]
				object_y = [obj.object_pose_m_quat.position.y]
				lane_ax.scatter(object_x, object_y)
				lane_ax.arrow(obj.object_pose_m_quat.position.x, obj.object_pose_m_quat.position.y, obj.object_velocity_mps_radps.linear.x, obj.object_velocity_mps_radps.linear.y)
		
			plt.pause(0.005)

	def occupancy_grid_callback(self, msg:OccupancyGrid):
		# plot occupancy grid
		if show_grid:
			# self.get_logger().info('I heard: "%s"' % msg)
			
			data = map(change_color, msg.data) 
			
			
			grid = np.array(list(data), dtype=np.uint8)
			# image = np.zeros_like((grid,3))
			grid = np.reshape(grid, (msg.info.height, msg.info.width, 3))
			
			# for c in range(channels):
			# 	image[:,:,channels-c-1] = cv2.LUT(src=grid, lut=color_lookup[:,c])

			cv2.imshow("frame", grid)
			cv2.waitKey(1)

	def gps_data_callback(self, msg: NavSatFix):
		# plot gps
		if show_gps:
			gps_ax.clear()
			coords = (msg.longitude, msg.latitude)

			gps_trace.append(coords)
			x = [point[0] for point in gps_trace]
			y = [point[1] for point in gps_trace]
			gps_ax.set_xlim(8.656, 8.667)
			gps_ax.set_ylim(50.061, 50.063)
			gps_ax.plot(x, y)
			plt.pause(0.005)

def main(args=None):
	global show_gps, show_lanes, show_grid
	print("Switch Node Running")
	# print("Arguments: {}".format(sys.argv[1:]))

	# show_gps = "-gps" in sys.argv
	# show_lanes = "-lanes" in sys.argv 
	# show_grid = "-grid" in sys.argv

	if not show_gps:
		plt.close(gps_figure)

	# if not show_lanes:
	# 	plt.close(figure)

	rclpy.init(args=args)
	switch = Switch()

	rclpy.spin(switch)	

	# Destroy the node explicitly
	# (optional - otherwise it will be done automatically
	# when the garbage collector destroys the node object)
	if show_gps:
		plt.close(gps_figure)

	if show_lanes:
		plt.close(figure)

	switch.destroy_node()
	rclpy.shutdown()


if __name__ == '__main__':
	main()
