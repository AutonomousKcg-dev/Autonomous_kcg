// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/shape__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/shape__struct.h"


// Include directives for member types
// Member `polygon`
#include "geometry_msgs/msg/polygon.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Shape__rosidl_typesupport_introspection_c__Shape_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__Shape__init(message_memory);
}

void Shape__rosidl_typesupport_introspection_c__Shape_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__Shape__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Shape__rosidl_typesupport_introspection_c__Shape_message_member_array[2] = {
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__Shape, polygon),  // bytes offset in struct
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
    offsetof(autoware_auto_perception_msgs__msg__Shape, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Shape__rosidl_typesupport_introspection_c__Shape_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "Shape",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__Shape),
  Shape__rosidl_typesupport_introspection_c__Shape_message_member_array,  // message members
  Shape__rosidl_typesupport_introspection_c__Shape_init_function,  // function to initialize message memory (memory has to be allocated)
  Shape__rosidl_typesupport_introspection_c__Shape_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle = {
  0,
  &Shape__rosidl_typesupport_introspection_c__Shape_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, Shape)() {
  Shape__rosidl_typesupport_introspection_c__Shape_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle.typesupport_identifier) {
    Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
