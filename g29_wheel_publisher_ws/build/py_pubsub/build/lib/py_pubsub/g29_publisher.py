import rclpy
from rclpy.node import Node
from msg._ForceFeedback import ForceFeedback

class G29_Talker(Node):

    def __init__(self):
        super().__init__("G29_Talker")
        self._publisher = self.create_publisher(ForceFeedback, 'ff_target', 10)
        timer_period = 0.5 
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        g29msg = ForceFeedback()
        g29msg.position = float(input("Enter Degree: ")) * (1/900)
        g29msg.torque = float(input("Enter Torque: "))
        self._publisher.publish(g29msg)

def main(args):
    rclpy.init(args=args)

    g29_publisher = G29_Talker()

    rclpy.spin(g29_publisher)

    g29_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
