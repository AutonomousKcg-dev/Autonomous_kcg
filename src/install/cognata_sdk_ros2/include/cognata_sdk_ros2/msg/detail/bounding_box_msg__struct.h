// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

// Struct defined in msg/BoundingBoxMsg in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__BoundingBoxMsg
{
  geometry_msgs__msg__Transform transform;
  float height;
  float width;
  float length;
} cognata_sdk_ros2__msg__BoundingBoxMsg;

// Struct for a sequence of cognata_sdk_ros2__msg__BoundingBoxMsg.
typedef struct cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence
{
  cognata_sdk_ros2__msg__BoundingBoxMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__STRUCT_H_
