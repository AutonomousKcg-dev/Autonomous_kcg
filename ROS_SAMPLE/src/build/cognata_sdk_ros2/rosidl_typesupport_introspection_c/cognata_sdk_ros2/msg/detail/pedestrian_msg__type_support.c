// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `description`
#include "cognata_sdk_ros2/msg/object_description.h"
// Member `description`
#include "cognata_sdk_ros2/msg/detail/object_description__rosidl_typesupport_introspection_c.h"
// Member `pedestrian_velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `pedestrian_velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__PedestrianMsg__init(message_memory);
}

void PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__PedestrianMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__PedestrianMsg, header),  // bytes offset in struct
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
    offsetof(cognata_sdk_ros2__msg__PedestrianMsg, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pedestrian_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__PedestrianMsg, pedestrian_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "PedestrianMsg",  // message name
  3,  // number of fields
  sizeof(cognata_sdk_ros2__msg__PedestrianMsg),
  PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_member_array,  // message members
  PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_type_support_handle = {
  0,
  &PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, PedestrianMsg)() {
  PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, ObjectDescription)();
  PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_type_support_handle.typesupport_identifier) {
    PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PedestrianMsg__rosidl_typesupport_introspection_c__PedestrianMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
