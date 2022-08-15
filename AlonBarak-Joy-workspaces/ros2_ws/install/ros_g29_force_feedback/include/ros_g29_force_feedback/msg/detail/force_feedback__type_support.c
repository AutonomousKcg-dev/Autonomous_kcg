// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_g29_force_feedback/msg/detail/force_feedback__rosidl_typesupport_introspection_c.h"
#include "ros_g29_force_feedback/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_g29_force_feedback/msg/detail/force_feedback__functions.h"
#include "ros_g29_force_feedback/msg/detail/force_feedback__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_g29_force_feedback__msg__ForceFeedback__init(message_memory);
}

void ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_fini_function(void * message_memory)
{
  ros_g29_force_feedback__msg__ForceFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_g29_force_feedback__msg__ForceFeedback, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_g29_force_feedback__msg__ForceFeedback, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_g29_force_feedback__msg__ForceFeedback, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_members = {
  "ros_g29_force_feedback__msg",  // message namespace
  "ForceFeedback",  // message name
  3,  // number of fields
  sizeof(ros_g29_force_feedback__msg__ForceFeedback),
  ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_member_array,  // message members
  ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_type_support_handle = {
  0,
  &ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_g29_force_feedback
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_g29_force_feedback, msg, ForceFeedback)() {
  ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_type_support_handle.typesupport_identifier) {
    ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ForceFeedback__rosidl_typesupport_introspection_c__ForceFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
