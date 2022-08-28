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
from sklearn.linear_model import LinearRegression


@dataclass
class State:
    x_coord: float
    y_coord: float
    last_x_coord: float
    last_y_coord: float
    velocity: float = 50.0


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
        self.target_point = None
        self.car_state = State(cx[0], cy[0], cx[0], cy[0])
        self.linear_reg = None
        self.sample = 5
        np.seterr(all='ignore')

    def closest_point(self):
        # find closest point
        if self.curr_index < len(self.cx):
            closest_point = (self.cx[self.curr_index], self.cy[self.curr_index])
            position = (self.car_state.x_coord, self.car_state.y_coord)
            closest_point_index = self.curr_index

            for i in range(self.curr_index, len(self.cx)):
                point = (self.cx[i], self.cy[i])
                if math.dist(position, closest_point) > math.dist(position, point):
                    closest_point = point
                    closest_point_index = i

            self.curr_index = closest_point_index

            # estimate road direction
            x = np.array(
                self.cx[self.curr_index:self.curr_index + self.sample]).reshape((-1, 1))
            y = np.array(
                self.cy[self.curr_index:self.curr_index + self.sample]).reshape((-1, 1))
            self.linear_reg = LinearRegression()
            self.linear_reg.fit(x, y)
            print(len(self.cx))
            print(len(self.cy))
            print(self.curr_index + self.sample + 1)
            if self.curr_index + self.sample + 1 < len(self.cx):
                x_target = self.cx[self.curr_index + self.sample + 1]
                y_target = self.linear_reg.predict(np.array([x_target]).reshape(-1, 1))
                self.target_point = (x_target, y_target)
            else:
                x_target = self.cx[0]
                y_target = self.linear_reg.predict(np.array([x_target]).reshape(-1, 1))
                self.target_point = (x_target, y_target)
        

    def run(self):
        """
        process current state and get the degree in which we want to steer
        """
        # update closest point
        self.closest_point()

        # get vector
        desired_vector = np.array([self.target_point[0] - self.car_state.x_coord, self.target_point[1] -
                                  self.car_state.y_coord], dtype="float64")  # vector to the target point

        # current road direction vector
        actual_vector = np.array([self.car_state.x_coord - self.car_state.last_x_coord,
                                 self.car_state.y_coord - self.car_state.last_y_coord], dtype="float64")

        # get angle - we might need to change this
        angle = np.degrees(np.math.atan2(np.linalg.det(
            [desired_vector, actual_vector]), np.dot(desired_vector, actual_vector)))

        # get distance
        last_point = (self.cx[self.curr_index], self.cy[self.curr_index])
        curr_point = (self.car_state.x_coord, self.car_state.y_coord)
        dist = math.dist(last_point, curr_point)

        # print("Angle: ", angle)
        # print("Dist: ", dist)

        return angle, dist
        # FACTORY REBOT

    def update_path(self, cx, cy):
        self.cx = cx
        self.cy = cy


def main():
    print("Pure pursuit path tracking simulation start")


if __name__ == '__main__':
    main()
