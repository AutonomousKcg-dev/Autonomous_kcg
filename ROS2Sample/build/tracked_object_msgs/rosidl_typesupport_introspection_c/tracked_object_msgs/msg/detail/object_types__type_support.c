// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracked_object_msgs/msg/detail/object_types__rosidl_typesupport_introspection_c.h"
#include "tracked_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracked_object_msgs/msg/detail/object_types__functions.h"
#include "tracked_object_msgs/msg/detail/object_types__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracked_object_msgs__msg__ObjectTypes__init(message_memory);
}

void ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_fini_function(void * message_memory)
{
  tracked_object_msgs__msg__ObjectTypes__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__ObjectTypes, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_members = {
  "tracked_object_msgs__msg",  // message namespace
  "ObjectTypes",  // message name
  1,  // number of fields
  sizeof(tracked_object_msgs__msg__ObjectTypes),
  ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_member_array,  // message members
  ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_type_support_handle = {
  0,
  &ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracked_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_object_msgs, msg, ObjectTypes)() {
  if (!ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_type_support_handle.typesupport_identifier) {
    ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectTypes__rosidl_typesupport_introspection_c__ObjectTypes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
