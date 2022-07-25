// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/bounding_box_array__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/bounding_box_array__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/bounding_box_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `boxes`
#include "autoware_auto_perception_msgs/msg/bounding_box.h"
// Member `boxes`
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__BoundingBoxArray__init(message_memory);
}

void BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__BoundingBoxArray__fini(message_memory);
}

size_t BoundingBoxArray__rosidl_typesupport_introspection_c__size_function__BoundingBox__boxes(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__BoundingBox__Sequence * member =
    (const autoware_auto_perception_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return member->size;
}

const void * BoundingBoxArray__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__boxes(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__BoundingBox__Sequence * member =
    (const autoware_auto_perception_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BoundingBoxArray__rosidl_typesupport_introspection_c__get_function__BoundingBox__boxes(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__BoundingBox__Sequence * member =
    (autoware_auto_perception_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BoundingBoxArray__rosidl_typesupport_introspection_c__resize_function__BoundingBox__boxes(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__BoundingBox__Sequence * member =
    (autoware_auto_perception_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__BoundingBox__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__BoundingBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBoxArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    256,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBoxArray, boxes),  // bytes offset in struct
    NULL,  // default value
    BoundingBoxArray__rosidl_typesupport_introspection_c__size_function__BoundingBox__boxes,  // size() function pointer
    BoundingBoxArray__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__boxes,  // get_const(index) function pointer
    BoundingBoxArray__rosidl_typesupport_introspection_c__get_function__BoundingBox__boxes,  // get(index) function pointer
    BoundingBoxArray__rosidl_typesupport_introspection_c__resize_function__BoundingBox__boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "BoundingBoxArray",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__BoundingBoxArray),
  BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_member_array,  // message members
  BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_type_support_handle = {
  0,
  &BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, BoundingBoxArray)() {
  BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, BoundingBox)();
  if (!BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_type_support_handle.typesupport_identifier) {
    BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundingBoxArray__rosidl_typesupport_introspection_c__BoundingBoxArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
