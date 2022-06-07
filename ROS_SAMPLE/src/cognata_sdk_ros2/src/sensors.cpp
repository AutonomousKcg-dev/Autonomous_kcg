//
// sensors.cpp - Cognata SDK ROS2 sample sensor implementation cpp file
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#include <algorithm> // reverse

#include <CognataSim.h>

#include "keyPress.hpp" // simple keyboard handling for windows and Linux
#include "sensors.hpp"

using namespace Cognata::SDK;

void OEM_ROIProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                 const SensorOutput &baseSensorInfo, 
                                 const ROIOutput &roiOutput)
{
    m_ClosestTarget->m_IsValid = false;
    m_ClosestTarget->m_DistLgt = 100000000;
    if (m_firstProcess == true)
    {
        m_firstProcess = false;
        m_EgoBeginningPos = m_EgoData->m_Position;
        m_EgoBeginningHdg = m_EgoData->m_Heading;
    }

    cognata_sdk_ros2::msg::ROIAndDOGTOutput roiRosMsg = createRosMsgFromData(
                         SDK_DispatchInfo(baseInfo, baseSensorInfo), roiOutput);

    m_RoiPub->publish(roiRosMsg);
}


cognata_sdk_ros2::msg::ROIAndDOGTOutput OEM_ROIProcessing::createRosMsgFromData(
                            const SDK_DispatchInfo &dispatchInfo, 
                            const Cognata::SDK::ROIOutput &roiOutput)
{
    cognata_sdk_ros2::msg::ROIAndDOGTOutput roiRosMsg;
    ROSInputHeader(roiRosMsg, dispatchInfo, "/map");
    
    ROSGetObjectsFromList(roiRosMsg, 
                        SDK_ObjectList(roiOutput.objectslist(), dispatchInfo));

    return roiRosMsg;
}


void OEM_GPSProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                 const SensorOutput &baseSensorInfo, 
                                 const GPSOutput &gpsOutput)
{
    // place your code here
    // ---------------------
    // This sample class received GPS sensor messages
    // update ego data from GPS
    updateEgoData(gpsOutput);

    sensor_msgs::msg::NavSatFix navRosMsg = createNavRosMsgFromData(
                        SDK_DispatchInfo(baseInfo, baseSensorInfo), gpsOutput);
    sensor_msgs::msg::Imu imuRosMsg = createImuRosMsgFromData(
                        SDK_DispatchInfo(baseInfo, baseSensorInfo), gpsOutput);
    cognata_sdk_ros2::msg::GPSAdditionalData gpsInfoRosMsg = createGpsInfoRosMsgFromData(
                        SDK_DispatchInfo(baseInfo, baseSensorInfo), gpsOutput);

    m_GpsNavPub->publish(navRosMsg);
    m_GpsImuPub->publish(imuRosMsg);
    m_GpsInfoPub->publish(gpsInfoRosMsg);
}


sensor_msgs::msg::NavSatFix OEM_GPSProcessing::createNavRosMsgFromData(
                                        const SDK_DispatchInfo &dispatchInfo, 
                                        const GPSOutput &gpsOutput)
{
    sensor_msgs::msg::NavSatFix navRosMsg;
    ROSInputHeader(navRosMsg, dispatchInfo, "/map");

    navRosMsg.status.status = 0;  
    navRosMsg.status.service = 1; 
    navRosMsg.latitude = gpsOutput.lat();
    navRosMsg.longitude = gpsOutput.long_();
    navRosMsg.position_covariance_type = 2; 
    
    return navRosMsg;
}


