//
// ros_utility_funcs.cpp - Cognata SDK ROS2 sample utility function cpp file
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#include <algorithm> //std::clamp

#include "ros_utility_funcs.hpp"

using namespace Cognata::SDK;

static size_t TYPE_SIZE_LUT[8] = {1, 1, 2, 2, 4, 4, 4, 8}; //Used in Lidar msg construction


void ROSGetObjectsFromList(cognata_sdk_ros2::msg::ROIAndDOGTOutput &RosMsg,
                           const SDK_ObjectList &objList)
{
    for (auto obj : objList.m_ObjList)
    {
        SDK_ObjectInfo info(obj, objList.m_DispatchInfo);
        switch(info.m_Obj.ObjectType_case()) 
        {
        case ObjectDescription::ObjectTypeCase::kPedestrian :
            {
                cognata_sdk_ros2::msg::PedestrianMsg ped_ros;
                InputObject(RosMsg, ped_ros, info);
            } break;
        case ObjectDescription::ObjectTypeCase::kAnnotation :
            {
                cognata_sdk_ros2::msg::AnnotationMsg anno_ros;
                InputObject(RosMsg, anno_ros, info);
            } break;
        case ObjectDescription::ObjectTypeCase::kVehicle :
            {
                cognata_sdk_ros2::msg::VehicleMsg vehicle_ros;
                InputObject(RosMsg, vehicle_ros, info);

            } break;
        case ObjectDescription::ObjectTypeCase::kTrafficLight :
            {
                cognata_sdk_ros2::msg::TrafficLightMsg traflight_ros;
                InputObject(RosMsg, traflight_ros, info);

            } break;
        default :
            {
                cognata_sdk_ros2::msg::ObjectDescription other_obj_ros;
                InputObject(RosMsg, other_obj_ros, info);
            }
        }
    }
}


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::ObjectDescription other_obj_ros, 
                        const SDK_ObjectInfo info)
{
    ROSInputHeader(other_obj_ros, info.m_DispatchInfo, "/map");
    ROSCopyGenericObjectInfo(other_obj_ros, info.m_Obj);

    //push into main ROI msg
    rosMsg.other_list.push_back(other_obj_ros);
}


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::PedestrianMsg ped_ros, 
                        const SDK_ObjectInfo info)
{
    ROSInputHeader(ped_ros, info.m_DispatchInfo, "/map");
    ROSCopyGenericObjectInfo(ped_ros.description, info.m_Obj);
    //pedestrian specific variables
    ROSCopyPedestrianInfo(ped_ros, info.m_Obj);              
    //push into main ROI msg
    rosMsg.pedestrian_list.push_back(ped_ros);
}


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::AnnotationMsg anno_ros,
                        const SDK_ObjectInfo info)
{
    ROSInputHeader(anno_ros, info.m_DispatchInfo, "/map");
    ROSCopyGenericObjectInfo(anno_ros.description, info.m_Obj);
    //annotation specific variables
    ROSCopyAnnotationInfo(anno_ros, info.m_Obj);
    //push into main ROI msg
    rosMsg.annotation_list.push_back(anno_ros);
}


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::VehicleMsg vehicle_ros,
                        const SDK_ObjectInfo info)
{
    ROSInputHeader(vehicle_ros, info.m_DispatchInfo, "/map");
    ROSCopyGenericObjectInfo(vehicle_ros.description, info.m_Obj);
    //vehicle specific variables
    ROSCopyVehicleInfo(vehicle_ros, info.m_Obj);
    //push into main ROI msg
    rosMsg.vehicle_list.push_back(vehicle_ros);
}


void InputObject(cognata_sdk_ros2::msg::ROIAndDOGTOutput& rosMsg, 
                        cognata_sdk_ros2::msg::TrafficLightMsg traflight_ros,
                        const SDK_ObjectInfo info)
{
    ROSInputHeader(traflight_ros, info.m_DispatchInfo, "/map");
    ROSCopyGenericObjectInfo(traflight_ros.description, info.m_Obj);
    //traffic light specific variables
    ROSCopyTLInfo(traflight_ros, info.m_Obj);
    //push into main ROI msg
    rosMsg.traffic_light_list.push_back(traflight_ros);
}


