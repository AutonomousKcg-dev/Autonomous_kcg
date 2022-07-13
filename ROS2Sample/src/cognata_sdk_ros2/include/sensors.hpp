//
// sensors.hpp - Cognata SDK ROS2 sample sensor definitions
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#ifndef __COGNATASENSORS_H__
#define __COGNATASENSORS_H__

//SDK
#include <CognataSim.h>
#include <MathUtils.h>
#include <vectors.pb.h>
#include <google/protobuf/util/json_util.h>
//ROS
#include <sensor_msgs/msg/image.hpp> //  Image
#include <sensor_msgs/msg/point_cloud2.hpp> // PointCloud
#include <nav_msgs/msg/odometry.hpp> // Odometry
#include <sensor_msgs/msg/nav_sat_fix.hpp> // NavSatFix
#include <sensor_msgs/msg/nav_sat_status.hpp> // NavSatStatus
#include <sensor_msgs/msg/imu.hpp> // Imu
#include <rclcpp/logger.hpp> //logging
// simple keyboard handling for windows and Linux
#include "keyPress.hpp" 
// Cognata SDK Ros utility functions
#include "ros_utility_funcs.hpp"
// User defined ROS Messages
#include "cognata_sdk_ros2/msg/car_telemetries_msg.hpp"
#include "cognata_sdk_ros2/msg/radar_output_header.hpp"
#include "cognata_sdk_ros2/msg/roi_and_dogt_output.hpp"
#include "cognata_sdk_ros2/msg/gps_additional_data.hpp"
//ROS Topic defs
#define RGB_CAMERA_TOPIC "/cognataSDK/image/rgb/"
#define SCL_CAMERA_TOPIC "/cognataSDK/image/class/"
#define SIL_CAMERA_TOPIC "/cognataSDK/image/instance/"
#define DEPTH_CAMERA_TOPIC "/cognataSDK/image/depth/"
#define LIDAR_TOPIC "/cognataSDK/lidar/"
#define RADAR_TOPIC "/cognataSDK/radar/"
#define GPS_NAVSAT "/cognataSDK/GPS/navsat/"
#define GPS_IMU "/cognataSDK/GPS/imu/"
#define GPS_INFO "/cognataSDK/GPS/info/"
#define TELEMETRY_TOPIC "/cognataSDK/telemetry/info/"
#define DRIVER_CMD_TOPIC "/cognataSDK/car_command/driver_cmd"
#define GAS_CMD_TOPIC "/cognataSDK/car_command/gas_cmd"
#define BRAKE_CMD_TOPIC "/cognataSDK/car_command/brake_cmd"
#define STEER_CMD_TOPIC "/cognataSDK/car_command/steer_cmd"
#define ACCELERATION_CMD_TOPIC "/cognataSDK/car_command/acceleration_cmd"
#define ROI_TOPIC "/cognataSDK/roi/"
#define DOGT_TOPIC "/cognataSDK/dogt/"

/*!
 * Class containing information on ego car
 */
class EgoData
{
public:
    EgoData() : m_Position(0.0f, 0.0f, 0.0f),
                m_GPSPosition(0.0f, 0.0f, 0.0f),
                m_VelocityLocal(0.0f, 0.0f, 0.0f),
                m_AccelerationLocal(0.0f, 0.0f, 0.0f),
                m_AngularVelocityLocal(0.0f, 0.0f, 0.0f),
                m_AngularAccelerationLocal(0.0f, 0.0f, 0.0f)
    {
    }

    /// true if ego car was initialized successfully
    bool m_IsInitialized = false;
    /// ego car heading in degrees
    float m_Heading = 0.0f;
    /// ego car speed in meters per second
    float m_Speed = 0.0f;
    /// ego car position
    Eigen::Vector3f m_Position;
    /// position of GPS
    Eigen::Vector3f m_GPSPosition;
    /// ego car local velocity
    Eigen::Vector3f m_VelocityLocal;
    /// ego car local acceleration
    Eigen::Vector3f m_AccelerationLocal;
    /// ego car local angular velocity
    Eigen::Vector3f m_AngularVelocityLocal;
    /// ego car local angular acceleration
    Eigen::Vector3f m_AngularAccelerationLocal;
};

class ClosestTarget
{
public:
    bool m_IsValid = false;
    float m_DistLgt = 0.0f;
};