sensor_msgs::msg::Imu OEM_GPSProcessing::createImuRosMsgFromData(
                                        const SDK_DispatchInfo &dispatchInfo, 
                                        const GPSOutput &gpsOutput)
{
    sensor_msgs::msg::Imu imuRosMsg;
    ROSInputHeader(imuRosMsg, dispatchInfo, "/map");
    
    Quaternion q = Quaternion(gpsOutput.orientation().x(), 
                              gpsOutput.orientation().y(), 
                              gpsOutput.orientation().z());
    imuRosMsg.orientation.w = q.w;
    imuRosMsg.orientation.x = q.x;
    imuRosMsg.orientation.y = q.y;
    imuRosMsg.orientation.z = q.z;
    ROSVectorFromSDK(imuRosMsg.angular_velocity, gpsOutput.angularvelocitylocal3d());
    ROSVectorFromSDK(imuRosMsg.linear_acceleration, gpsOutput.acceleration());

    return imuRosMsg;
}


cognata_sdk_ros2::msg::GPSAdditionalData OEM_GPSProcessing::createGpsInfoRosMsgFromData(
                                        const SDK_DispatchInfo &dispatchInfo, 
                                        const GPSOutput &gpsOutput)
{
    cognata_sdk_ros2::msg::GPSAdditionalData gpsInfoRosMsg;
    ROSInputHeader(gpsInfoRosMsg, dispatchInfo, "/map");
    

    gpsInfoRosMsg.speed = gpsOutput.speed();
    gpsInfoRosMsg.lane_width = gpsOutput.lanewidth();
    gpsInfoRosMsg.lane_offset = gpsOutput.laneoffset();
    gpsInfoRosMsg.lane_number = gpsOutput.lanenumber();
    gpsInfoRosMsg.navigation_segment = gpsOutput.navigationsegment();

    ROSVectorFromSDK(gpsInfoRosMsg.position, gpsOutput.position());
    ROSVectorFromSDK(gpsInfoRosMsg.velocity_local_3d, gpsOutput.velocitylocal3d());
    ROSVectorFromSDK(gpsInfoRosMsg.angular_acceleration_local_3d, gpsOutput.angularaccelerationlocal3d());

    return gpsInfoRosMsg;
}


void OEM_GPSProcessing::updateEgoData(const GPSOutput &gpsOutput)
{
    Eigen::Vector3f pos = SDKVecToVector3f(gpsOutput.position());
    m_EgoData->m_Heading = gpsOutput.orientation().z();
    m_EgoData->m_Speed = gpsOutput.speed();

    Eigen::Vector3f rotatedGPSPos = transformPointByRotationDegree(
            m_EgoData->m_GPSPosition, SDKVecToVector3f(gpsOutput.orientation()));
    m_EgoData->m_Position = pos - rotatedGPSPos;
    m_EgoData->m_AccelerationLocal = SDKVecToVector3f(gpsOutput.acceleration());
    m_EgoData->m_AngularAccelerationLocal = SDKVecToVector3f(
                                        gpsOutput.angularaccelerationlocal3d());
    m_EgoData->m_VelocityLocal = SDKVecToVector3f(gpsOutput.velocitylocal3d());
    m_EgoData->m_AngularVelocityLocal = SDKVecToVector3f(
                                            gpsOutput.angularvelocitylocal3d());

    m_EgoData->m_IsInitialized = true;
}


void OEM_LdoLidarProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                      const SensorOutput &baseSensorInfo, 
                                      const LidarOutput &lidarOutput)
{
    // place your code here
    // ---------------------
    // This sample class received Lidar sensor messages
    
    // Headers & static info - could probably be inited elsewhere
    sensor_msgs::msg::PointCloud2 lidarRosMsg = createRosMsgFromData(
                       SDK_DispatchInfo(baseInfo, baseSensorInfo), lidarOutput);

    m_LidarPub->publish(lidarRosMsg);
}


sensor_msgs::msg::PointCloud2 OEM_LdoLidarProcessing::createRosMsgFromData(
                                    const SDK_DispatchInfo &dispatchInfo, 
                                    const Cognata::SDK::LidarOutput &lidarOutput)
{
    sensor_msgs::msg::PointCloud2 lidarRosMsg;
    ROSInputHeader(lidarRosMsg, dispatchInfo, "/map");
    ROSSetLidarMesurments(16, lidarOutput.points().length()/16, lidarRosMsg);
    addLidarFieldsToRosMsg(lidarRosMsg, m_LidarStructure);
    lidarRosMsg.data.resize(lidarOutput.points().length());
    memcpy(&lidarRosMsg.data[0], &lidarOutput.points()[0], lidarOutput.points().length());

    return lidarRosMsg;
}


