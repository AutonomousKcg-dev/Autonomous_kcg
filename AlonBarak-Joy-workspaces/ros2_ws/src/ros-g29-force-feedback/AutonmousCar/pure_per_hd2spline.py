
import numpy as np
import math
import matplotlib.pyplot as plt
from pyroutelib3 import Router

# Parameters
k = 0.1  # look forward gain
Lfc = 2.5  # [m] look-ahead distance
Kp = 0.05  # speed proportional gain
dt = 0.2  # [s] time tick
WB = 2.7  # [m] wheel base of vehicle
cfl = 10  # look forward for a curve
ts = 50.0  # target speed
dth = 15.0  # degree threshold for curve detection

show_animation = True
DEBUG = False

router = Router("car", "simple_graph.osm")

start_node = 1020777341
end_node = 391950258

start_coord = router.nodeLatLon(start_node)
end_coord = router.nodeLatLon(end_node)

start = router.findNode(start_coord[0], start_coord[1])
end = router.findNode(end_coord[0], end_coord[1])


class State:

    def __init__(self, x=0.0, y=0.0, yaw=0.0, v=0.0):
        self.x = x
        self.y = y
        self.yaw = yaw
        self.v = v
        self.rear_x = self.x - ((WB / 2) * math.cos(self.yaw))
        self.rear_y = self.y - ((WB / 2) * math.sin(self.yaw))

    def update(self, a, delta):
        self.x += self.v * math.cos(self.yaw) * dt
        self.y += self.v * math.sin(self.yaw) * dt
        self.yaw += self.v / WB * math.tan(delta) * dt
        self.v += a * dt
        self.rear_x = self.x - ((WB / 2) * math.cos(self.yaw))
        self.rear_y = self.y - ((WB / 2) * math.sin(self.yaw))

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
        self.cy = cy
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

    alpha = math.atan2(ty - state.rear_y, tx - state.rear_x) - state.yaw

    delta = math.atan2(2.0 * WB * math.sin(alpha) / Lf, 1.0)
    # print(trajectory.old_nearest_point_index)

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


def detect_incoming_curve(target_course: TargetCourse, state, target_ind):
    """
    check for an incoming curve

    :param target_course: the course (path) that the car should follow
    :param state:  the current state of the car
    :param target_ind: the index of the target point in the course
    :return: True if there is a curve coming up else False
    """
    angle = 0
    if target_ind + cfl < len(target_course.cx):
        target_point = (target_course.cx[target_ind], target_course.cy[target_ind])
        far_point = (target_course.cx[target_ind + cfl], target_course.cy[target_ind + cfl])
        v1 = np.array([target_point[0] - state.x, target_point[1] - state.y])
        v2 = np.array([far_point[0] - state.x, far_point[1] - state.y])

        v1 = v1 / np.linalg.norm(v1)
        v2 = v2 / np.linalg.norm(v2)
        dot_product = np.dot(v1, v2)
        angle = np.arccos(dot_product)

    return np.degrees(angle) > dth


def main():
    global ts
    factor = 100000.0

    #  target course
    status, route = router.doRoute(start, end)
    path = list(map(router.nodeLatLon, route))
    print(path)
    path = [np.array([x[0], x[1]]) for x in path]
    path = [x * factor for x in path]
    cx = np.array([x[0] for x in path])
    cy = np.array([x[1] for x in path])

    # cx = np.arange(0, 150, 0.5)
    # cy = [math.sin(ix / 5.0) * ix / 2.0 for ix in cx]

    # target_speed = ts / 3.6  # [m/s]
    swap = False

    T = 100.0  # max simulation time

    # initial state
    initial_state = np.array([32.2156988, 34.9925102])
    initial_state = initial_state * factor
    state = State(x=initial_state[0], y=initial_state[1], yaw=0.0, v=0.0)

    lastIndex = len(cx) - 1
    time = 0.0
    states = States()
    states.append(time, state)
    target_course = TargetCourse(cx, cy)
    target_ind, _ = target_course.search_target_index(state)
    prev = None

    while T >= time and lastIndex > target_ind:

        if target_ind > 50 and not swap and DEBUG:
            target_course.cy = [num + 10 for num in cy]
            prev = cy
            cy = [num + 10 for num in cy]
            swap = True

        # check for a curve
        if detect_incoming_curve(target_course, state, target_ind):
            print("Curve Incoming!")
            target_speed = ts / (3.6 * 2)
        else:
            target_speed = ts / 3.6

        # Calc control input
        ai = proportional_control(target_speed, state.v)
        di, target_ind = pure_pursuit_steer_control(
            state, target_course, target_ind)

        state.update(ai, di)  # Control vehicle
        # print(di)

        time += dt
        states.append(time, state)

        if show_animation:  # pragma: no cover
            plt.cla()
            # for stopping simulation with the esc key.
            plt.gcf().canvas.mpl_connect(
                'key_release_event',
                lambda event: [exit(0) if event.key == 'escape' else None])
            plot_arrow(state.x, state.y, state.yaw)
            plt.plot(cx, cy, "-r", label="course")
            plt.plot(states.x, states.y, "-b", label="trajectory")
            plt.plot(cx[target_ind], cy[target_ind], "xg", label="target")
            if target_ind + cfl < len(cx):
                plt.plot(cx[target_ind + cfl], cy[target_ind + cfl], "xb", label="target")

            plt.axis("equal")
            plt.grid(True)
            plt.title("Speed[km/h]:" + str(state.v * 3.6)[:4])
            plt.pause(0.001)

    # Test
    assert lastIndex >= target_ind, "Cannot goal"

    if show_animation:  # pragma: no cover
        plt.cla()
        if DEBUG:
            plt.plot(cx, cy, ".r", label="course after change")
            plt.plot(cx, prev, ".g", label="course before change")
        else:
            plt.plot(cx, cy, ".r", label="course")
        plt.plot(states.x, states.y, "-b", label="trajectory")
        plt.legend()
        plt.xlabel("x[m]")
        plt.ylabel("y[m]")
        plt.axis("equal")
        plt.grid(True)

        plt.subplots(1)
        plt.plot(states.t, [iv * 3.6 for iv in states.v], "-r")
        plt.xlabel("Time[s]")
        plt.ylabel("Speed[km/h]")
        plt.grid(True)
        plt.show()


if __name__ == '__main__':
    print("Pure pursuit path tracking simulation start")
    main()