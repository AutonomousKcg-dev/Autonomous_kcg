// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__STRUCT_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__STRUCT_H_

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
// Member 'vehicle_type'
// Member 'vehicle_role'
// Member 'navigation_segment'
// Member 'lane_id'
// Member 'lanes_from_left'
// Member 'signal_state'
// Member 'signal_light'
#include "rosidl_runtime_c/string.h"
// Member 'wheels'
#include "cognata_sdk_ros2/msg/detail/wheel_msg__struct.h"

// Struct defined in msg/VehicleMsg in the package cognata_sdk_ros2.
typedef struct cognata_sdk_ros2__msg__VehicleMsg
{
  std_msgs__msg__Header header;
  cognata_sdk_ros2__msg__ObjectDescription description;
  rosidl_runtime_c__String vehicle_type;
  rosidl_runtime_c__String vehicle_role;
  rosidl_runtime_c__String navigation_segment;
  rosidl_runtime_c__String lane_id;
  rosidl_runtime_c__String lanes_from_left;
  bool head_light_state;
  bool brake_light_state;
  bool reverse_light_state;
  rosidl_runtime_c__String signal_state;
  rosidl_runtime_c__String signal_light;
  cognata_sdk_ros2__msg__WheelMsg__Sequence wheels;
} cognata_sdk_ros2__msg__VehicleMsg;

// Struct for a sequence of cognata_sdk_ros2__msg__VehicleMsg.
typedef struct cognata_sdk_ros2__msg__VehicleMsg__Sequence
{
  cognata_sdk_ros2__msg__VehicleMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cognata_sdk_ros2__msg__VehicleMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__STRUCT_H_