void OEM_LdgLidarProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                      const SensorOutput &baseSensorInfo, 
                                      const LidarOutput &lidarOutput)
{
    // place your code here
    // ---------------------
    // This sample class received Lidar sensor messages

    sensor_msgs::msg::PointCloud2 lidarRosMsg = createRosMsgFromData(
                       SDK_DispatchInfo(baseInfo, baseSensorInfo), lidarOutput);

    m_LidarPub->publish(lidarRosMsg);
}


sensor_msgs::msg::PointCloud2 OEM_LdgLidarProcessing::createRosMsgFromData(
                                    const SDK_DispatchInfo &dispatchInfo, 
                                    const Cognata::SDK::LidarOutput &lidarOutput)
{
    sensor_msgs::msg::PointCloud2 lidarRosMsg;
    ROSInputHeader(lidarRosMsg, dispatchInfo, "/map");
    ROSSetLidarMesurments(35, lidarOutput.points().length()/32, lidarRosMsg);
    addLidarFieldsToRosMsg(lidarRosMsg, m_LidarStructure);
    addPaddedDataToRosMsg(lidarRosMsg, lidarOutput);

    return lidarRosMsg;
}


void OEM_LdgLidarProcessing::addPaddedDataToRosMsg(
                                    sensor_msgs::msg::PointCloud2 &lidarRosMsg, 
                                    const Cognata::SDK::LidarOutput &lidarOutput)
{
    char *rosData = new char[lidarRosMsg.row_step];
    memset(rosData, 0, lidarRosMsg.row_step);

    for (size_t point_index = 0 ; point_index < lidarRosMsg.width ; ++point_index)
    {
        char *dest_ptr = rosData + point_index*35;
        const char *src_ptr = &lidarOutput.points()[0] + point_index*32;
        memcpy(dest_ptr, src_ptr, 20);
        memcpy(dest_ptr + 21, src_ptr + 20, 7);
        memcpy(dest_ptr + 29, src_ptr + 27, 3);
        dest_ptr[32] = src_ptr[30] & 0x0f;
        dest_ptr[33] = src_ptr[30] & 0xf0;
        dest_ptr[34] = src_ptr[31];
    }

    lidarRosMsg.data.resize(lidarRosMsg.row_step);
    memcpy(&lidarRosMsg.data[0], rosData, lidarRosMsg.row_step);

    delete[](rosData);
}


void OEM_RadarProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                   const SensorOutput &baseSensorInfo, 
                                   const RadarOutput &radarOutput)
{
    // place your code here
    // ---------------------
    // This sample class received Radar sensor messages
    cognata_sdk_ros2::msg::RadarOutputHeader radarRosMsg = createRosMsgFromData(
                       SDK_DispatchInfo(baseInfo, baseSensorInfo), radarOutput);

    m_RadarPub->publish(radarRosMsg);
}

cognata_sdk_ros2::msg::RadarOutputHeader OEM_RadarProcessing::createRosMsgFromData(
                                const SDK_DispatchInfo &dispatchInfo, 
                                const RadarOutput &radarOutput)
{
    cognata_sdk_ros2::msg::RadarOutputHeader radarRosMsg;

    ROSInputHeader(radarRosMsg, dispatchInfo, "/map");

    radarRosMsg.radar_id = std::to_string(
                                dispatchInfo.m_BaseSensorInfo.outputsensorid());
    ROSVectorFromSDK(radarRosMsg.radar_placement.linear, 
                     radarOutput.header().radarplacement().location());
    ROSVectorFromSDK(radarRosMsg.radar_placement.angular, 
                     radarOutput.header().radarplacement().orientation());

    radarRosMsg.h_fov = radarOutput.header().horizontalfov();
    radarRosMsg.v_fov = radarOutput.header().verticalfov();

    //RadarOutputTarget
    for (int i = 0; i < radarOutput.targets_size(); i++)
    {
        RadarOutput_Target target = radarOutput.targets().Get(i);
        cognata_sdk_ros2::msg::RadarOutputTarget data = createRosTarget(target);
        ROSInputHeader(data, dispatchInfo, "/map");
        radarRosMsg.targets.push_back(createRosTarget(target));
    }

    return radarRosMsg;
}


