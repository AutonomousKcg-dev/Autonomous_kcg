// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/WheelMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'relative_position'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/WheelMsg in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__WheelMsg
{
  geometry_msgs__msg__Vector3 relative_position;
  float steering_angle;
  float rotate_angle;
  rosidl_runtime_c__String name;
} cognata_sdk_ros2__msg__WheelMsg;

// Struct for a sequence of cognata_sdk_ros2__msg__WheelMsg.
typedef struct cognata_sdk_ros2__msg__WheelMsg__Sequence
{
  cognata_sdk_ros2__msg__WheelMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__WheelMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__STRUCT_H_
