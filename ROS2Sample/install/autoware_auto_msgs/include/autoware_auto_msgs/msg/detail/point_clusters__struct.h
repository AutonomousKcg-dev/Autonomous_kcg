// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_H_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'clusters'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in msg/PointClusters in the package autoware_auto_msgs.
typedef struct autoware_auto_msgs__msg__PointClusters
{
  sensor_msgs__msg__PointCloud2__Sequence clusters;
} autoware_auto_msgs__msg__PointClusters;

// Struct for a sequence of autoware_auto_msgs__msg__PointClusters.
typedef struct autoware_auto_msgs__msg__PointClusters__Sequence
{
  autoware_auto_msgs__msg__PointClusters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_msgs__msg__PointClusters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_H_
