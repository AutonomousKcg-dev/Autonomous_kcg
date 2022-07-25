// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/detected_objects__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/detected_objects__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/detected_objects__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "autoware_auto_perception_msgs/msg/detected_object.h"
// Member `objects`
#include "autoware_auto_perception_msgs/msg/detail/detected_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__DetectedObjects__init(message_memory);
}

void DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__DetectedObjects__fini(message_memory);
}

size_t DetectedObjects__rosidl_typesupport_introspection_c__size_function__DetectedObject__objects(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__DetectedObject__Sequence * member =
    (const autoware_auto_perception_msgs__msg__DetectedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectedObjects__rosidl_typesupport_introspection_c__get_const_function__DetectedObject__objects(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__DetectedObject__Sequence * member =
    (const autoware_auto_perception_msgs__msg__DetectedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectedObjects__rosidl_typesupport_introspection_c__get_function__DetectedObject__objects(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__DetectedObject__Sequence * member =
    (autoware_auto_perception_msgs__msg__DetectedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectedObjects__rosidl_typesupport_introspection_c__resize_function__DetectedObject__objects(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__DetectedObject__Sequence * member =
    (autoware_auto_perception_msgs__msg__DetectedObject__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__DetectedObject__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__DetectedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__DetectedObjects, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__DetectedObjects, objects),  // bytes offset in struct
    NULL,  // default value
    DetectedObjects__rosidl_typesupport_introspection_c__size_function__DetectedObject__objects,  // size() function pointer
    DetectedObjects__rosidl_typesupport_introspection_c__get_const_function__DetectedObject__objects,  // get_const(index) function pointer
    DetectedObjects__rosidl_typesupport_introspection_c__get_function__DetectedObject__objects,  // get(index) function pointer
    DetectedObjects__rosidl_typesupport_introspection_c__resize_function__DetectedObject__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "DetectedObjects",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__DetectedObjects),
  DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_member_array,  // message members
  DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_type_support_handle = {
  0,
  &DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, DetectedObjects)() {
  DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, DetectedObject)();
  if (!DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_type_support_handle.typesupport_identifier) {
    DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedObjects__rosidl_typesupport_introspection_c__DetectedObjects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