cognata_sdk_ros2::msg::RadarOutputTarget OEM_RadarProcessing::createRosTarget(
                                                      RadarOutput_Target target)
{
    cognata_sdk_ros2::msg::RadarOutputTarget rosRadarTarget;
    rosRadarTarget.id = target.id();
    rosRadarTarget.time_stamp = target.timestamp();
    rosRadarTarget.range = target.range();
    rosRadarTarget.azimuth = target.azimuth();
    rosRadarTarget.elevation = target.elevation();
    rosRadarTarget.range_rate = target.rangerate();
    rosRadarTarget.amplitude = target.amplitude();
    rosRadarTarget.is_aggregate = target.geometrictarget().isaggregate();
    rosRadarTarget.tracking_status = target.radartarget().trackingstatus();
    rosRadarTarget.age = target.radartarget().age();
    rosRadarTarget.last_seen = target.radartarget().lastseen();
    rosRadarTarget.is_stationary = target.radartarget().isstationary();
    rosRadarTarget.is_ghost = target.radartarget().isghost();

    return rosRadarTarget;
}


void OEM_RGBCameraProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                       const SensorOutput &baseSensorInfo, 
                                       const RGBCameraOutput &rgbCameraOutput)
{
    // place your code here
    // ---------------------
    // This sample class received RGBCamera messages
    sensor_msgs::msg::Image rgbRosMsg = createRosMsgFromData(
                       SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                       rgbCameraOutput);
    
    m_RgbCameraPub->publish(rgbRosMsg);
}


sensor_msgs::msg::Image OEM_RGBCameraProcessing::createRosMsgFromData(
                                        const SDK_DispatchInfo &dispatchInfo, 
                                        const RGBCameraOutput &rgbCameraOutput)
{
    sensor_msgs::msg::Image rgbRosMsg;
    ROSInputHeader(rgbRosMsg, dispatchInfo, "/map");
    rgbRosMsg.width = rgbCameraOutput.width();                                                   // Width
    rgbRosMsg.height = rgbCameraOutput.height();                                                 // Height
    rgbRosMsg.encoding = "rgba8";                                                                // Cognata RGBA to ROS BGRA
    rgbRosMsg.step = rgbRosMsg.width * 4;                                                        // No. of channels

    rgbRosMsg.data = FlipImage(rgbCameraOutput.pixels().data(),
                               rgbCameraOutput.pixels().data() + 
                               rgbRosMsg.step * rgbRosMsg.height - 1, 
                               rgbRosMsg.width, 4);
    return rgbRosMsg;
}


void OEM_DchDepthCameraProcessing::Dispatch(const EngineToClientMessage &baseInfo,
                                            const SensorOutput &baseSensorInfo, 
                                            const DepthCameraOutput &depthCameraOutput)
{
    // place your code here
    // ---------------------
    // This sample class received depth camera sensor messages

    sensor_msgs::msg::Image depthRosMsg = createRosMsgFromData(
                       SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                       depthCameraOutput);
    
    m_DepthCameraPub->publish(depthRosMsg);
}


