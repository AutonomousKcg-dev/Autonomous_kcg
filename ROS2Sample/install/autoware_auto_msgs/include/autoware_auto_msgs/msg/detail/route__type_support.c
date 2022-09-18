// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_msgs/msg/detail/route__functions.h"
#include "autoware_auto_msgs/msg/detail/route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `start_point`
// Member `goal_point`
#include "autoware_auto_msgs/msg/trajectory_point.h"
// Member `start_point`
// Member `goal_point`
#include "autoware_auto_msgs/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `primitives`
#include "autoware_auto_msgs/msg/map_primitive.h"
// Member `primitives`
#include "autoware_auto_msgs/msg/detail/map_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Route__rosidl_typesupport_introspection_c__Route_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_msgs__msg__Route__init(message_memory);
}

void Route__rosidl_typesupport_introspection_c__Route_fini_function(void * message_memory)
{
  autoware_auto_msgs__msg__Route__fini(message_memory);
}

size_t Route__rosidl_typesupport_introspection_c__size_function__MapPrimitive__primitives(
  const void * untyped_member)
{
  const autoware_auto_msgs__msg__MapPrimitive__Sequence * member =
    (const autoware_auto_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * Route__rosidl_typesupport_introspection_c__get_const_function__MapPrimitive__primitives(
  const void * untyped_member, size_t index)
{
  const autoware_auto_msgs__msg__MapPrimitive__Sequence * member =
    (const autoware_auto_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Route__rosidl_typesupport_introspection_c__get_function__MapPrimitive__primitives(
  void * untyped_member, size_t index)
{
  autoware_auto_msgs__msg__MapPrimitive__Sequence * member =
    (autoware_auto_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Route__rosidl_typesupport_introspection_c__resize_function__MapPrimitive__primitives(
  void * untyped_member, size_t size)
{
  autoware_auto_msgs__msg__MapPrimitive__Sequence * member =
    (autoware_auto_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  autoware_auto_msgs__msg__MapPrimitive__Sequence__fini(member);
  return autoware_auto_msgs__msg__MapPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Route__rosidl_typesupport_introspection_c__Route_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_msgs__msg__Route, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_msgs__msg__Route, start_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_msgs__msg__Route, goal_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    100,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_msgs__msg__Route, primitives),  // bytes offset in struct
    NULL,  // default value
    Route__rosidl_typesupport_introspection_c__size_function__MapPrimitive__primitives,  // size() function pointer
    Route__rosidl_typesupport_introspection_c__get_const_function__MapPrimitive__primitives,  // get_const(index) function pointer
    Route__rosidl_typesupport_introspection_c__get_function__MapPrimitive__primitives,  // get(index) function pointer
    Route__rosidl_typesupport_introspection_c__resize_function__MapPrimitive__primitives  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Route__rosidl_typesupport_introspection_c__Route_message_members = {
  "autoware_auto_msgs__msg",  // message namespace
  "Route",  // message name
  4,  // number of fields
  sizeof(autoware_auto_msgs__msg__Route),
  Route__rosidl_typesupport_introspection_c__Route_message_member_array,  // message members
  Route__rosidl_typesupport_introspection_c__Route_init_function,  // function to initialize message memory (memory has to be allocated)
  Route__rosidl_typesupport_introspection_c__Route_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle = {
  0,
  &Route__rosidl_typesupport_introspection_c__Route_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_msgs, msg, Route)() {
  Route__rosidl_typesupport_introspection_c__Route_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Route__rosidl_typesupport_introspection_c__Route_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_msgs, msg, TrajectoryPoint)();
  Route__rosidl_typesupport_introspection_c__Route_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_msgs, msg, TrajectoryPoint)();
  Route__rosidl_typesupport_introspection_c__Route_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_msgs, msg, MapPrimitive)();
  if (!Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier) {
    Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
