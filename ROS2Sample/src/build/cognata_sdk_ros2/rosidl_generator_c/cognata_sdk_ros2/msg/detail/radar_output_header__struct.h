// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__STRUCT_H_

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
// Member 'radar_id'
#include "rosidl_runtime_c/string.h"
// Member 'radar_placement'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'targets'
#include "cognata_sdk_ros2/msg/detail/radar_output_target__struct.h"

// Struct defined in msg/RadarOutputHeader in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__RadarOutputHeader
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String radar_id;
  geometry_msgs__msg__Twist radar_placement;
  float h_fov;
  float v_fov;
  cognata_sdk_ros2__msg__RadarOutputTarget__Sequence targets;
} cognata_sdk_ros2__msg__RadarOutputHeader;

// Struct for a sequence of cognata_sdk_ros2__msg__RadarOutputHeader.
typedef struct cognata_sdk_ros2__msg__RadarOutputHeader__Sequence
{
  cognata_sdk_ros2__msg__RadarOutputHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__RadarOutputHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__STRUCT_H_
