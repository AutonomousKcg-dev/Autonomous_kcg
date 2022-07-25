// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracked_lane_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"
#include "tracked_lane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracked_lane_msgs/msg/detail/lane__functions.h"
#include "tracked_lane_msgs/msg/detail/lane__struct.h"


// Include directives for member types
// Member `left_boundary`
// Member `right_boundary`
#include "tracked_lane_msgs/msg/boundary.h"
// Member `left_boundary`
// Member `right_boundary`
#include "tracked_lane_msgs/msg/detail/boundary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Lane__rosidl_typesupport_introspection_c__Lane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracked_lane_msgs__msg__Lane__init(message_memory);
}

void Lane__rosidl_typesupport_introspection_c__Lane_fini_function(void * message_memory)
{
  tracked_lane_msgs__msg__Lane__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Lane__rosidl_typesupport_introspection_c__Lane_message_member_array[2] = {
  {
    "left_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__Lane, left_boundary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__Lane, right_boundary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Lane__rosidl_typesupport_introspection_c__Lane_message_members = {
  "tracked_lane_msgs__msg",  // message namespace
  "Lane",  // message name
  2,  // number of fields
  sizeof(tracked_lane_msgs__msg__Lane),
  Lane__rosidl_typesupport_introspection_c__Lane_message_member_array,  // message members
  Lane__rosidl_typesupport_introspection_c__Lane_init_function,  // function to initialize message memory (memory has to be allocated)
  Lane__rosidl_typesupport_introspection_c__Lane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Lane__rosidl_typesupport_introspection_c__Lane_message_type_support_handle = {
  0,
  &Lane__rosidl_typesupport_introspection_c__Lane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracked_lane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Lane)() {
  Lane__rosidl_typesupport_introspection_c__Lane_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Boundary)();
  Lane__rosidl_typesupport_introspection_c__Lane_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Boundary)();
  if (!Lane__rosidl_typesupport_introspection_c__Lane_message_type_support_handle.typesupport_identifier) {
    Lane__rosidl_typesupport_introspection_c__Lane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Lane__rosidl_typesupport_introspection_c__Lane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
