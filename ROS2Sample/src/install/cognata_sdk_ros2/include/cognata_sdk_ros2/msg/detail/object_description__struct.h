// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/ObjectDescription.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__STRUCT_H_

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
// Member 'object_id'
// Member 'roi_type'
// Member 'roi_subtype'
// Member 'sensor_ids'
#include "rosidl_runtime_c/string.h"
// Member 'motion'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'bounding_box'
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__struct.h"

// Struct defined in msg/ObjectDescription in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__ObjectDescription
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String roi_type;
  rosidl_runtime_c__String roi_subtype;
  geometry_msgs__msg__Twist motion;
  cognata_sdk_ros2__msg__BoundingBoxMsg bounding_box;
  rosidl_runtime_c__String__Sequence sensor_ids;
} cognata_sdk_ros2__msg__ObjectDescription;

// Struct for a sequence of cognata_sdk_ros2__msg__ObjectDescription.
typedef struct cognata_sdk_ros2__msg__ObjectDescription__Sequence
{
  cognata_sdk_ros2__msg__ObjectDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__ObjectDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__STRUCT_H_