void ROSCopyGenericObjectInfo(cognata_sdk_ros2::msg::ObjectDescription& rosobj, 
                                                   const ObjectDescription& obj)
{
    rosobj.object_id = obj.id();
    rosobj.roi_type = obj.roitype();
    rosobj.roi_subtype = obj.roisubtype();

    ROSVectorFromSDK(rosobj.bounding_box.transform.translation, 
                                      obj.boundingbox().transform().position());
    ROSVectorFromSDK(rosobj.bounding_box.transform.rotation, 
                                      obj.boundingbox().transform().rotation());

    rosobj.bounding_box.height = obj.boundingbox().height();
    rosobj.bounding_box.width = obj.boundingbox().width();
    rosobj.bounding_box.length = obj.boundingbox().length();

    if (obj.has_motion())
    {
        ROSVectorFromSDK(rosobj.motion.linear, obj.motion().velocity());
        ROSVectorFromSDK(rosobj.motion.angular, obj.motion().angularrates());
    }

    for (int o = 0; o < obj.sensorids_size(); o++)
    {
        rosobj.sensor_ids.push_back(obj.sensorids(o));
    }
}


void ROSCopyVehicleInfo(cognata_sdk_ros2::msg::VehicleMsg& vehicle_ros, 
                                                   const ObjectDescription& obj)
{
    vehicle_ros.vehicle_type = Vehicle_Type_Name(obj.vehicle().type());
    vehicle_ros.vehicle_role = Vehicle_Role_Name(obj.vehicle().role());
    vehicle_ros.navigation_segment = obj.vehicle().navigationsegment();
    vehicle_ros.lane_id = obj.vehicle().laneid();
    vehicle_ros.lanes_from_left = obj.vehicle().lanesfromleft();
    vehicle_ros.head_light_state = obj.vehicle().lightsstate().headlight();
    vehicle_ros.brake_light_state = obj.vehicle().lightsstate().brake();
    vehicle_ros.reverse_light_state = obj.vehicle().lightsstate().reverse();
    vehicle_ros.signal_state = CarConfiguration::SignalState_Name
                                                 (obj.vehicle().signalstate());
    vehicle_ros.signal_light = CarConfiguration::SignalState_Name
                                                 (obj.vehicle().signallight());

    for (int o = 0; o < obj.vehicle().wheels().size(); o++)
    {
        Wheel wheel = obj.vehicle().wheels(o);
        cognata_sdk_ros2::msg::WheelMsg wheel_ros;

        ROSVectorFromSDK(wheel_ros.relative_position, wheel.relativeposition());
        wheel_ros.steering_angle = wheel.steeringangle();
        wheel_ros.rotate_angle = wheel.rotateangle();
        wheel_ros.name = wheel.name();
        
        vehicle_ros.wheels.push_back(wheel_ros);
    }
}


void ROSCopyTLInfo(cognata_sdk_ros2::msg::TrafficLightMsg& traffic_light_ros, 
                                                   const ObjectDescription& obj)
{
    traffic_light_ros.status = TrafficLight_Status_Name(obj.trafficlight().status());
    traffic_light_ros.bulb_status = obj.trafficlight().bulbstatus();
    traffic_light_ros.functioning_status = obj.trafficlight().functioningstatus();
    traffic_light_ros.behaviour = obj.trafficlight().behaviour();
    traffic_light_ros.traffic_signal_status = obj.trafficlight().trafficsignalstatus();
    traffic_light_ros.azimuth_angle = obj.trafficlight().azimuthangle();
    traffic_light_ros.facing = obj.trafficlight().facing();
}


void ROSCopyPedestrianInfo(cognata_sdk_ros2::msg::PedestrianMsg ped_ros, 
                                                   const ObjectDescription& obj)
{
    ROSVectorFromSDK(ped_ros.pedestrian_velocity, obj.pedestrian().velocity());
}


void ROSCopyAnnotationInfo(cognata_sdk_ros2::msg::AnnotationMsg anno_ros, 
                                                   const ObjectDescription& obj)
{
    ROSVectorFromSDK(anno_ros.local_transform.translation, 
                                  obj.annotation().localtransform().position());
    ROSVectorFromSDK(anno_ros.local_transform.rotation, 
                                  obj.annotation().localtransform().rotation());
}