class OEM_ROIProcessing : public Cognata::SDK::CameraGT
{
public:
    OEM_ROIProcessing(std::shared_ptr<EgoData> egoData, 
                      std::shared_ptr<ClosestTarget> closestTarget, 
                      Cognata::SDK::SensorQueryReport sensor, 
                      rclcpp::Node::SharedPtr publisher_node)
        : m_ClosestTarget(closestTarget),
          m_EgoData(egoData)
    {
        m_RoiPub = publisher_node->
                    create_publisher<cognata_sdk_ros2::msg::ROIAndDOGTOutput>(
                    (ROI_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::ROIOutput &roiOutput) override;

private:
    cognata_sdk_ros2::msg::ROIAndDOGTOutput 
                createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                      const Cognata::SDK::ROIOutput &roiOutput);

    std::shared_ptr<ClosestTarget> m_ClosestTarget;
    const std::shared_ptr<EgoData> m_EgoData;
    bool m_firstProcess = true;
    Eigen::Vector3f m_EgoBeginningPos;
    float m_EgoBeginningHdg;

    rclcpp::Publisher<cognata_sdk_ros2::msg::ROIAndDOGTOutput>::SharedPtr m_RoiPub;
};

class OEM_E2CCProcessing : public Cognata::SDK::E2CChannel
{
public:
    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::E2COutput &e2COutput) override;
};

class OEM_LaneDetectorProcessing : public Cognata::SDK::LaneDetector
{
public:
    OEM_LaneDetectorProcessing(std::shared_ptr<EgoData> egoData, 
                               Cognata::SDK::SensorQueryReport sensor, 
                               rclcpp::Node::SharedPtr publisher_node) : 
                               m_EgoData(egoData)
    {
        //TODO: Lane detector publisher creation here
    }
    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::LaneDetectorOutput &ldOutput) override;

private:
    std::shared_ptr<EgoData> m_EgoData;

    //TODO: rclcpp::Publisher<LANE DETECTION MSG>::SharedPtr mLaneDetection_pub;
};

class OEM_GPSProcessing : public Cognata::SDK::GPS
{
public:
    OEM_GPSProcessing(std::shared_ptr<EgoData> egoData, 
                      Eigen::Vector3f &gpsPos, 
                      Cognata::SDK::SensorQueryReport sensor, 
                      rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_GpsNavPub = publisher_node->
                create_publisher<sensor_msgs::msg::NavSatFix>(
                    (GPS_NAVSAT + sensor.name()), rclcpp::SystemDefaultsQoS());
        m_GpsImuPub = publisher_node->
                create_publisher<sensor_msgs::msg::Imu>(
                    (GPS_IMU + sensor.name()), rclcpp::SystemDefaultsQoS());
        m_GpsInfoPub = publisher_node->
                create_publisher<cognata_sdk_ros2::msg::GPSAdditionalData>(
                    (GPS_INFO + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::GPSOutput &gpsOutput) override;

private:
    void updateEgoData(const Cognata::SDK::GPSOutput &gpsOutput);
    sensor_msgs::msg::NavSatFix 
                createNavRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                      const Cognata::SDK::GPSOutput &gpsOutput);
    sensor_msgs::msg::Imu 
                createImuRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                      const Cognata::SDK::GPSOutput &gpsOutput);
    cognata_sdk_ros2::msg::GPSAdditionalData
                createGpsInfoRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                      const Cognata::SDK::GPSOutput &gpsOutput);
    std::shared_ptr<EgoData> m_EgoData;

    rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr m_GpsNavPub;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr m_GpsImuPub;
    rclcpp::Publisher<cognata_sdk_ros2::msg::GPSAdditionalData>::SharedPtr m_GpsInfoPub;
};

class OEM_LdoLidarProcessing : public Cognata::SDK::Lidar
{
public:
    OEM_LdoLidarProcessing(std::shared_ptr<EgoData> egoData, 
                           Eigen::Vector3f &gpsPos, 
                           Cognata::SDK::SensorQueryReport sensor, 
                           rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        addLdoDataToVector(m_LidarStructure);
        m_LidarPub = publisher_node->
            create_publisher<sensor_msgs::msg::PointCloud2>(
                (std::string(LIDAR_TOPIC) + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::LidarOutput &lidarOutput) override;

private:
    sensor_msgs::msg::PointCloud2 
            createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                 const Cognata::SDK::LidarOutput &lidarOutput);
    std::shared_ptr<EgoData> m_EgoData;
    std::vector<PointStruct> m_LidarStructure;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr m_LidarPub;
};

class OEM_LdgLidarProcessing : public Cognata::SDK::Lidar
{
public:
    OEM_LdgLidarProcessing(std::shared_ptr<EgoData> egoData, 
                           Eigen::Vector3f &gpsPos, 
                           Cognata::SDK::SensorQueryReport sensor, 
                           rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        addLdgDataToVector(m_LidarStructure);
        m_LidarPub = publisher_node->
            create_publisher<sensor_msgs::msg::PointCloud2>(
                (std::string(LIDAR_TOPIC) + sensor.name()), rclcpp::SystemDefaultsQoS());        
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::LidarOutput &lidarOutput) override;

private:
    sensor_msgs::msg::PointCloud2 
                    createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                  const Cognata::SDK::LidarOutput &lidarOutput);
    void addPaddedDataToRosMsg(sensor_msgs::msg::PointCloud2 &lidarRosMsg, 
                                  const Cognata::SDK::LidarOutput &lidarOutput);
    std::shared_ptr<EgoData> m_EgoData;
    std::vector<PointStruct> m_LidarStructure;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr m_LidarPub;
};

