// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"

// Struct defined in msg/Shape in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__Shape
{
  geometry_msgs__msg__Polygon polygon;
  float height;
} autoware_auto_perception_msgs__msg__Shape;

// Struct for a sequence of autoware_auto_perception_msgs__msg__Shape.
typedef struct autoware_auto_perception_msgs__msg__Shape__Sequence
{
  autoware_auto_perception_msgs__msg__Shape * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__Shape__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_
