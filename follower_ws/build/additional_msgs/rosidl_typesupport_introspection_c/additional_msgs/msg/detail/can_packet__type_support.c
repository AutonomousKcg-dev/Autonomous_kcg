// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from additional_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "additional_msgs/msg/detail/can_packet__rosidl_typesupport_introspection_c.h"
#include "additional_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "additional_msgs/msg/detail/can_packet__functions.h"
#include "additional_msgs/msg/detail/can_packet__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CanPacket__rosidl_typesupport_introspection_c__CanPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  additional_msgs__msg__CanPacket__init(message_memory);
}

void CanPacket__rosidl_typesupport_introspection_c__CanPacket_fini_function(void * message_memory)
{
  additional_msgs__msg__CanPacket__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, dat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs__msg__CanPacket, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_members = {
  "additional_msgs__msg",  // message namespace
  "CanPacket",  // message name
  7,  // number of fields
  sizeof(additional_msgs__msg__CanPacket),
  CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_member_array,  // message members
  CanPacket__rosidl_typesupport_introspection_c__CanPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  CanPacket__rosidl_typesupport_introspection_c__CanPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_type_support_handle = {
  0,
  &CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_additional_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, additional_msgs, msg, CanPacket)() {
  CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_type_support_handle.typesupport_identifier) {
    CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CanPacket__rosidl_typesupport_introspection_c__CanPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
