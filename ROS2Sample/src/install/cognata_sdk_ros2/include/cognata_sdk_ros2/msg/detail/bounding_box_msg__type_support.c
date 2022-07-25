// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__struct.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__BoundingBoxMsg__init(message_memory);
}

void BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__BoundingBoxMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_member_array[4] = {
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__BoundingBoxMsg, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__BoundingBoxMsg, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__BoundingBoxMsg, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__BoundingBoxMsg, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "BoundingBoxMsg",  // message name
  4,  // number of fields
  sizeof(cognata_sdk_ros2__msg__BoundingBoxMsg),
  BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_member_array,  // message members
  BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_type_support_handle = {
  0,
  &BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, BoundingBoxMsg)() {
  BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_type_support_handle.typesupport_identifier) {
    BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundingBoxMsg__rosidl_typesupport_introspection_c__BoundingBoxMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
