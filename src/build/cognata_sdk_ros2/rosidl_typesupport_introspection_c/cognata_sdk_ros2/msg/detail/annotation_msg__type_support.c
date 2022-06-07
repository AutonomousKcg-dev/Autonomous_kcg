// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/AnnotationMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/annotation_msg__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/annotation_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/annotation_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `description`
#include "cognata_sdk_ros2/msg/object_description.h"
// Member `description`
#include "cognata_sdk_ros2/msg/detail/object_description__rosidl_typesupport_introspection_c.h"
// Member `local_transform`
#include "geometry_msgs/msg/transform.h"
// Member `local_transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__AnnotationMsg__init(message_memory);
}

void AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__AnnotationMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__AnnotationMsg, header),  // bytes offset in struct
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
    offsetof(cognata_sdk_ros2__msg__AnnotationMsg, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__AnnotationMsg, local_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "AnnotationMsg",  // message name
  3,  // number of fields
  sizeof(cognata_sdk_ros2__msg__AnnotationMsg),
  AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_member_array,  // message members
  AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_type_support_handle = {
  0,
  &AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, AnnotationMsg)() {
  AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, ObjectDescription)();
  AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_type_support_handle.typesupport_identifier) {
    AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AnnotationMsg__rosidl_typesupport_introspection_c__AnnotationMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