class OEM_RadarProcessing : public Cognata::SDK::Radar
{
public:
    OEM_RadarProcessing(std::shared_ptr<EgoData> egoData, 
                        Eigen::Vector3f &gpsPos, 
                        Cognata::SDK::SensorQueryReport sensor, 
                        rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_RadarPub = publisher_node->
            create_publisher<cognata_sdk_ros2::msg::RadarOutputHeader>(
                (RADAR_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::RadarOutput &radarOutput) override;
    
private:
    std::shared_ptr<EgoData> m_EgoData;
    cognata_sdk_ros2::msg::RadarOutputHeader 
            createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                                 const Cognata::SDK::RadarOutput &radarOutput);
    cognata_sdk_ros2::msg::RadarOutputTarget 
                      createRosTarget(Cognata::SDK::RadarOutput_Target target);
    rclcpp::Publisher<cognata_sdk_ros2::msg::RadarOutputHeader>::SharedPtr m_RadarPub;
};

class OEM_RGBCameraProcessing : public Cognata::SDK::RGBCamera
{
public:
    OEM_RGBCameraProcessing(std::shared_ptr<EgoData> egoData, 
                            const Eigen::Vector3f &gpsPos, 
                            const Cognata::SDK::SensorQueryReport sensor, 
                            rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_RgbCameraPub = publisher_node->
            create_publisher<sensor_msgs::msg::Image>(
                (RGB_CAMERA_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::RGBCameraOutput &rgbCameraOutput) override;

private:
    std::shared_ptr<EgoData> m_EgoData;
    sensor_msgs::msg::Image 
        createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                          const Cognata::SDK::RGBCameraOutput &rgbCameraOutput);
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr m_RgbCameraPub;
};

class OEM_DchDepthCameraProcessing : public Cognata::SDK::DepthCamera
{
public:
    OEM_DchDepthCameraProcessing(std::shared_ptr<EgoData> egoData, 
                                 const Eigen::Vector3f &gpsPos, 
                                 const Cognata::SDK::SensorQueryReport sensor, 
                                 rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_DepthCameraPub = publisher_node->
            create_publisher<sensor_msgs::msg::Image>(
                (std::string(DEPTH_CAMERA_TOPIC) + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::DepthCameraOutput &depthCameraOutput) override;

private:
    std::shared_ptr<EgoData> m_EgoData;
    sensor_msgs::msg::Image 
        createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                      const Cognata::SDK::DepthCameraOutput &depthCameraOutput);
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr m_DepthCameraPub;
};

class OEM_DcsDepthCameraProcessing : public Cognata::SDK::DepthCamera
{
public:
    OEM_DcsDepthCameraProcessing(std::shared_ptr<EgoData> egoData, 
                                 const Eigen::Vector3f &gpsPos, 
                                 const Cognata::SDK::SensorQueryReport sensor, 
                                 rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_DepthCameraPub = publisher_node->
            create_publisher<sensor_msgs::msg::Image>(
                (std::string(DEPTH_CAMERA_TOPIC) + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::DepthCameraOutput &depthCameraOutput) override;

private:
    std::shared_ptr<EgoData> m_EgoData;
    sensor_msgs::msg::Image 
        createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                      const Cognata::SDK::DepthCameraOutput &depthCameraOutput);
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr m_DepthCameraPub;
};

class OEM_CarTelemetriesProcessing : public Cognata::SDK::CarTelemetries
{
public:
    OEM_CarTelemetriesProcessing(const Cognata::SDK::SensorQueryReport sensor, 
                                 rclcpp::Node::SharedPtr publisher_node)
    {
        m_CarTelmetryPub = publisher_node->
            create_publisher<cognata_sdk_ros2::msg::CarTelemetriesMsg>(
                (TELEMETRY_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::CarTelemetriesOutput &carTelemetriesOutput) override;

private:
    cognata_sdk_ros2::msg::CarTelemetriesMsg createRosMsgFromData(
                    const SDK_DispatchInfo &dispatchInfo, 
                    const Cognata::SDK::CarTelemetriesOutput &telemetriesOutput);
    cognata_sdk_ros2::msg::WheelTelemetries createRosWheelTelemetry(
                              Cognata::SDK::WheelTelemetriesOutput wheelObject);
    rclcpp::Publisher<cognata_sdk_ros2::msg::CarTelemetriesMsg>::SharedPtr m_CarTelmetryPub;
};

class OEM_SCLProcessing : public Cognata::SDK::SemanticClassLabeling
{
public:
    OEM_SCLProcessing(std::shared_ptr<EgoData> egoData, 
                      const Eigen::Vector3f &gpsPos, 
                      const Cognata::SDK::SensorQueryReport sensor, 
                      rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_SclCameraPub = publisher_node->
            create_publisher<sensor_msgs::msg::Image>(
                (SCL_CAMERA_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::SemanticClassLabelingOutput &sclOutput) override;

private:
    std::shared_ptr<EgoData> m_EgoData;
    sensor_msgs::msg::Image 
                createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                    const Cognata::SDK::SemanticClassLabelingOutput &sclOutput);
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr m_SclCameraPub;
};

class OEM_SILProcessing : public Cognata::SDK::SemanticInstanceLabeling
{
public:
    OEM_SILProcessing(std::shared_ptr<EgoData> egoData, 
                      const Eigen::Vector3f &gpsPos, 
                      const Cognata::SDK::SensorQueryReport sensor, 
                      rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_EgoData->m_GPSPosition = gpsPos;
        m_SilCameraPub = publisher_node->
            create_publisher<sensor_msgs::msg::Image>(
                (SIL_CAMERA_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }
    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::SemanticInstanceLabelingOutput &silOutput) override;

private:
    std::shared_ptr<EgoData> m_EgoData;
    sensor_msgs::msg::Image 
        createRosMsgFromData(const SDK_DispatchInfo &dispatchInfo, 
                const Cognata::SDK::SemanticInstanceLabelingOutput &silOutput);
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr m_SilCameraPub;
};

class OEM_LoadingHandler : public Cognata::SDK::LoadingStateCallback
{
public:
    virtual void NewState(Cognata::SDK::LoadingStateReport::stateType newState)
    {
        // place your code here
        // ---------------------
        // This method is invoked at each simulation loading states.

        RCLCPP_INFO(rclcpp::get_logger("info"), "Loading State: %s", Cognata::SDK::LoadingStateReport_stateType_Name(newState).c_str());
    }
};

// global sensors
class OEM_DOGTProcessing : public Cognata::SDK::DynamicObjectGT
{
public:
    OEM_DOGTProcessing(const std::shared_ptr<EgoData> egoData, 
                       const Cognata::SDK::GlobalSensorQueryReport sensor, 
                       rclcpp::Node::SharedPtr publisher_node)
        : m_EgoData(egoData)
    {
        m_DogtPub = publisher_node->
            create_publisher<cognata_sdk_ros2::msg::ROIAndDOGTOutput>(
                (DOGT_TOPIC + sensor.name()), rclcpp::SystemDefaultsQoS());
    }

    void Dispatch(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                  const Cognata::SDK::SensorOutput &baseSensorInfo, 
                  const Cognata::SDK::DynamicObjectGroundTruthOutput &dogtOutput) override;

private:
    const std::shared_ptr<EgoData> m_EgoData;
    bool m_firstProcess = true;
    Eigen::Vector3f m_EgoBeginningPos;
    float m_EgoBeginningHdg;
    cognata_sdk_ros2::msg::ROIAndDOGTOutput createRosMsgFromData(
                                    const SDK_DispatchInfo &dispatchInfo, 
                                    const Cognata::SDK::DynamicObjectGroundTruthOutput &dogtOutput);
    rclcpp::Publisher<cognata_sdk_ros2::msg::ROIAndDOGTOutput>::SharedPtr m_DogtPub;
};

struct Quaternion
{
    double w, x, y, z;

    Quaternion(double yaw, double pitch, double roll) // yaw (Z), pitch (Y), roll (X)
    {
        // Abbreviations for the various angular functions
        double cy = cos(yaw * 0.5);
        double sy = sin(yaw * 0.5);
        double cp = cos(pitch * 0.5);
        double sp = sin(pitch * 0.5);
        double cr = cos(roll * 0.5);
        double sr = sin(roll * 0.5);

        w = cr * cp * cy + sr * sp * sy;
        x = sr * cp * cy - cr * sp * sy;
        y = cr* sp * cy + sr * cp * sy;
        z = cr * cp * sy - sr * sp * cy;
    }
};

#endif // __COGNATASENSORS_H__
