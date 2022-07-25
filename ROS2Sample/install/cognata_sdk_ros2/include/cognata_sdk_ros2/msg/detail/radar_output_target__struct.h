// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__STRUCT_H_

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

// Struct defined in msg/RadarOutputTarget in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__RadarOutputTarget
{
  std_msgs__msg__Header header;
  uint32_t id;
  uint32_t time_stamp;
  float range;
  float azimuth;
  float elevation;
  float range_rate;
  float amplitude;
  uint32_t is_aggregate;
  int32_t tracking_status;
  uint32_t age;
  uint32_t last_seen;
  bool is_stationary;
  bool is_ghost;
} cognata_sdk_ros2__msg__RadarOutputTarget;

// Struct for a sequence of cognata_sdk_ros2__msg__RadarOutputTarget.
typedef struct cognata_sdk_ros2__msg__RadarOutputTarget__Sequence
{
  cognata_sdk_ros2__msg__RadarOutputTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__RadarOutputTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__STRUCT_H_
