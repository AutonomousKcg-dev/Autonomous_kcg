// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracked_object_msgs/msg/detail/tracked_object__rosidl_typesupport_introspection_c.h"
#include "tracked_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracked_object_msgs/msg/detail/tracked_object__functions.h"
#include "tracked_object_msgs/msg/detail/tracked_object__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `object_pose_m_quat`
#include "geometry_msgs/msg/pose.h"
// Member `object_pose_m_quat`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `base_frame_id`
// Member `metadata`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_velocity_mps_radps`
#include "geometry_msgs/msg/twist.h"
// Member `object_velocity_mps_radps`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `box_dimensions_m`
#include "geometry_msgs/msg/vector3.h"
// Member `box_dimensions_m`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracked_object_msgs__msg__TrackedObject__init(message_memory);
}

void TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_fini_function(void * message_memory)
{
  tracked_object_msgs__msg__TrackedObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[9] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, object_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_pose_m_quat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, object_pose_m_quat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, base_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_velocity_mps_radps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, object_velocity_mps_radps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box_dimensions_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, box_dimensions_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObject, metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_members = {
  "tracked_object_msgs__msg",  // message namespace
  "TrackedObject",  // message name
  9,  // number of fields
  sizeof(tracked_object_msgs__msg__TrackedObject),
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array,  // message members
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle = {
  0,
  &TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracked_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_object_msgs, msg, TrackedObject)() {
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle.typesupport_identifier) {
    TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
