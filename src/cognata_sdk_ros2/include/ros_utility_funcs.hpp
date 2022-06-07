//
// ros_utility_funcs.hpp - Cognata SDK ROS2 sample utility function header file
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#ifndef __COGNATROSUTILS_H__
#define __COGNATROSUTILS_H__

#include <CognataSim.h>
#include <sensor_msgs/msg/point_cloud2.hpp> // PointCloud

#include "cognata_sdk_ros2/msg/roi_and_dogt_output.hpp"


//typedefs and functions for DOGT and ROI ros msg input

typedef struct SDK_DispatchInfo_Type
{
    SDK_DispatchInfo_Type(const Cognata::SDK::EngineToClientMessage &baseInfo, 
                          const Cognata::SDK::SensorOutput &baseSensorInfo) :
                          m_BaseInfo(baseInfo), 
                          m_BaseSensorInfo(baseSensorInfo)
                          {}
    const Cognata::SDK::EngineToClientMessage &m_BaseInfo;
    const Cognata::SDK::SensorOutput &m_BaseSensorInfo;
}SDK_DispatchInfo;


typedef struct SDK_ObjectList_Type
{
    SDK_ObjectList_Type(
        const google::protobuf::RepeatedPtrField<Cognata::SDK::ObjectDescription> objList,
        const SDK_DispatchInfo &dispatchInfo) :
        m_ObjList(objList),
        m_DispatchInfo(dispatchInfo)
                        {}
    const google::protobuf::RepeatedPtrField<Cognata::SDK::ObjectDescription> m_ObjList;
    const SDK_DispatchInfo &m_DispatchInfo;
}SDK_ObjectList;


typedef struct SDK_ObjectInfo_Type
{
    SDK_ObjectInfo_Type(const Cognata::SDK::ObjectDescription &objDescription,
                    const SDK_DispatchInfo &dispatchInfo) :
                    m_Obj(objDescription),
                    m_DispatchInfo(dispatchInfo)
                    {}
    const Cognata::SDK::ObjectDescription &m_Obj;
    const SDK_DispatchInfo &m_DispatchInfo;
}SDK_ObjectInfo;

void ROSGetObjectsFromList(cognata_sdk_ros2::msg::ROIAndDOGTOutput &RosMsg,
                           const SDK_ObjectList &objList);


void ROSCopyGenericObjectInfo(cognata_sdk_ros2::msg::ObjectDescription& rosobj, 
                              const Cognata::SDK::ObjectDescription& obj);


void ROSCopyVehicleInfo(cognata_sdk_ros2::msg::VehicleMsg& vehicle, 
                        const Cognata::SDK::ObjectDescription& obj);


void ROSCopyTLInfo(cognata_sdk_ros2::msg::TrafficLightMsg& traffic_light_ros, 
                   const Cognata::SDK::ObjectDescription& obj);

void ROSCopyPedestrianInfo(cognata_sdk_ros2::msg::PedestrianMsg ped_ros, 
                           const Cognata::SDK::ObjectDescription& obj);

void ROSCopyAnnotationInfo(cognata_sdk_ros2::msg::AnnotationMsg anno_ros, 
                           const Cognata::SDK::ObjectDescription& obj);


//Overloaded InputObject function to allow ROI and DOGT input of different objects to ROS message uniformly

void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::ObjectDescription other_obj_ros, 
                        const SDK_ObjectInfo);


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::PedestrianMsg ped_ros, 
                        const SDK_ObjectInfo);


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::AnnotationMsg anno_ros,
                        const SDK_ObjectInfo);


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::VehicleMsg vehicle_ros,
                        const SDK_ObjectInfo);


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::TrafficLightMsg traflight_ros,
                        const SDK_ObjectInfo);


//Lidar msg construction utility functions
void ROSSetLidarMesurments(size_t pointStep, size_t width, 
                                    sensor_msgs::msg::PointCloud2 &lidarRosMsg);
class PointStruct
{
public:
    explicit PointStruct(std::string fieldName, uint8_t dataType);

    std::string m_FieldName;
    uint8_t m_Datatype;
    uint32_t m_DataSize;
};

void addLdoDataToVector(std::vector<PointStruct>& lidarStructure);
void addLdgDataToVector(std::vector<PointStruct>& lidarStructure);
void addLidarFieldsToRosMsg(sensor_msgs::msg::PointCloud2& lidarRosMsg, 
                            std::vector<PointStruct>& lidarStructure);
void enterLidarFieldInfo(sensor_msgs::msg::PointCloud2& lidarRosMsg, 
                                int index, std::string fieldName, 
                                uint32_t offset, uint8_t datatype);

//ROS template utility functions - implementation
template <class RosMsg>
inline void ROSInputHeader(RosMsg& msg, 
                           const SDK_DispatchInfo &dispatchInfo, 
                           const std::string& frameId)
{
    msg.header.frame_id = frameId;                                              //reference frames not implemented yet
    msg.header.stamp.sec = dispatchInfo.m_BaseInfo.simulationtimeinsec();                      // Simulation Time
}

template <class RosVector>
inline void ROSVectorFromSDK(RosVector& rvec, const Cognata::SDK::SDKVector3& sdkvec)
{
    rvec.x = sdkvec.x();
    rvec.y = sdkvec.y();
    rvec.z = sdkvec.z();
}

// General utility functions
std::vector<uint8_t> FlipImage(const char *start, 
                               const char* end, 
                               size_t width, 
                               size_t channelNum);

void ClampValue(float& value, const float& min, const float& max);


#endif //__COGNATROSUTILS_H__