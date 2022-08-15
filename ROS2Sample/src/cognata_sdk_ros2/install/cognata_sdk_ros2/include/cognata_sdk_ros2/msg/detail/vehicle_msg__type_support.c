// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `description`
#include "cognata_sdk_ros2/msg/object_description.h"
// Member `description`
#include "cognata_sdk_ros2/msg/detail/object_description__rosidl_typesupport_introspection_c.h"
// Member `vehicle_type`
// Member `vehicle_role`
// Member `navigation_segment`
// Member `lane_id`
// Member `lanes_from_left`
// Member `signal_state`
// Member `signal_light`
#include "rosidl_runtime_c/string_functions.h"
// Member `wheels`
#include "cognata_sdk_ros2/msg/wheel_msg.h"
// Member `wheels`
#include "cognata_sdk_ros2/msg/detail/wheel_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__VehicleMsg__init(message_memory);
}

void VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__VehicleMsg__fini(message_memory);
}

size_t VehicleMsg__rosidl_typesupport_introspection_c__size_function__WheelMsg__wheels(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__WheelMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__WheelMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * VehicleMsg__rosidl_typesupport_introspection_c__get_const_function__WheelMsg__wheels(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__WheelMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__WheelMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VehicleMsg__rosidl_typesupport_introspection_c__get_function__WheelMsg__wheels(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__WheelMsg__Sequence * member =
    (cognata_sdk_ros2__msg__WheelMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VehicleMsg__rosidl_typesupport_introspection_c__resize_function__WheelMsg__wheels(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__WheelMsg__Sequence * member =
    (cognata_sdk_ros2__msg__WheelMsg__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__WheelMsg__Sequence__fini(member);
  return cognata_sdk_ros2__msg__WheelMsg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, vehicle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_role",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, vehicle_role),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigation_segment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, navigation_segment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanes_from_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, lanes_from_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_light_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, head_light_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_light_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, brake_light_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reverse_light_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, reverse_light_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, signal_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, signal_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__VehicleMsg, wheels),  // bytes offset in struct
    NULL,  // default value
    VehicleMsg__rosidl_typesupport_introspection_c__size_function__WheelMsg__wheels,  // size() function pointer
    VehicleMsg__rosidl_typesupport_introspection_c__get_const_function__WheelMsg__wheels,  // get_const(index) function pointer
    VehicleMsg__rosidl_typesupport_introspection_c__get_function__WheelMsg__wheels,  // get(index) function pointer
    VehicleMsg__rosidl_typesupport_introspection_c__resize_function__WheelMsg__wheels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "VehicleMsg",  // message name
  13,  // number of fields
  sizeof(cognata_sdk_ros2__msg__VehicleMsg),
  VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_member_array,  // message members
  VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_type_support_handle = {
  0,
  &VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, VehicleMsg)() {
  VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, ObjectDescription)();
  VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, WheelMsg)();
  if (!VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_type_support_handle.typesupport_identifier) {
    VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleMsg__rosidl_typesupport_introspection_c__VehicleMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
