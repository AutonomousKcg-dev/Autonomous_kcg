// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracked_lane_msgs/msg/detail/boundary__rosidl_typesupport_introspection_c.h"
#include "tracked_lane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracked_lane_msgs/msg/detail/boundary__functions.h"
#include "tracked_lane_msgs/msg/detail/boundary__struct.h"


// Include directives for member types
// Member `points`
#include "tracked_lane_msgs/msg/point.h"
// Member `points`
#include "tracked_lane_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boundary__rosidl_typesupport_introspection_c__Boundary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracked_lane_msgs__msg__Boundary__init(message_memory);
}

void Boundary__rosidl_typesupport_introspection_c__Boundary_fini_function(void * message_memory)
{
  tracked_lane_msgs__msg__Boundary__fini(message_memory);
}

size_t Boundary__rosidl_typesupport_introspection_c__size_function__Point__points(
  const void * untyped_member)
{
  const tracked_lane_msgs__msg__Point__Sequence * member =
    (const tracked_lane_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * Boundary__rosidl_typesupport_introspection_c__get_const_function__Point__points(
  const void * untyped_member, size_t index)
{
  const tracked_lane_msgs__msg__Point__Sequence * member =
    (const tracked_lane_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Boundary__rosidl_typesupport_introspection_c__get_function__Point__points(
  void * untyped_member, size_t index)
{
  tracked_lane_msgs__msg__Point__Sequence * member =
    (tracked_lane_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Boundary__rosidl_typesupport_introspection_c__resize_function__Point__points(
  void * untyped_member, size_t size)
{
  tracked_lane_msgs__msg__Point__Sequence * member =
    (tracked_lane_msgs__msg__Point__Sequence *)(untyped_member);
  tracked_lane_msgs__msg__Point__Sequence__fini(member);
  return tracked_lane_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Boundary__rosidl_typesupport_introspection_c__Boundary_message_member_array[2] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__Boundary, points),  // bytes offset in struct
    NULL,  // default value
    Boundary__rosidl_typesupport_introspection_c__size_function__Point__points,  // size() function pointer
    Boundary__rosidl_typesupport_introspection_c__get_const_function__Point__points,  // get_const(index) function pointer
    Boundary__rosidl_typesupport_introspection_c__get_function__Point__points,  // get(index) function pointer
    Boundary__rosidl_typesupport_introspection_c__resize_function__Point__points  // resize(index) function pointer
  },
  {
    "num_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__Boundary, num_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boundary__rosidl_typesupport_introspection_c__Boundary_message_members = {
  "tracked_lane_msgs__msg",  // message namespace
  "Boundary",  // message name
  2,  // number of fields
  sizeof(tracked_lane_msgs__msg__Boundary),
  Boundary__rosidl_typesupport_introspection_c__Boundary_message_member_array,  // message members
  Boundary__rosidl_typesupport_introspection_c__Boundary_init_function,  // function to initialize message memory (memory has to be allocated)
  Boundary__rosidl_typesupport_introspection_c__Boundary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boundary__rosidl_typesupport_introspection_c__Boundary_message_type_support_handle = {
  0,
  &Boundary__rosidl_typesupport_introspection_c__Boundary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracked_lane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Boundary)() {
  Boundary__rosidl_typesupport_introspection_c__Boundary_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Point)();
  if (!Boundary__rosidl_typesupport_introspection_c__Boundary_message_type_support_handle.typesupport_identifier) {
    Boundary__rosidl_typesupport_introspection_c__Boundary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boundary__rosidl_typesupport_introspection_c__Boundary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
