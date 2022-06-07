// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_H_

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
// Member 'description'
#include "cognata_sdk_ros2/msg/detail/object_description__struct.h"
// Member 'status'
// Member 'bulb_status'
// Member 'functioning_status'
// Member 'behaviour'
// Member 'traffic_signal_status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrafficLightMsg in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__TrafficLightMsg
{
  std_msgs__msg__Header header;
  cognata_sdk_ros2__msg__ObjectDescription description;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String bulb_status;
  rosidl_runtime_c__String functioning_status;
  rosidl_runtime_c__String behaviour;
  rosidl_runtime_c__String traffic_signal_status;
  float azimuth_angle;
  float facing;
} cognata_sdk_ros2__msg__TrafficLightMsg;

// Struct for a sequence of cognata_sdk_ros2__msg__TrafficLightMsg.
typedef struct cognata_sdk_ros2__msg__TrafficLightMsg__Sequence
{
  cognata_sdk_ros2__msg__TrafficLightMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__TrafficLightMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_H_
