# Google Earth 
from simplekml import Kml
from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive

# ROS
import rclpy
from rclpy.node import Node

# Cognata DT
from sensor_msgs.msg import NavSatFix


class Google_earth_viz(Node):

    def __init__(self):
        super().__init__("Google_earth_viz")
        self.auth = GoogleAuth()
        self.drive = GoogleDrive(self.auth)
        self.upload_file = 'LinkLine.kml'
        self.file_drive = self.drive.CreateFile({'id': '1GNyVRxN3BvbHoYt5Bt8GqgJ9mpYoTu6P'})
        self.coords = []
        # self.kml = Kml()
        self.GPSnavPoint = self.create_subscription(
            NavSatFix, "cognataSDK/GPS/navsat/CognataGPS0002", self.GPScb_nav, 10)  # GPS Point listener

    def GPScb_nav(self, msg : NavSatFix):

        lon = float(msg.longitude)
        lat = float(msg.latitude)
        self.coords.append((lon, lat))
        kml = Kml()
        docs = kml.newdocument(name= 'PCBLine')
        docs.newlinestring(name = 'PCBLine', coords = self.coords)
        docs.style.linestyle.width = 4.0
        kml.save('LinkLine.kml')
        self.file_drive.SetContentFile(self.upload_file)
        self.file_drive.Upload()
    

def main(args=None):
    rclpy.init(args=args)
    google_earth = Google_earth_viz()
    rclpy.spin(google_earth)

    google_earth.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


