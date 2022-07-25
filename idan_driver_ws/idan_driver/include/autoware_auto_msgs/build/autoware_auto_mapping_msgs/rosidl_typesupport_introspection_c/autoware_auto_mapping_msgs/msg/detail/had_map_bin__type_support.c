// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__functions.h"
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `format_version`
// Member `map_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_mapping_msgs__msg__HADMapBin__init(message_memory);
}

void HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_fini_function(void * message_memory)
{
  autoware_auto_mapping_msgs__msg__HADMapBin__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapBin, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapBin, map_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "format_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapBin, format_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapBin, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapBin, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_members = {
  "autoware_auto_mapping_msgs__msg",  // message namespace
  "HADMapBin",  // message name
  5,  // number of fields
  sizeof(autoware_auto_mapping_msgs__msg__HADMapBin),
  HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_member_array,  // message members
  HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_init_function,  // function to initialize message memory (memory has to be allocated)
  HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle = {
  0,
  &HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, msg, HADMapBin)() {
  HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle.typesupport_identifier) {
    HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
