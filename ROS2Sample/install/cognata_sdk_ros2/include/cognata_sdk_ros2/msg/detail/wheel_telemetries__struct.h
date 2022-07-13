// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__STRUCT_H_

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
// Member 'tire_force'
// Member 'tire_slip'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'wheel_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/WheelTelemetries in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__WheelTelemetries
{
  std_msgs__msg__Header header;
  float angular_velocity;
  float steer_angle;
  float drive_torque;
  float brake_torque;
  float reaction_torque;
  geometry_msgs__msg__Point tire_force;
  geometry_msgs__msg__Point tire_slip;
  bool can_slip;
  float combined_tire_slip;
  float suspension_compression;
  float down_force;
  float contact_angle;
  float contact_depth;
  float contact_speed;
  bool is_grounded;
  geometry_msgs__msg__Vector3 wheel_velocity;
} cognata_sdk_ros2__msg__WheelTelemetries;

// Struct for a sequence of cognata_sdk_ros2__msg__WheelTelemetries.
typedef struct cognata_sdk_ros2__msg__WheelTelemetries__Sequence
{
  cognata_sdk_ros2__msg__WheelTelemetries * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__WheelTelemetries__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__STRUCT_H_
