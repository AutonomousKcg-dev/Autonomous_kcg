import os

import matplotlib.pyplot as plt
import numpy as np


def _read_lane(file_path):
    lane = []
    with open(file_path, "r") as lane_file:
        for line in lane_file.readlines():
            coords = line.split(",")
            x, y = float(coords[0]), float(coords[1])
            lane.append([x, y])

    return np.array(lane, dtype="object")


class LaneReader:
    def __init__(self, lane_dir_name="lanes", start_lane_idx=0):
        # lanes
        self._lanes = {}

        # index of the lane we are tracking now
        self._track_lane_idx = start_lane_idx

        # read lanes from the dir
        for lane_file in os.listdir(lane_dir_name):
            lane_file_path = "{}/{}".format(lane_dir_name, lane_file)
            lane_idx = int(lane_file.split("_")[1])
            self._lanes[lane_idx] = _read_lane(lane_file_path)

        # number of lanes
        self._n_lanes = len(self._lanes)

    def change_lane(self, lane_id):
        self._track_lane_idx = lane_id

    def size(self):
        return self._n_lanes

    def plot_lanes(self):
        for lane in self._lanes.values():
            plt.plot(lane[:, 0], lane[:, 1], "--g")

    def get_lane(self):
        return self._lanes[self._track_lane_idx][:, 0], self._lanes[self._track_lane_idx][:, 1]

    def __repr__(self):
        return "Lane Reader: \n\tnumer of lanes: {} \n\tlane 1: {}".format(len(self._lanes), self._lanes[self._track_lane_idx])
