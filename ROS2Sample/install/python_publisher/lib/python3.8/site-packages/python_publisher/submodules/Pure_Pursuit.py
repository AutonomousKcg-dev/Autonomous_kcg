
"""
Path tracking simulation with pure pursuit steering and PID speed control.
author: Atsushi Sakai (@Atsushi_twi)
        Guillaume Jacquenot (@Gjacquenot)
"""
from curses.ascii import LF
from dataclasses import dataclass
from matplotlib.image import pil_to_array
import numpy as np
import math
import matplotlib.pyplot as plt

@dataclass
class State:
    x_coord: float
    y_coord: float
    last_x_coord: float
    last_y_coord: float
    velocity: float = 50.0

value_dist = 300

class PurePursuit:
    """
    a class for pure pursuit 
    """

    def __init__(self,
                 cx: list,
                 cy: list,
                 init_yaw: float = 0.0) -> None:
        self.cx = cx
        self.cy = cy
        self.yaw = init_yaw
        self.curr_index = 0
        self.car_state = State(cx[0], cy[0], cx[0], cy[0])

    def closest_point(self):
        closest_point = (self.cx[self.curr_index], self.cy[self.curr_index])
        position = (self.car_state.x_coord, self.car_state.y_coord)
        closest_point_index = self.curr_index

        for i in range(self.curr_index, len(self.cx)):
            point = (self.cx[i], self.cy[i])
            if math.dist(position, closest_point) > math.dist(position, point):
                closest_point = point
                closest_point_index = i

        self.curr_index = closest_point_index


    def run(self):
        """
        process current state and get the degree in which we want to steer
        """
        # update closest point 
        self.closest_point()

        # get vector
        desired_vector = np.array([self.cx[self.curr_index + value_dist], self.cy[self.curr_index + value_dist]]) - np.array([self.car_state.x_coord, self.car_state.y_coord])
        actual_vector = np.array([self.car_state.x_coord, self.car_state.y_coord]) - np.array([self.car_state.last_x_coord, self.car_state.last_y_coord])
        
        # get angle
        angle = np.degrees(np.math.atan2(np.linalg.det([desired_vector,actual_vector]),np.dot(desired_vector ,actual_vector)))

        # get distance
        last_point = (self.cx[self.curr_index], self.cy[self.curr_index])
        curr_point = (self.car_state.x_coord, self.car_state.y_coord)
        dist = math.dist(last_point, curr_point)

        print("Angle: ", angle)
        print("Dist: ", dist)

        return angle, dist


def main():
    print("Pure pursuit path tracking simulation start")


if __name__ == '__main__':
    main()
