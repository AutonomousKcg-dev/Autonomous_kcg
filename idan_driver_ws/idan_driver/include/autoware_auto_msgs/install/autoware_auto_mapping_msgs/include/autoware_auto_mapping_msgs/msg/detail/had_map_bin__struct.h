// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_H_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAP_FORMAT_LANELET2'.
enum
{
  autoware_auto_mapping_msgs__msg__HADMapBin__MAP_FORMAT_LANELET2 = 0
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'format_version'
// Member 'map_version'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/HADMapBin in the package autoware_auto_mapping_msgs.
typedef struct autoware_auto_mapping_msgs__msg__HADMapBin
{
  std_msgs__msg__Header header;
  uint8_t map_format;
  rosidl_runtime_c__String format_version;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__uint8__Sequence data;
} autoware_auto_mapping_msgs__msg__HADMapBin;

// Struct for a sequence of autoware_auto_mapping_msgs__msg__HADMapBin.
typedef struct autoware_auto_mapping_msgs__msg__HADMapBin__Sequence
{
  autoware_auto_mapping_msgs__msg__HADMapBin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_mapping_msgs__msg__HADMapBin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_H_