sensor_msgs::msg::Image OEM_DchDepthCameraProcessing::createRosMsgFromData(
                                        const SDK_DispatchInfo &dispatchInfo, 
                                        const DepthCameraOutput &depthCameraOutput)
{
    sensor_msgs::msg::Image depthRosMsg;

    ROSInputHeader(depthRosMsg, dispatchInfo, "/map");
    depthRosMsg.width = depthCameraOutput.width();                                                   // Width
    depthRosMsg.height = depthCameraOutput.height();                                                 // Height
    depthRosMsg.encoding = "mono16";                                                                   // Cognata RGBA to ROS BGRA
    depthRosMsg.step = depthRosMsg.width * 2;                                                          // No. of channels
    depthRosMsg.data.resize(depthRosMsg.step * depthRosMsg.height);
    size_t sizeInFloats = depthCameraOutput.pixels().size() / 4;
    
    uint16_t *mDepth_Pixels = (uint16_t*)&depthRosMsg.data[0];
    float *floatPixels = (float*)(depthCameraOutput.pixels().data());

    for (size_t i = 0 ; i < sizeInFloats ; ++i)
    {
        mDepth_Pixels[i] = static_cast<uint16_t>(floatPixels[i]);
    }

    return depthRosMsg;
}


void OEM_DcsDepthCameraProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                            const SensorOutput &baseSensorInfo, 
                                            const DepthCameraOutput &depthCameraOutput)
{
    // place your code here
    // ---------------------
    // This sample class received depth camera sensor messages

    sensor_msgs::msg::Image depthRosMsg = createRosMsgFromData(
                       SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                       depthCameraOutput);
    
    m_DepthCameraPub->publish(depthRosMsg);
}


sensor_msgs::msg::Image OEM_DcsDepthCameraProcessing::createRosMsgFromData(
                                        const SDK_DispatchInfo &dispatchInfo, 
                                        const DepthCameraOutput &depthCameraOutput)
{
    sensor_msgs::msg::Image depthRosMsg;

    ROSInputHeader(depthRosMsg, dispatchInfo, "/map");
    depthRosMsg.width = depthCameraOutput.width();                                                   // Width
    depthRosMsg.height = depthCameraOutput.height();                                                 // Height
    depthRosMsg.encoding = "mono16";                                                                    // Cognata RGBA to ROS BGRA
    depthRosMsg.step = depthRosMsg.width * 2;                                                          // No. of channels
    depthRosMsg.data.resize(depthRosMsg.step * depthRosMsg.height);
    size_t sizeInUint16 = depthCameraOutput.pixels().size() / 2;

    const uint16_t* pixels = (const uint16_t*)(depthCameraOutput.pixels().data());
    uint16_t *mDepth_Pixels = (uint16_t*)&depthRosMsg.data[0];

    for (size_t i = 0 ; i < sizeInUint16 ; ++i)
    {
        mDepth_Pixels[i] = pixels[i];
        mDepth_Pixels[i] = mDepth_Pixels[i] * 1000/65536;
    }
    
    return depthRosMsg;
}


void OEM_E2CCProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                  const SensorOutput &baseSensorInfo, 
                                  const E2COutput &e2COutput)
{
    // place your code here
    // ---------------------
    // This sample class received E2C sensor messages and logs them via Ros logger
    RCLCPP_INFO(rclcpp::get_logger("E2C"), 
                "Message recieved from Engine:\n Param:%s\nValue:", 
                e2COutput.param(), e2COutput.value());
}


void OEM_LaneDetectorProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                          const SensorOutput &baseSensorInfo, 
                                          const LaneDetectorOutput &ldOutput)
{
    // place your code here
    // ---------------------
    // This sample class receives lane detection data
}


void OEM_DOGTProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                  const SensorOutput &baseSensorInfo, 
                                  const DynamicObjectGroundTruthOutput &dogtOutput)
{
    // place your code here
    // ---------------------
    // This sample class received Dynamic Object GT sensor messages

    if (m_firstProcess == true)
    {
        m_firstProcess = false;
        m_EgoBeginningPos = m_EgoData->m_Position;
        m_EgoBeginningHdg = m_EgoData->m_Heading;
    }

    cognata_sdk_ros2::msg::ROIAndDOGTOutput dogtRosMsg = createRosMsgFromData(
                                    SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                                    dogtOutput);

    m_DogtPub->publish(dogtRosMsg);
}


