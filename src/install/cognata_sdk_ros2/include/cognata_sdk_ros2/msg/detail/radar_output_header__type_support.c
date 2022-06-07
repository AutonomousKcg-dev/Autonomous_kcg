// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/radar_output_header__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_header__functions.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_header__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `radar_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `radar_placement`
#include "geometry_msgs/msg/twist.h"
// Member `radar_placement`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `targets`
#include "cognata_sdk_ros2/msg/radar_output_target.h"
// Member `targets`
#include "cognata_sdk_ros2/msg/detail/radar_output_target__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__RadarOutputHeader__init(message_memory);
}

void RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__RadarOutputHeader__fini(message_memory);
}

size_t RadarOutputHeader__rosidl_typesupport_introspection_c__size_function__RadarOutputTarget__targets(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * member =
    (const cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *)(untyped_member);
  return member->size;
}

const void * RadarOutputHeader__rosidl_typesupport_introspection_c__get_const_function__RadarOutputTarget__targets(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * member =
    (const cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RadarOutputHeader__rosidl_typesupport_introspection_c__get_function__RadarOutputTarget__targets(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * member =
    (cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RadarOutputHeader__rosidl_typesupport_introspection_c__resize_function__RadarOutputTarget__targets(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * member =
    (cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini(member);
  return cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__RadarOutputHeader, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radar_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__RadarOutputHeader, radar_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radar_placement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__RadarOutputHeader, radar_placement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h_fov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__RadarOutputHeader, h_fov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_fov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__RadarOutputHeader, v_fov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__RadarOutputHeader, targets),  // bytes offset in struct
    NULL,  // default value
    RadarOutputHeader__rosidl_typesupport_introspection_c__size_function__RadarOutputTarget__targets,  // size() function pointer
    RadarOutputHeader__rosidl_typesupport_introspection_c__get_const_function__RadarOutputTarget__targets,  // get_const(index) function pointer
    RadarOutputHeader__rosidl_typesupport_introspection_c__get_function__RadarOutputTarget__targets,  // get(index) function pointer
    RadarOutputHeader__rosidl_typesupport_introspection_c__resize_function__RadarOutputTarget__targets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "RadarOutputHeader",  // message name
  6,  // number of fields
  sizeof(cognata_sdk_ros2__msg__RadarOutputHeader),
  RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_member_array,  // message members
  RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_type_support_handle = {
  0,
  &RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, RadarOutputHeader)() {
  RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, RadarOutputTarget)();
  if (!RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_type_support_handle.typesupport_identifier) {
    RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RadarOutputHeader__rosidl_typesupport_introspection_c__RadarOutputHeader_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
