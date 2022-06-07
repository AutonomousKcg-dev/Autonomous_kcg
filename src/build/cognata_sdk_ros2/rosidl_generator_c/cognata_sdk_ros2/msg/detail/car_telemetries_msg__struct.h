// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__STRUCT_H_

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
// Member 'turn_light'
#include "rosidl_runtime_c/string.h"
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'wheels'
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__struct.h"

// Struct defined in msg/CarTelemetriesMsg in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__CarTelemetriesMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String turn_light;
  float acceleration;
  float brake;
  float gas;
  float steering;
  geometry_msgs__msg__Twist center_of_mass;
  float engine_rpm;
  float engine_load;
  float engine_torque;
  float engine_power;
  int32_t current_gear;
  cognata_sdk_ros2__msg__WheelTelemetries__Sequence wheels;
} cognata_sdk_ros2__msg__CarTelemetriesMsg;

// Struct for a sequence of cognata_sdk_ros2__msg__CarTelemetriesMsg.
typedef struct cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence
{
  cognata_sdk_ros2__msg__CarTelemetriesMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__STRUCT_H_
