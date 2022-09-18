# Ros Topics Data types - Vaya
from tracked_lane_msgs.msg import LaneResults, Lane, Boundary, Point
from tracked_object_msgs.msg import TrackedObjectArray, TrackedObject
from nav_msgs.msg import OccupancyGrid, Odometry
from geometry_msgs.msg import Twist, Pose, Point
from std_msgs.msg import Float32

# Generic Imports
import enum
import math
import numpy as np

"""
    Auxuliary Classes
"""
class front_padastrian:
    id = -1
    distance_x = 100
    distance_y = 0
    velocity_x = 0
    velocity_y = 0


class front_car:
    id = -1
    distance_x = 100
    distance_y = 0
    velocity_x = 0
    velocity_y = 0

class State(enum.Enum):
    ACC = 1
    CHANGE_LANE = 2
    STOP_CAR = 3
    STOP_PED = 4


class Direction(enum.Enum):
    RIGHT = 1
    LEFT = -1


"""
    Main Class
"""

class switch_vaya:

    def __init__(self, ref_dist=25):
        # Object section
        self.pedestrian_list = []
        self.vehicle_list = []
        self.front_car: front_car = None
        self.front_ped: front_padastrian = None

        # Lanes
        self.ego_lane : Lane = Lane()
        self.target_lane: Lane = Lane()
        self.num_of_lanes = 4   # default
        self.right_lanes = []
        self.left_lanes = []
        self.switch_lane_direction = Direction.LEFT     # default
        
        # ego car information
        self.speed = 30
        self.radius = 3.7
        self.state = State.ACC  # ACC is the starting state
        self.refernce_distance = ref_dist   # the distance the car should keep from its front car
        self.side_lane_look_ahead = (-30, 30)  # meters
        self.min_speed = 5     # front car should be atleast that speed
        self.changed_lane = True
    
    def update_objects(self, vehicle_list, pedestrian_list):
        """
            This method update the detected objects lists.
            Such as Vehicles and Pedesstrians
        """
        self.pedestrian_list = pedestrian_list
        self.vehicle_list = vehicle_list
    
    def update_lane_info(self, right_lanes, left_lanes):
        """
            This method update the detected lanes lists.
            Right and left
        """
        self.right_lanes = right_lanes
        self.left_lanes = left_lanes
    
    def object_priority(self, front_car: front_car, front_ped: front_padastrian) -> bool:
        # find the closest object
        return (math.dist((0, 0), (front_car.distance_x, front_car.distance_y)) >
                math.dist((0, 0), (front_ped.distance_x, front_ped.distance_y)))
    
    def in_area(self, area_x, area_y, object: TrackedObject, direction: str) -> bool:
        """
            this method checks wheter the object is in the given area
        """
        center_point = (object.object_pose_m_quat.position.x, object.object_pose_m_quat.position.y)
        if direction == 'left':
            if area_y[0] <= center_point[0] <= area_y[1]:
                if area_x[0] <= center_point[1] <= area_x[1]:
                    return True
            return False
        else:
            if area_y[0] <= center_point[0] <= area_y[1]:
                if area_x[0] >= center_point[1] >= area_x[1]:
                    return True
            return False

    def switch_lane_is_possible(self) -> bool:
        """
            This method checks if it is possible to switch lane, 
            return True if it is and update the direction of the turn.
            else, return False.
        """
        # decide if switch lane is possible, decide which direction to take (left, right)
        left_area_x = (self.radius/2, self.radius*(3/2))        
        left_area_y = (self.side_lane_look_ahead[0], self.side_lane_look_ahead[1])
        left_free = True

        right_area_x = (-self.radius/2, -self.radius * (3/2))     
        right_area_y = (self.side_lane_look_ahead[0], self.side_lane_look_ahead[1])

        # first, check left area
        for car in self.vehicle_list:
            if self.in_area(left_area_x, left_area_y, car, 'left'):
                left_free = False

        for ped in self.pedestrian_list:
            if self.in_area(left_area_x, left_area_y, ped, 'left'):
                # both lanes aren't free
                left_free = False
        
        if left_free:
            # choose left lane
            self.switch_lane_direction = Direction.LEFT
            print("LEFT TURN")
            return True
        
        # Second, check for the right lane
        for car in self.vehicle_list:
            if self.in_area(right_area_x, right_area_y, car, 'right'):
                # both lanes aren't free
                print("CANT SWITCH LANE")
                return False

        for ped in self.pedestrian_list:
            if self.in_area(right_area_x, right_area_y, ped, 'right'):
                # both lanes aren't free
                print("CANT SWITCH LANE")
                return False

        # the right lane is free
        self.switch_lane_direction = Direction.RIGHT
        print("RIGHT TURN")
        return True
    
    def print_debug(self):
        """
            Print Debug method.
        """
        areas = {'left': 0, 'mid': 0, 'right': 0}
        # decide if switch lane is possible, decide which direction to take (left, right)
        left_area_x = (self.radius/2, self.radius*(3/2)
                       )        # Actually Y in cognata

        # Actually X in cognata
        left_area_y = (
            self.side_lane_look_ahead[0], self.side_lane_look_ahead[1])
        left_free = True

        right_area_x = (-self.radius/2, -self.radius *
                        (3/2))     # Actually Y in cognata

        # Actually X in cognata
        right_area_y = (
            self.side_lane_look_ahead[0], self.side_lane_look_ahead[1])

        mid_area_x = (-self.radius/2, self.radius/2)
        mid_area_y = (
            self.side_lane_look_ahead[0], self.side_lane_look_ahead[1])

        for car in self.vehicle_list:
            if self.in_area(left_area_x, left_area_y, car, 'left'):
                areas['left'] += 1
            elif self.in_area(right_area_x, right_area_y, car, 'right'):
                areas['right'] += 1
            elif self.in_area(mid_area_x, mid_area_y, car, 'left'):
                areas['mid'] += 1
        
        print(areas)
    
    def run(self, front_car: front_car, front_ped: front_padastrian):
        """
            this method is the main method.
            Update the switch state for the decision making.
            TODO Sync with the actual switch lane.
        """
        # Make a decision
        self.front_car = front_car
        self.front_ped = front_ped
        # need checking!!!!!
        front_car_speed = np.linalg.norm(
            (self.front_car.velocity_x, self.front_car.velocity_y)) * 3.6

        # print(front_car_speed)
        self.state = State.ACC

        # if self.state == State.ACC:
        #     if self.object_priority(self.front_car, self.front_ped):
        #         # ped is closer
        #         if self.front_ped.distance_x < self.refernce_distance:
        #             # STOP!!!!
        #             self.state = State.STOP_PED
        #     else:
        #         # car is closer
        #         if self.front_car.distance_x < self.refernce_distance:
        #             # car is damn close
        #             # Debug
        #             print("Front Car Speed: ", front_car_speed)
        #             if front_car_speed < self.min_speed:
        #                 # the car infornt of us is slow af
        #                 self.state = State.STOP_CAR
        #             elif front_car_speed < self.speed:
        #                 # we want tp switch lane
        #                 if self.switch_lane_is_possible():
        #                     # we want and can switch lane
        #                     self.state = State.CHANGE_LANE
        #                 # else, keep on ACC
        # elif self.state == State.STOP_PED:
        #     # DECIDE WHETER TO HOLD THE BRAKE OR MOVE TO ACC
        #     if self.front_ped.distance_y > self.radius or self.front_ped.distance_y < -self.radius:
        #         # ped cleared the way
        #         self.state = State.ACC
        # elif self.state == State.STOP_CAR:
        #     if self.front_car.distance_x > self.refernce_distance:
        #         # front car cleared way
        #         self.state = State.ACC
        #     elif front_car_speed > self.min_speed:
        #         # front car is speeding
        #         self.state = State.ACC

        # else:
        #     # STATE = CHANGE_LANE
        #     if self.changed_lane:
        #         self.state = State.ACC
        #         self.changed_lane = False
            
        # DEBUG
        self.print_debug()









