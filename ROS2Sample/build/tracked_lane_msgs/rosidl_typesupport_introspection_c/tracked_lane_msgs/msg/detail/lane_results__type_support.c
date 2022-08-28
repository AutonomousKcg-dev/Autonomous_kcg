// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracked_lane_msgs/msg/detail/lane_results__rosidl_typesupport_introspection_c.h"
#include "tracked_lane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracked_lane_msgs/msg/detail/lane_results__functions.h"
#include "tracked_lane_msgs/msg/detail/lane_results__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `adjacent_left`
// Member `adjacent_right`
// Member `ego_lane`
// Member `road_boundary`
#include "tracked_lane_msgs/msg/lane.h"
// Member `adjacent_left`
// Member `adjacent_right`
// Member `ego_lane`
// Member `road_boundary`
#include "tracked_lane_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"
// Member `algo_description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneResults__rosidl_typesupport_introspection_c__LaneResults_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracked_lane_msgs__msg__LaneResults__init(message_memory);
}

void LaneResults__rosidl_typesupport_introspection_c__LaneResults_fini_function(void * message_memory)
{
  tracked_lane_msgs__msg__LaneResults__fini(message_memory);
}

size_t LaneResults__rosidl_typesupport_introspection_c__size_function__Lane__adjacent_left(
  const void * untyped_member)
{
  const tracked_lane_msgs__msg__Lane__Sequence * member =
    (const tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneResults__rosidl_typesupport_introspection_c__get_const_function__Lane__adjacent_left(
  const void * untyped_member, size_t index)
{
  const tracked_lane_msgs__msg__Lane__Sequence * member =
    (const tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneResults__rosidl_typesupport_introspection_c__get_function__Lane__adjacent_left(
  void * untyped_member, size_t index)
{
  tracked_lane_msgs__msg__Lane__Sequence * member =
    (tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneResults__rosidl_typesupport_introspection_c__resize_function__Lane__adjacent_left(
  void * untyped_member, size_t size)
{
  tracked_lane_msgs__msg__Lane__Sequence * member =
    (tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  tracked_lane_msgs__msg__Lane__Sequence__fini(member);
  return tracked_lane_msgs__msg__Lane__Sequence__init(member, size);
}

size_t LaneResults__rosidl_typesupport_introspection_c__size_function__Lane__adjacent_right(
  const void * untyped_member)
{
  const tracked_lane_msgs__msg__Lane__Sequence * member =
    (const tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneResults__rosidl_typesupport_introspection_c__get_const_function__Lane__adjacent_right(
  const void * untyped_member, size_t index)
{
  const tracked_lane_msgs__msg__Lane__Sequence * member =
    (const tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneResults__rosidl_typesupport_introspection_c__get_function__Lane__adjacent_right(
  void * untyped_member, size_t index)
{
  tracked_lane_msgs__msg__Lane__Sequence * member =
    (tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneResults__rosidl_typesupport_introspection_c__resize_function__Lane__adjacent_right(
  void * untyped_member, size_t size)
{
  tracked_lane_msgs__msg__Lane__Sequence * member =
    (tracked_lane_msgs__msg__Lane__Sequence *)(untyped_member);
  tracked_lane_msgs__msg__Lane__Sequence__fini(member);
  return tracked_lane_msgs__msg__Lane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adjacent_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, adjacent_left),  // bytes offset in struct
    NULL,  // default value
    LaneResults__rosidl_typesupport_introspection_c__size_function__Lane__adjacent_left,  // size() function pointer
    LaneResults__rosidl_typesupport_introspection_c__get_const_function__Lane__adjacent_left,  // get_const(index) function pointer
    LaneResults__rosidl_typesupport_introspection_c__get_function__Lane__adjacent_left,  // get(index) function pointer
    LaneResults__rosidl_typesupport_introspection_c__resize_function__Lane__adjacent_left  // resize(index) function pointer
  },
  {
    "num_adjacent_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, num_adjacent_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adjacent_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, adjacent_right),  // bytes offset in struct
    NULL,  // default value
    LaneResults__rosidl_typesupport_introspection_c__size_function__Lane__adjacent_right,  // size() function pointer
    LaneResults__rosidl_typesupport_introspection_c__get_const_function__Lane__adjacent_right,  // get_const(index) function pointer
    LaneResults__rosidl_typesupport_introspection_c__get_function__Lane__adjacent_right,  // get(index) function pointer
    LaneResults__rosidl_typesupport_introspection_c__resize_function__Lane__adjacent_right  // resize(index) function pointer
  },
  {
    "num_adjacent_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, num_adjacent_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, ego_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, road_boundary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_number_of_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, total_number_of_lanes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "algo_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs__msg__LaneResults, algo_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_members = {
  "tracked_lane_msgs__msg",  // message namespace
  "LaneResults",  // message name
  9,  // number of fields
  sizeof(tracked_lane_msgs__msg__LaneResults),
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array,  // message members
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_type_support_handle = {
  0,
  &LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracked_lane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, LaneResults)() {
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Lane)();
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Lane)();
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Lane)();
  LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_lane_msgs, msg, Lane)();
  if (!LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_type_support_handle.typesupport_identifier) {
    LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneResults__rosidl_typesupport_introspection_c__LaneResults_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
