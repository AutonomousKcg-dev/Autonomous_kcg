from lib2to3.pytree import Node
import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from typing import Tuple
from autoware_auto_msgs.msg import TrajectoryPoint
from autoware_auto_msgs.msg import VehicleKinematicState


class Convertor(Node):
    """
        Converts GPS point to a local plane point in real time.
    """


    def __init__(self):
        
        super().__init__("gps_to_plane")

        self.gps_sub = self.create_subscription(NavSatFix, "gps_topic_name", self.callback, 10)
        self.plane_pub = self.create_publisher(Tuple, "plane_topic", 10)
        self.state_pub = self.create_publisher(VehicleKinematicState, "vehicle_state", 10)
        self.anchor_point = (35.0, 32.0)    # TODO
        self.route = []


    def callback(self, msg: NavSatFix):
        """
            This method convert the given GPS point and publish a (X,Y) point.
        """

        long1 = self.anchor_point[0] * (math.pi/180)
        lat1 = self.anchor_point[1] * (math.pi/180)

        long2 = msg.longitude * (math.pi/180)
        lat2 = msg.latitude * (math.pi/180)

        x = long2 - long1
        y = lat2 - lat1
        self.route.append((x,y))

        trajectory = TrajectoryPoint()
        trajectory.x = x
        trajectory.y = y
        trajectory.heading = 0.0 # TODO
        trajectory.longitudinal_velocity_mps = 5.0  # TODO

        new_msg = VehicleKinematicState()
        new_msg.state = trajectory


        

        # publish the point on the plane
        self.plane_pub.publish((x, y))

    def save(self):
        with open('route.csv', 'w') as f:
            for coord in self.route:
                f.write(coord[0],",",coord[1],"\n")
            f.close()
            


def main(args=None):

    """
        ROS2 main method - Node.
    """

    rclpy.init(args=args)
    convertor = Convertor()
    rclpy.spin(convertor)
    convertor.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

        
