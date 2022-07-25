// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/msg/detail/path__functions.h"
#include "autoware_auto_planning_msgs/msg/detail/path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "autoware_auto_planning_msgs/msg/path_point.h"
// Member `points`
#include "autoware_auto_planning_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `drivable_area`
#include "nav_msgs/msg/occupancy_grid.h"
// Member `drivable_area`
#include "nav_msgs/msg/detail/occupancy_grid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Path__rosidl_typesupport_introspection_c__Path_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__msg__Path__init(message_memory);
}

void Path__rosidl_typesupport_introspection_c__Path_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__msg__Path__fini(message_memory);
}

size_t Path__rosidl_typesupport_introspection_c__size_function__PathPoint__points(
  const void * untyped_member)
{
  const autoware_auto_planning_msgs__msg__PathPoint__Sequence * member =
    (const autoware_auto_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * Path__rosidl_typesupport_introspection_c__get_const_function__PathPoint__points(
  const void * untyped_member, size_t index)
{
  const autoware_auto_planning_msgs__msg__PathPoint__Sequence * member =
    (const autoware_auto_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Path__rosidl_typesupport_introspection_c__get_function__PathPoint__points(
  void * untyped_member, size_t index)
{
  autoware_auto_planning_msgs__msg__PathPoint__Sequence * member =
    (autoware_auto_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Path__rosidl_typesupport_introspection_c__resize_function__PathPoint__points(
  void * untyped_member, size_t size)
{
  autoware_auto_planning_msgs__msg__PathPoint__Sequence * member =
    (autoware_auto_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  autoware_auto_planning_msgs__msg__PathPoint__Sequence__fini(member);
  return autoware_auto_planning_msgs__msg__PathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Path__rosidl_typesupport_introspection_c__Path_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__Path, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__Path, points),  // bytes offset in struct
    NULL,  // default value
    Path__rosidl_typesupport_introspection_c__size_function__PathPoint__points,  // size() function pointer
    Path__rosidl_typesupport_introspection_c__get_const_function__PathPoint__points,  // get_const(index) function pointer
    Path__rosidl_typesupport_introspection_c__get_function__PathPoint__points,  // get(index) function pointer
    Path__rosidl_typesupport_introspection_c__resize_function__PathPoint__points  // resize(index) function pointer
  },
  {
    "drivable_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__Path, drivable_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Path__rosidl_typesupport_introspection_c__Path_message_members = {
  "autoware_auto_planning_msgs__msg",  // message namespace
  "Path",  // message name
  3,  // number of fields
  sizeof(autoware_auto_planning_msgs__msg__Path),
  Path__rosidl_typesupport_introspection_c__Path_message_member_array,  // message members
  Path__rosidl_typesupport_introspection_c__Path_init_function,  // function to initialize message memory (memory has to be allocated)
  Path__rosidl_typesupport_introspection_c__Path_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle = {
  0,
  &Path__rosidl_typesupport_introspection_c__Path_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, Path)() {
  Path__rosidl_typesupport_introspection_c__Path_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Path__rosidl_typesupport_introspection_c__Path_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathPoint)();
  Path__rosidl_typesupport_introspection_c__Path_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, OccupancyGrid)();
  if (!Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier) {
    Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
