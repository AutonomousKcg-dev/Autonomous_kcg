// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice
#include "tracked_object_msgs/msg/detail/tracked_object_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tracked_object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tracked_object_msgs/msg/detail/tracked_object_array__struct.h"
#include "tracked_object_msgs/msg/detail/tracked_object_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "tracked_object_msgs/msg/detail/tracked_object__functions.h"  // tracked_objects

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tracked_object_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tracked_object_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tracked_object_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
size_t get_serialized_size_tracked_object_msgs__msg__TrackedObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tracked_object_msgs__msg__TrackedObject(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tracked_object_msgs, msg, TrackedObject)();


using _TrackedObjectArray__ros_msg_type = tracked_object_msgs__msg__TrackedObjectArray;

static bool _TrackedObjectArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrackedObjectArray__ros_msg_type * ros_message = static_cast<const _TrackedObjectArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: tracked_objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_object_msgs, msg, TrackedObject
      )()->data);
    size_t size = ros_message->tracked_objects.size;
    auto array_ptr = ros_message->tracked_objects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TrackedObjectArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrackedObjectArray__ros_msg_type * ros_message = static_cast<_TrackedObjectArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: tracked_objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_object_msgs, msg, TrackedObject
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tracked_objects.data) {
      tracked_object_msgs__msg__TrackedObject__Sequence__fini(&ros_message->tracked_objects);
    }
    if (!tracked_object_msgs__msg__TrackedObject__Sequence__init(&ros_message->tracked_objects, size)) {
      return "failed to create array for field 'tracked_objects'";
    }
    auto array_ptr = ros_message->tracked_objects.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tracked_object_msgs
size_t get_serialized_size_tracked_object_msgs__msg__TrackedObjectArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackedObjectArray__ros_msg_type * ros_message = static_cast<const _TrackedObjectArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name tracked_objects
  {
    size_t array_size = ros_message->tracked_objects.size;
    auto array_ptr = ros_message->tracked_objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tracked_object_msgs__msg__TrackedObject(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrackedObjectArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tracked_object_msgs__msg__TrackedObjectArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tracked_object_msgs
size_t max_serialized_size_tracked_object_msgs__msg__TrackedObjectArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: tracked_objects
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_object_msgs__msg__TrackedObject(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrackedObjectArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tracked_object_msgs__msg__TrackedObjectArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrackedObjectArray = {
  "tracked_object_msgs::msg",
  "TrackedObjectArray",
  _TrackedObjectArray__cdr_serialize,
  _TrackedObjectArray__cdr_deserialize,
  _TrackedObjectArray__get_serialized_size,
  _TrackedObjectArray__max_serialized_size
};

static rosidl_message_type_support_t _TrackedObjectArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackedObjectArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tracked_object_msgs, msg, TrackedObjectArray)() {
  return &_TrackedObjectArray__type_support;
}

#if defined(__cplusplus)
}
#endif