cognata_sdk_ros2::msg::ROIAndDOGTOutput OEM_DOGTProcessing::createRosMsgFromData(
                                    const SDK_DispatchInfo &dispatchInfo, 
                                    const DynamicObjectGroundTruthOutput &dogtOutput)
{
    cognata_sdk_ros2::msg::ROIAndDOGTOutput dogtRosMsg;

    ROSInputHeader(dogtRosMsg, dispatchInfo, "/map");
    ROSGetObjectsFromList(dogtRosMsg, 
                          SDK_ObjectList(dogtOutput.objects(), dispatchInfo));

    return dogtRosMsg;
}


void OEM_CarTelemetriesProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                            const SensorOutput &baseSensorInfo, 
                                            const CarTelemetriesOutput &telemetriesOutput)
{
    cognata_sdk_ros2::msg::CarTelemetriesMsg carTelemetriesRosMsg = 
                                    createRosMsgFromData(
                                    SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                                    telemetriesOutput);
    

    m_CarTelmetryPub->publish(carTelemetriesRosMsg);
}



cognata_sdk_ros2::msg::CarTelemetriesMsg OEM_CarTelemetriesProcessing::
                                createRosMsgFromData(
                                const SDK_DispatchInfo &dispatchInfo, 
                                const CarTelemetriesOutput &telemetriesOutput)
{
    cognata_sdk_ros2::msg::CarTelemetriesMsg carTelemetriesRosMsg;

    ROSInputHeader(carTelemetriesRosMsg, dispatchInfo, "/map");
    
    carTelemetriesRosMsg.turn_light = 
              CarConfiguration::SignalState_Name(telemetriesOutput.turnlight());
    carTelemetriesRosMsg.acceleration = telemetriesOutput.acceleration();
    carTelemetriesRosMsg.brake = telemetriesOutput.brake();
    carTelemetriesRosMsg.gas = telemetriesOutput.gas();
    carTelemetriesRosMsg.steering = telemetriesOutput.steering();

    ROSVectorFromSDK(carTelemetriesRosMsg.center_of_mass.linear, 
                     telemetriesOutput.centerofmasslocalposition());
    ROSVectorFromSDK(carTelemetriesRosMsg.center_of_mass.angular, 
                     telemetriesOutput.centerofmasslocalrotation());

    carTelemetriesRosMsg.engine_rpm = telemetriesOutput.enginerpm();
    carTelemetriesRosMsg.engine_load = telemetriesOutput.engineload();
    carTelemetriesRosMsg.engine_torque = telemetriesOutput.enginetorque();
    carTelemetriesRosMsg.engine_power = telemetriesOutput.enginepower();

    carTelemetriesRosMsg.current_gear = telemetriesOutput.currentgear();

    for (int i = 0; i < telemetriesOutput.wheels_size(); i++)
    {
        cognata_sdk_ros2::msg::WheelTelemetries rosWheelData = 
                    createRosWheelTelemetry(telemetriesOutput.wheels().Get(i));

        ROSInputHeader(rosWheelData, dispatchInfo, "/map");

        carTelemetriesRosMsg.wheels.push_back(rosWheelData);
    }

    return carTelemetriesRosMsg;
}

