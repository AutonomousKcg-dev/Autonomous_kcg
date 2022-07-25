// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__STRUCT_H_

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
// Member 'pedestrian_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/PedestrianMsg in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__PedestrianMsg
{
  std_msgs__msg__Header header;
  cognata_sdk_ros2__msg__ObjectDescription description;
  geometry_msgs__msg__Vector3 pedestrian_velocity;
} cognata_sdk_ros2__msg__PedestrianMsg;

// Struct for a sequence of cognata_sdk_ros2__msg__PedestrianMsg.
typedef struct cognata_sdk_ros2__msg__PedestrianMsg__Sequence
{
  cognata_sdk_ros2__msg__PedestrianMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__PedestrianMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__STRUCT_H_
