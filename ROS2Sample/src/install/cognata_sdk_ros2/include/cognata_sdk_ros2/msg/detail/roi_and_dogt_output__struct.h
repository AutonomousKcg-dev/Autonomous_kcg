// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'other_list'
#include "cognata_sdk_ros2/msg/detail/object_description__struct.h"
// Member 'annotation_list'
#include "cognata_sdk_ros2/msg/detail/annotation_msg__struct.h"
// Member 'pedestrian_list'
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.h"
// Member 'vehicle_list'
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__struct.h"
// Member 'traffic_light_list'
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__struct.h"

// Struct defined in msg/ROIAndDOGTOutput in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__ROIAndDOGTOutput
{
  std_msgs__msg__Header header;
  cognata_sdk_ros2__msg__ObjectDescription__Sequence other_list;
  cognata_sdk_ros2__msg__AnnotationMsg__Sequence annotation_list;
  cognata_sdk_ros2__msg__PedestrianMsg__Sequence pedestrian_list;
  cognata_sdk_ros2__msg__VehicleMsg__Sequence vehicle_list;
  cognata_sdk_ros2__msg__TrafficLightMsg__Sequence traffic_light_list;
} cognata_sdk_ros2__msg__ROIAndDOGTOutput;

// Struct for a sequence of cognata_sdk_ros2__msg__ROIAndDOGTOutput.
typedef struct cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence
{
  cognata_sdk_ros2__msg__ROIAndDOGTOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__STRUCT_H_