cognata_sdk_ros2::msg::WheelTelemetries OEM_CarTelemetriesProcessing::
        createRosWheelTelemetry(Cognata::SDK::WheelTelemetriesOutput wheelObject)
{
    cognata_sdk_ros2::msg::WheelTelemetries rosWheelData;

    rosWheelData.angular_velocity  = wheelObject.angularvelocity();
    rosWheelData.steer_angle = wheelObject.steerangle();
    rosWheelData.drive_torque = wheelObject.drivetorque();
    rosWheelData.brake_torque = wheelObject.braketorque();
    rosWheelData.reaction_torque = wheelObject.reactiontorque();
    rosWheelData.tire_force.x = wheelObject.tireforce().x();
    rosWheelData.tire_force.y = wheelObject.tireforce().y();
    rosWheelData.tire_slip.x = wheelObject.tireslip().x();
    rosWheelData.tire_slip.y = wheelObject.tireslip().y();
    rosWheelData.can_slip = wheelObject.canslip();
    rosWheelData.combined_tire_slip = wheelObject.combinedtireslip();
    rosWheelData.suspension_compression = wheelObject.suspensioncompression();
    rosWheelData.down_force = wheelObject.downforce();
    rosWheelData.contact_angle = wheelObject.contactangle();
    rosWheelData.contact_depth = wheelObject.contactdepth();
    rosWheelData.contact_speed = wheelObject.contactspeed();
    rosWheelData.is_grounded = wheelObject.grounded();
    ROSVectorFromSDK(rosWheelData.wheel_velocity, wheelObject.wheelvelocity());

    return rosWheelData;
}

void OEM_SCLProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                 const SensorOutput &baseSensorInfo, 
                                 const SemanticClassLabelingOutput &sclOutput)
{
    // place your code here
    // ---------------------
    // This sample class received Semantic Class labeling sensor messages
    sensor_msgs::msg::Image semanticImgRosMsg = createRosMsgFromData(
                                    SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                                    sclOutput);

    m_SclCameraPub->publish(semanticImgRosMsg);
}

sensor_msgs::msg::Image OEM_SCLProcessing::createRosMsgFromData(
                                    const SDK_DispatchInfo &dispatchInfo, 
                                    const SemanticClassLabelingOutput &sclOutput)
{
    sensor_msgs::msg::Image semanticImgRosMsg;
    ROSInputHeader(semanticImgRosMsg, dispatchInfo, "/map");
    semanticImgRosMsg.width = sclOutput.width();                                                            // Width
    semanticImgRosMsg.height = sclOutput.height();                                                          // Height
    semanticImgRosMsg.encoding = "rgba8";
    semanticImgRosMsg.step = semanticImgRosMsg.width * 4;                                                   // No. of channels

    semanticImgRosMsg.data = FlipImage(
                        sclOutput.pixels().data(), sclOutput.pixels().data() + 
                        semanticImgRosMsg.step * semanticImgRosMsg.height - 1, 
                        semanticImgRosMsg.width, 4);

    return semanticImgRosMsg;
}


void OEM_SILProcessing::Dispatch(const EngineToClientMessage &baseInfo, 
                                 const SensorOutput &baseSensorInfo, 
                                 const SemanticInstanceLabelingOutput &silOutput)
{
    // place your code here
    // ---------------------
    // This sample class received Semantic Instance labeling sensor messages
    sensor_msgs::msg::Image instanceImgRosMsg = createRosMsgFromData(
                                    SDK_DispatchInfo(baseInfo, baseSensorInfo), 
                                    silOutput);;

    m_SilCameraPub->publish(instanceImgRosMsg);
}


sensor_msgs::msg::Image OEM_SILProcessing::createRosMsgFromData(
                                    const SDK_DispatchInfo &dispatchInfo, 
                                    const SemanticInstanceLabelingOutput &silOutput)
{
    sensor_msgs::msg::Image instanceImgRosMsg;
    ROSInputHeader(instanceImgRosMsg, dispatchInfo, "/map");
    instanceImgRosMsg.width = silOutput.width();                                                            // Width
    instanceImgRosMsg.height = silOutput.height();                                                          // Height
    instanceImgRosMsg.encoding = "rgba8";                                                                
    instanceImgRosMsg.step = instanceImgRosMsg.width * 4;                                                   // No. of channels

    instanceImgRosMsg.data = FlipImage(
                        silOutput.pixels().data(), silOutput.pixels().data() + 
                        instanceImgRosMsg.step * instanceImgRosMsg.height - 1, 
                        instanceImgRosMsg.width, 4);

    return instanceImgRosMsg;
}