//Lidar msg construction utility functions
void ROSSetLidarMesurments(size_t pointStep, size_t width, 
                                    sensor_msgs::msg::PointCloud2 &lidarRosMsg)
{
    lidarRosMsg.is_dense = true;
    lidarRosMsg.height = 1;             
    lidarRosMsg.point_step = pointStep;
    lidarRosMsg.width = width;
    lidarRosMsg.row_step = (uint32_t)(lidarRosMsg.point_step * lidarRosMsg.width);
}

PointStruct::PointStruct(std::string fieldName, uint8_t dataType) :
    m_FieldName(fieldName), m_Datatype(dataType), m_DataSize(TYPE_SIZE_LUT[dataType-1])
{}


void enterLidarFieldInfo(sensor_msgs::msg::PointCloud2& lidarRosMsg, 
                                int index, std::string fieldName, 
                                uint32_t offset, uint8_t datatype)
{
    lidarRosMsg.fields[index].name = fieldName;
    lidarRosMsg.fields[index].offset = offset;
    lidarRosMsg.fields[index].datatype = datatype;
    lidarRosMsg.fields[index].count = 1;
}


void addLdoDataToVector(std::vector<PointStruct>& lidarStructure)
{
    lidarStructure.push_back(PointStruct("x", sensor_msgs::msg::PointField::FLOAT32));
    lidarStructure.push_back(PointStruct("y", sensor_msgs::msg::PointField::FLOAT32));
    lidarStructure.push_back(PointStruct("z", sensor_msgs::msg::PointField::FLOAT32));
    lidarStructure.push_back(PointStruct("delta_time_uint16", sensor_msgs::msg::PointField::UINT16));
    lidarStructure.push_back(PointStruct("lidar_identifier", sensor_msgs::msg::PointField::UINT8));
    lidarStructure.push_back(PointStruct("intensity", sensor_msgs::msg::PointField::UINT8));
}


void addLdgDataToVector(std::vector<PointStruct>& lidarStructure)
{
    addLdoDataToVector(lidarStructure);
    lidarStructure.push_back(PointStruct("class", sensor_msgs::msg::PointField::UINT8));
    lidarStructure.push_back(PointStruct("instance", sensor_msgs::msg::PointField::UINT32));
    lidarStructure.push_back(PointStruct("material", sensor_msgs::msg::PointField::UINT16));
    lidarStructure.push_back(PointStruct("normal_angle", sensor_msgs::msg::PointField::UINT16));
    lidarStructure.push_back(PointStruct("point_index", sensor_msgs::msg::PointField::UINT32));
    lidarStructure.push_back(PointStruct("structure", sensor_msgs::msg::PointField::UINT8));
    lidarStructure.push_back(PointStruct("reference_distance", sensor_msgs::msg::PointField::UINT16));
    lidarStructure.push_back(PointStruct("fill_factor_numerator", sensor_msgs::msg::PointField::UINT8));
    lidarStructure.push_back(PointStruct("fill_factor_denominator", sensor_msgs::msg::PointField::UINT8));
    lidarStructure.push_back(PointStruct("reference_reflectivity", sensor_msgs::msg::PointField::UINT8));
}


void addLidarFieldsToRosMsg(sensor_msgs::msg::PointCloud2& lidarRosMsg, 
                                       std::vector<PointStruct>& lidarStructure)
{   
    uint32_t offset = 0;
    lidarRosMsg.fields.resize(lidarStructure.size());
    for (int i = 0 ; i < lidarStructure.size() ; ++i)
    {
        enterLidarFieldInfo(lidarRosMsg, i, lidarStructure[i].m_FieldName, offset, lidarStructure[i].m_Datatype);
        offset += lidarStructure[i].m_DataSize;
    }
}


std::vector<uint8_t> FlipImage(
            const char *start, const char* end, size_t width, size_t channelNum)
{
    std::vector<uint8_t> toRet;
    
    while (start < end)
    {
        const char *chunkReader = end - (width * channelNum);
        
        while(chunkReader < end)
        {
            for(int i = (channelNum-1) ; i >= 0 ; --i)
            {
                toRet.push_back(*(chunkReader+i));    
            }
            
            chunkReader += channelNum;
        }
        
        end -= (width * channelNum);
    }

    return toRet;
}


void ClampValue(float& value, const float& min, const float& max)
{
    if (value < min)
    {
        value = min;
    }
    else if (value > max)
    {
        value = max;
    }
}