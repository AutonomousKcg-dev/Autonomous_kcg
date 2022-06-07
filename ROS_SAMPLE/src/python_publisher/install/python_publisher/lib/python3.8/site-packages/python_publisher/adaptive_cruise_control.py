#!/usr/bin/env python
import rospy2
import keyboard # Requires Super User (sudo -s)
from cognata_sdk_ros2.msg import * 
from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32


# TODO 1 - closing loop with PID on the distance to front car as well as y axis for staying in the lane
# TODO 2 - front car class

class fonts: # works only for print() function
    CYAN = '\033[96m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BLUE = '\033[94m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'

class front_car:
    id = -1
    distance_x = 0
    distance_y = 0
    velocity_x = 0
    velocity_y = 0
class adaptive_cruise_control:

    def __init__(self):
        rospy2.init_node('adaptive_cruise_control_node', anonymous=True)
        self.in_session = False # for running and shutting down purposes
        rospy2.on_shutdown(self.shutdown_handler)
        self.vehicleList = None
        self.ego_car_lane = 0
        self.vehicle_cmd = Twist()
        self.acc_on = False # ACC Flag
        self.keyboard_increment_factor = 0.1
        self.lane_size = 3.7 # meters
        self.front_car = front_car()
        self.currentListIdx = 0
        self.maximum_front_car_distance = 100 # Initializing maximum front car distance

        self.reference_distance = 20 # Desired keeping distance

        self.kp = 0.5 # PID control Parameters
        self.kd = 0.5
        self.ka = 1

        # subscribers
        self.dogt_listener = rospy2.Subscriber("/cognataSDK/dogt/GlobalSensors", ROIAndDOGTOutput, self.DOGTcb) # DOGT Listener
        self.gps_listener = rospy2.Subscriber("/cognataSDK/GPS/info/CognataGPS", GPSAdditionalData, self.GPScb) # GPS Listener
        
        # publishers
        # self.vehicle_cmd_publisher = rospy2.Publisher('/cognataSDK/vehicle_cmd', Twist, queue_size=10) # Publisher
        self.car_cmd_publisher_steer = rospy2.Publisher(Float32, '/cognataSDK/car_command/steer_cmd', 10)
        self.car_cmd_publisher_accel = rospy2.Publisher(Float32, '/cognataSDK/car_command/acceleration_cmd', 10)
        self.car_cmd_publisher_brake = rospy2.Publisher(Float32, '/cognataSDK/car_command/brake_cmd', 10)
        self.car_cmd_publisher_gas = rospy2.Publisher(Float32, '/cognataSDK/car_command/gas_cmd', 10)

        print(fonts.YELLOW + "waiting for all topics to be avalable...")
        rospy2.wait_for_message("/cognataSDK/dogt", ROIAndDOGTOutput, 120)
        rospy2.wait_for_message("/cognataSDK/GPS/info/CognataGPS", GPSAdditionalData, 120)
        print(fonts.BLUE + "starting ACC application" + fonts.ENDC)
        self.number_of_agents = len(self.vehicleList)
        #print(fonts.BOLD + fonts.BLUE + "Vehicle List Size = " +str(len(self.vehicleList))) # Printing Number of Vehicle Agents
        self.rate =  rospy2.Rate(10) # 10 [Hz]
        while not rospy2.is_shutdown():
            self.keyboard_listener()
            if (self.acc_on):
                self.get_front_car()
                self.control()
            # self.vehicle_cmd_publisher.publish(self.vehicle_cmd)
            self.rate.sleep()

        self.in_session = True


    # DOGT message callback
    def DOGTcb(self, msg):
        self.vehicleList = msg.vehicleList

    # GPS message callback
    def GPScb(self, msg):
        self.ego_car_lane = msg.position_covariance_type
        #print(fonts.GREEN + "Ego car lane ID = " + str(self.ego_car_lane))

    def shutdown_handler(self):
        #if self.in_session:
        print(fonts.BOLD + fonts.CYAN + "Quitting Adaptive Cruise Control")

    # Pull Front Car
    def get_front_car(self):

        # Initializing front car
        self.front_car.id = -1
        self.front_car.distance_y = 0
        self.front_car.distance_x = self.maximum_front_car_distance
        self.front_car.velocity = 0

        for idx, car in enumerate(self.vehicleList):
            if(-int(car.laneId) == self.ego_car_lane and car.description.boundingBox.transform.translation.x > 0 and abs(car.description.boundingBox.transform.translation.y) < self.lane_size): #
                #print("Distance =" + str(car.description.boundingBox.transform.translation.x) +" to Car#"+ str(idx) +" in vehicle list ")
                if (car.description.boundingBox.transform.translation.x < self.front_car.distance_x):
                    self.front_car.distance_x = car.description.boundingBox.transform.translation.x
                    self.front_car.distance_y = car.description.boundingBox.transform.translation.y
                    self.front_car.velocity_x = car.description.motion.linear.x
                    self.front_car.velocity_y = car.description.motion.angular.z
                    self.front_car.id = idx
                    # print("[" + self.vehicleList[idx].description.objectId + "," + self.vehicleList[idx].description.ROISubtype + "," + str(self.dist_to_front_car) + "]")
        # if (self.front_car.id >= 0):
        #     print("front car No." + fonts.BOLD + fonts.BLUE + self.vehicleList[self.front_car.id].description.objectId + fonts.ENDC + " is : " + fonts.BOLD + fonts.BLUE + self.vehicleList[self.front_car.id].description.ROISubtype + fonts.ENDC + ", with distance : "+ fonts.BOLD + fonts.BLUE +str(self.vehicleList[self.front_car.id].description.boundingBox.transform.translation.x) + fonts.ENDC)
        # else:
        #     print(fonts.BOLD + fonts.BLUE + "Maximum Space" + fonts.ENDC)
        # return 1

    #   PID control for applying adaptive cruise
    def control(self):
        # X Control
        error = self.front_car.distance_x - self.reference_distance
        error_dot = self.front_car.velocity_x #- ego_car_speed
        error_itg = 0 #
        output = self.kp * error + self.kd * error_dot + self.ka * error_itg

        if (error > 1 or error < -1):
            print("Error = " + fonts.RED + str(error) + fonts.ENDC + " Output = " +str(output))
        else:
            print("Error = " + fonts.GREEN + str(error) + fonts.ENDC +  " Output = " +str(output))

        if (output > 0):
            # self.vehicle_cmd.linear.x = output
            # self.vehicle_cmd.linear.y = 0
            self.car_cmd_publisher_gas(output)
        elif (output < 0):
            # self.vehicle_cmd.linear.x = 0
            # self.vehicle_cmd.linear.y = -output
            self.car_cmd_publisher_brake(-output)
        else:
            # self.vehicle_cmd.linear.x = 0
            # self.vehicle_cmd.linear.y = 0
            self.car_cmd_publisher_gas(0)
            self.car_cmd_publisher_brake(0)

        # Y Control

    def keyboard_listener(self):
        # TODO - write it in switch-case format
        if keyboard.is_pressed('escape'):
            quit()

        if keyboard.is_pressed('w'):
            if self.acc_on:
                self.acc_on = False
                print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
            if self.vehicle_cmd.linear.y == 0:
                self.vehicle_cmd.linear.x += self.keyboard_increment_factor
            else:
                self.vehicle_cmd.linear.y -= self.keyboard_increment_factor

        if keyboard.is_pressed('s'):
            if self.acc_on:
                self.acc_on = False
                print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
            if self.vehicle_cmd.linear.x > 0:
                self.vehicle_cmd.linear.x -= self.keyboard_increment_factor
            else:
                self.vehicle_cmd.linear.y += self.keyboard_increment_factor

        if keyboard.is_pressed('a'):
            # if self.acc_on:
            #     self.acc_on = False
            #     print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
            self.vehicle_cmd.angular.z -= self.keyboard_increment_factor/2
        else:
            if keyboard.is_pressed('d'):
                # if self.acc_on:
                #     self.acc_on = False
                #     print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
                self.vehicle_cmd.angular.z += self.keyboard_increment_factor/2
            else:
                self.vehicle_cmd.angular.z = 0

        if keyboard.is_pressed('space'):
            if not self.acc_on:
                print(fonts.BOLD + fonts.GREEN + "ACC Activated" + fonts.ENDC)
                self.acc_on = True
            else:
                print(fonts.BOLD + fonts.RED + "ACC Disengage" + fonts.ENDC)
                self.acc_on = False

        # Clamp
        if self.vehicle_cmd.linear.x > 1:
            self.vehicle_cmd.linear.x = 1
        elif self.vehicle_cmd.linear.x < 0:
            self.vehicle_cmd.linear.x = 0

        if self.vehicle_cmd.linear.y > 1:
            self.vehicle_cmd.linear.y = 1
        elif self.vehicle_cmd.linear.y < 0:
            self.vehicle_cmd.linear.y = 0

        if self.vehicle_cmd.angular.z > 1:
            self.vehicle_cmd.angular.z = 1

        if self.vehicle_cmd.angular.z < -1:
            self.vehicle_cmd.angular.z = -1

    # def on_key_release(self):
    #     # TODO - write it in switch-case format
    #     if keyboard.is_released('w'):
    #         print(fonts.BOLD + fonts.CYAN + "W key released")
    #     if keyboard.is_released('s'):
    #         print(fonts.BOLD + fonts.CYAN + "S key released")
    #     if keyboard.is_released('a'):
    #         print(fonts.BOLD + fonts.CYAN + "A key released")
    #     if keyboard.is_released('d'):
    #         print(fonts.BOLD + fonts.CYAN + "D key released")

if __name__ == '__main__':
    try:
        adaptive_cruise_control()
    except rospy2.ROSInterruptException:
        rospy2.loginfo("adaptive_cruise_control_node finished")
