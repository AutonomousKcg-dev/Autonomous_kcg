// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracked_object_msgs/msg/detail/tracked_object_array__rosidl_typesupport_introspection_c.h"
#include "tracked_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracked_object_msgs/msg/detail/tracked_object_array__functions.h"
#include "tracked_object_msgs/msg/detail/tracked_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tracked_objects`
#include "tracked_object_msgs/msg/tracked_object.h"
// Member `tracked_objects`
#include "tracked_object_msgs/msg/detail/tracked_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracked_object_msgs__msg__TrackedObjectArray__init(message_memory);
}

void TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_fini_function(void * message_memory)
{
  tracked_object_msgs__msg__TrackedObjectArray__fini(message_memory);
}

size_t TrackedObjectArray__rosidl_typesupport_introspection_c__size_function__TrackedObject__tracked_objects(
  const void * untyped_member)
{
  const tracked_object_msgs__msg__TrackedObject__Sequence * member =
    (const tracked_object_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * TrackedObjectArray__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__tracked_objects(
  const void * untyped_member, size_t index)
{
  const tracked_object_msgs__msg__TrackedObject__Sequence * member =
    (const tracked_object_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrackedObjectArray__rosidl_typesupport_introspection_c__get_function__TrackedObject__tracked_objects(
  void * untyped_member, size_t index)
{
  tracked_object_msgs__msg__TrackedObject__Sequence * member =
    (tracked_object_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrackedObjectArray__rosidl_typesupport_introspection_c__resize_function__TrackedObject__tracked_objects(
  void * untyped_member, size_t size)
{
  tracked_object_msgs__msg__TrackedObject__Sequence * member =
    (tracked_object_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  tracked_object_msgs__msg__TrackedObject__Sequence__fini(member);
  return tracked_object_msgs__msg__TrackedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs__msg__TrackedObjectArray, tracked_objects),  // bytes offset in struct
    NULL,  // default value
    TrackedObjectArray__rosidl_typesupport_introspection_c__size_function__TrackedObject__tracked_objects,  // size() function pointer
    TrackedObjectArray__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__tracked_objects,  // get_const(index) function pointer
    TrackedObjectArray__rosidl_typesupport_introspection_c__get_function__TrackedObject__tracked_objects,  // get(index) function pointer
    TrackedObjectArray__rosidl_typesupport_introspection_c__resize_function__TrackedObject__tracked_objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_members = {
  "tracked_object_msgs__msg",  // message namespace
  "TrackedObjectArray",  // message name
  2,  // number of fields
  sizeof(tracked_object_msgs__msg__TrackedObjectArray),
  TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array,  // message members
  TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle = {
  0,
  &TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracked_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_object_msgs, msg, TrackedObjectArray)() {
  TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracked_object_msgs, msg, TrackedObject)();
  if (!TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle.typesupport_identifier) {
    TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
