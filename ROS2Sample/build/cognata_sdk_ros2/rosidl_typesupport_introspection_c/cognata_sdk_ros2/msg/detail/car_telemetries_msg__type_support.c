// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `turn_light`
#include "rosidl_runtime_c/string_functions.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/twist.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `wheels`
#include "cognata_sdk_ros2/msg/wheel_telemetries.h"
// Member `wheels`
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__CarTelemetriesMsg__init(message_memory);
}

void CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(message_memory);
}

size_t CarTelemetriesMsg__rosidl_typesupport_introspection_c__size_function__WheelTelemetries__wheels(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__WheelTelemetries__Sequence * member =
    (const cognata_sdk_ros2__msg__WheelTelemetries__Sequence *)(untyped_member);
  return member->size;
}

const void * CarTelemetriesMsg__rosidl_typesupport_introspection_c__get_const_function__WheelTelemetries__wheels(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__WheelTelemetries__Sequence * member =
    (const cognata_sdk_ros2__msg__WheelTelemetries__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CarTelemetriesMsg__rosidl_typesupport_introspection_c__get_function__WheelTelemetries__wheels(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__WheelTelemetries__Sequence * member =
    (cognata_sdk_ros2__msg__WheelTelemetries__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CarTelemetriesMsg__rosidl_typesupport_introspection_c__resize_function__WheelTelemetries__wheels(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__WheelTelemetries__Sequence * member =
    (cognata_sdk_ros2__msg__WheelTelemetries__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__WheelTelemetries__Sequence__fini(member);
  return cognata_sdk_ros2__msg__WheelTelemetries__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, turn_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, gas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_of_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, center_of_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engine_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, engine_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engine_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, engine_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engine_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, engine_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engine_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, engine_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, current_gear),  // bytes offset in struct
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
    offsetof(cognata_sdk_ros2__msg__CarTelemetriesMsg, wheels),  // bytes offset in struct
    NULL,  // default value
    CarTelemetriesMsg__rosidl_typesupport_introspection_c__size_function__WheelTelemetries__wheels,  // size() function pointer
    CarTelemetriesMsg__rosidl_typesupport_introspection_c__get_const_function__WheelTelemetries__wheels,  // get_const(index) function pointer
    CarTelemetriesMsg__rosidl_typesupport_introspection_c__get_function__WheelTelemetries__wheels,  // get(index) function pointer
    CarTelemetriesMsg__rosidl_typesupport_introspection_c__resize_function__WheelTelemetries__wheels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "CarTelemetriesMsg",  // message name
  13,  // number of fields
  sizeof(cognata_sdk_ros2__msg__CarTelemetriesMsg),
  CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_member_array,  // message members
  CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_type_support_handle = {
  0,
  &CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, CarTelemetriesMsg)() {
  CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, WheelTelemetries)();
  if (!CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_type_support_handle.typesupport_identifier) {
    CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarTelemetriesMsg__rosidl_typesupport_introspection_c__CarTelemetriesMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
