// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__functions.h"
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__struct.h"


// Include directives for member types
// Member `point`
#include "autoware_auto_planning_msgs/msg/path_point.h"
// Member `point`
#include "autoware_auto_planning_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__init(message_memory);
}

void PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_member_array[2] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathPointWithLaneId, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathPointWithLaneId, lane_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_members = {
  "autoware_auto_planning_msgs__msg",  // message namespace
  "PathPointWithLaneId",  // message name
  2,  // number of fields
  sizeof(autoware_auto_planning_msgs__msg__PathPointWithLaneId),
  PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_member_array,  // message members
  PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle = {
  0,
  &PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathPointWithLaneId)() {
  PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathPoint)();
  if (!PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle.typesupport_identifier) {
    PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
