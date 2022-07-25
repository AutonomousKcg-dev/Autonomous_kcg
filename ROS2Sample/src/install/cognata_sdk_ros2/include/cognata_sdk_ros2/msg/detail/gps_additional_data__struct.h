// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/GPSAdditionalData.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__STRUCT_H_

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
// Member 'position'
// Member 'velocity_local_3d'
// Member 'angular_acceleration_local_3d'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/GPSAdditionalData in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__GPSAdditionalData
{
  std_msgs__msg__Header header;
  float speed;
  float lane_width;
  float lane_offset;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 velocity_local_3d;
  geometry_msgs__msg__Vector3 angular_acceleration_local_3d;
  int32_t lane_number;
  int32_t navigation_segment;
} cognata_sdk_ros2__msg__GPSAdditionalData;

// Struct for a sequence of cognata_sdk_ros2__msg__GPSAdditionalData.
typedef struct cognata_sdk_ros2__msg__GPSAdditionalData__Sequence
{
  cognata_sdk_ros2__msg__GPSAdditionalData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__GPSAdditionalData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__STRUCT_H_
