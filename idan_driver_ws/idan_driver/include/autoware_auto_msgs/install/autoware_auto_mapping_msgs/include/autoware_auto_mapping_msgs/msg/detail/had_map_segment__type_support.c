// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__functions.h"
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__struct.h"


// Include directives for member types
// Member `primitives`
#include "autoware_auto_mapping_msgs/msg/map_primitive.h"
// Member `primitives`
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_mapping_msgs__msg__HADMapSegment__init(message_memory);
}

void HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_fini_function(void * message_memory)
{
  autoware_auto_mapping_msgs__msg__HADMapSegment__fini(message_memory);
}

size_t HADMapSegment__rosidl_typesupport_introspection_c__size_function__MapPrimitive__primitives(
  const void * untyped_member)
{
  const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * member =
    (const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * HADMapSegment__rosidl_typesupport_introspection_c__get_const_function__MapPrimitive__primitives(
  const void * untyped_member, size_t index)
{
  const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * member =
    (const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * HADMapSegment__rosidl_typesupport_introspection_c__get_function__MapPrimitive__primitives(
  void * untyped_member, size_t index)
{
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * member =
    (autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

bool HADMapSegment__rosidl_typesupport_introspection_c__resize_function__MapPrimitive__primitives(
  void * untyped_member, size_t size)
{
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * member =
    (autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__fini(member);
  return autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_member_array[2] = {
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapSegment, primitives),  // bytes offset in struct
    NULL,  // default value
    HADMapSegment__rosidl_typesupport_introspection_c__size_function__MapPrimitive__primitives,  // size() function pointer
    HADMapSegment__rosidl_typesupport_introspection_c__get_const_function__MapPrimitive__primitives,  // get_const(index) function pointer
    HADMapSegment__rosidl_typesupport_introspection_c__get_function__MapPrimitive__primitives,  // get(index) function pointer
    HADMapSegment__rosidl_typesupport_introspection_c__resize_function__MapPrimitive__primitives  // resize(index) function pointer
  },
  {
    "preferred_primitive_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__msg__HADMapSegment, preferred_primitive_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_members = {
  "autoware_auto_mapping_msgs__msg",  // message namespace
  "HADMapSegment",  // message name
  2,  // number of fields
  sizeof(autoware_auto_mapping_msgs__msg__HADMapSegment),
  HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_member_array,  // message members
  HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle = {
  0,
  &HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, msg, HADMapSegment)() {
  HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, msg, MapPrimitive)();
  if (!HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle.typesupport_identifier) {
    HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
