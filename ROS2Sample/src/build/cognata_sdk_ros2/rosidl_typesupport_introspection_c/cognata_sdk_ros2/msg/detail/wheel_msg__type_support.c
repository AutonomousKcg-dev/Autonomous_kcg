// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/WheelMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/wheel_msg__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/wheel_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/wheel_msg__struct.h"


// Include directives for member types
// Member `relative_position`
#include "geometry_msgs/msg/vector3.h"
// Member `relative_position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__WheelMsg__init(message_memory);
}

void WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__WheelMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_member_array[4] = {
  {
    "relative_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__WheelMsg, relative_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__WheelMsg, steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotate_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__WheelMsg, rotate_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__WheelMsg, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "WheelMsg",  // message name
  4,  // number of fields
  sizeof(cognata_sdk_ros2__msg__WheelMsg),
  WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_member_array,  // message members
  WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_type_support_handle = {
  0,
  &WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, WheelMsg)() {
  WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_type_support_handle.typesupport_identifier) {
    WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WheelMsg__rosidl_typesupport_introspection_c__WheelMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
