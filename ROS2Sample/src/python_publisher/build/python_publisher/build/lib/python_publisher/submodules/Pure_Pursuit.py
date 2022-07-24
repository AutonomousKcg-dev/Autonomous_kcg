
"""
Path tracking simulation with pure pursuit steering and PID speed control.
author: Atsushi Sakai (@Atsushi_twi)
        Guillaume Jacquenot (@Gjacquenot)
"""
from curses import raw
from matplotlib.image import pil_to_array
import numpy as np
import math
import matplotlib.pyplot as plt

# Parameters
k = 0.8  # look forward gain
Lfc = 1000.0  # [m] look-ahead distance
Kp = 1.0  # speed proportional gain
dt = 0.1  # [s] time tick
WB = 2.9  # [m] wheel base of vehicle

show_animation = True


class State:

    def __init__(self, x=0.0, y=0.0, yaw=0.0, v=0.0):
        self.x = x
        self.y = y
        self.yaw = yaw
        self.v = v
        self.rear_x = self.x - ((WB / 2) * math.cos(self.yaw))
        self.rear_y = self.y - ((WB / 2) * math.sin(self.yaw))

    def update(self, a, delta):
        # self.x += self.v * math.cos(self.yaw) * dt
        # self.y += self.v * math.sin(self.yaw) * dt
        self.yaw += self.v / WB * math.tan(delta) * dt
        self.v += a * dt
        # self.rear_x = self.x - ((WB / 2) * math.cos(self.yaw))
        # self.rear_y = self.y - ((WB / 2) * math.sin(self.yaw))

    def calc_distance(self, point_x, point_y):
        dx = self.rear_x - point_x
        dy = self.rear_y - point_y
        return math.hypot(dx, dy)


class States:

    def __init__(self):
        self.x = []
        self.y = []
        self.yaw = []
        self.v = []
        self.t = []

    def append(self, t, state):
        self.x.append(state.x)
        self.y.append(state.y)
        self.yaw.append(state.yaw)
        self.v.append(state.v)
        self.t.append(t)


def proportional_control(target, current):
    a = Kp * (target - current)

    return a


class TargetCourse:

    def __init__(self, cx, cy):
        self.cx = cx
        self.cy = [10000000000000 * num for num in cy]
        self.old_nearest_point_index = None

    def search_target_index(self, state):

        # To speed up nearest point search, doing it at only first time.
        if self.old_nearest_point_index is None:
            # search nearest point index
            dx = [state.rear_x - icx for icx in self.cx]
            dy = [state.rear_y - icy for icy in self.cy]
            d = np.hypot(dx, dy)
            ind = np.argmin(d)
            self.old_nearest_point_index = ind
        else:
            ind = self.old_nearest_point_index
            distance_this_index = state.calc_distance(self.cx[ind],
                                                      self.cy[ind])
            while True:
                distance_next_index = state.calc_distance(self.cx[ind + 1],
                                                          self.cy[ind + 1])
                if distance_this_index < distance_next_index:
                    break
                ind = ind + 1 if (ind + 1) < len(self.cx) else ind
                distance_this_index = distance_next_index
            self.old_nearest_point_index = ind

        Lf = k * state.v + Lfc  # update look ahead distance

        # search look ahead target point index
        while Lf > state.calc_distance(self.cx[ind], self.cy[ind]):
            if (ind + 1) >= len(self.cx):
                break  # not exceed goal
            ind += 1

        return ind, Lf


def pure_pursuit_steer_control(state, trajectory, pind):
    ind, Lf = trajectory.search_target_index(state)

    if pind >= ind:
        ind = pind

    if ind < len(trajectory.cx):
        tx = trajectory.cx[ind]
        ty = trajectory.cy[ind]
    else:  # toward goal
        tx = trajectory.cx[-1]
        ty = trajectory.cy[-1]
        ind = len(trajectory.cx) - 1

    alpha = math.atan2(ty - state.y, tx - state.x) - state.yaw
    
    delta = math.atan2(2.0 * WB * math.sin(alpha) / Lf, 1.0)

    return delta, ind


def plot_arrow(x, y, yaw, length=1.0, width=0.5, fc="r", ec="k"):
    """
    Plot arrow
    """

    if not isinstance(x, float):
        for ix, iy, iyaw in zip(x, y, yaw):
            plot_arrow(ix, iy, iyaw)
    else:
        plt.arrow(x, y, length * math.cos(yaw), length * math.sin(yaw),
                  fc=fc, ec=ec, head_width=width, head_length=width)
        plt.plot(x, y)


class PurePursuit:
    """
    a class for pure pursuit 
    """

    def __init__(self,
                 cx: list,
                 cy: list,
                 init_yaw: float) -> None:
        self.target_course = TargetCourse(cx, cy)
        self.state = State(cx[0], cy[0], init_yaw, 0.0)
        self.sus_states = States()
        self.lastIndex = len(cx) - 1
        self.time = 0
        self.target_speed = 45.0 / 3.6  # [m/s]
        self.target_ind, _ = self.target_course.search_target_index(self.state)

    def process(self):
        """
        process current state and get the degree in which we want to steer
        """
        # get steer
        ai = proportional_control(self.target_speed, self.state.v)
        di = 0
        if self.target_ind < len(self.target_course.cx) - 1:
            di, self.target_ind = pure_pursuit_steer_control(
                self.state, self.target_course, self.target_ind)

        # update state
        # self.state.update(ai, di)

        # for logging
        #################################
        # save states
        self.time += 1
        self.sus_states.append(self.time, self.state)
        ###################################

        return di, ai


def main():
    fig, ax = plt.subplots()

    #  target course
    cx = np.arange(0, 50, 0.5)
    cy = [math.sin(ix / 5.0) * ix / 2.0 for ix in cx]

    lastIndex = len(cx) - 1

    # main purpursuit algo
    algo = PurePursuit(cx, cy, 0.0)

    while True:
        # for plotting
        ax.clear()
        ax.plot(algo.target_course.cx, algo.target_course.cy, "-r")
        plt.plot(algo.sus_states.x, algo.sus_states.y, "-b", label="trajectory")

        # use pure pursuit algo
        deg, ai = algo.process()

        # for plotting
        print("Degree: ", deg)
        plot_arrow(algo.state.x, algo.state.y, algo.state.yaw)
        plt.pause(0.001)
        

if __name__ == '__main__':
    print("Pure pursuit path tracking simulation start")
    main()
