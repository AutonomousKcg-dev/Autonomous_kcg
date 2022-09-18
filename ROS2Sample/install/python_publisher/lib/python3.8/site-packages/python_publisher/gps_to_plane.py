from lib2to3.pytree import Node
import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from typing import Tuple
from autoware_auto_planning_msgs.msg import TrajectoryPoint


class Convertor(Node):
    """
        Converts GPS point to a local plane point in real time.
    """


    def __init__(self):
        
        super().__init__("gps_to_plane")

        self.gps_sub = self.create_subscription(NavSatFix, "gps_topic_name", self.callback, 10)
        self.plane_pub = self.create_publisher(Tuple, "plane_topic", 10)
        self.anchor_point = (35.0, 32.0)    # TODO ogen``


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

        trajectory = TrajectoryPoint()
        

        # publish the point on the plane
        self.plane_pub.publish((x, y))



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

        
