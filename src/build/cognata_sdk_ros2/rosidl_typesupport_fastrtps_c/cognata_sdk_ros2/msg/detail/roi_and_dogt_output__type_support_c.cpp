// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__struct.h"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__functions.h"
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

#include "cognata_sdk_ros2/msg/detail/annotation_msg__functions.h"  // annotation_list
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"  // other_list
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__functions.h"  // pedestrian_list
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__functions.h"  // traffic_light_list
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"  // vehicle_list
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_cognata_sdk_ros2__msg__AnnotationMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__AnnotationMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, AnnotationMsg)();
size_t get_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription)();
size_t get_serialized_size_cognata_sdk_ros2__msg__PedestrianMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__PedestrianMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, PedestrianMsg)();
size_t get_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, TrafficLightMsg)();
size_t get_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, VehicleMsg)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ROIAndDOGTOutput__ros_msg_type = cognata_sdk_ros2__msg__ROIAndDOGTOutput;

static bool _ROIAndDOGTOutput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ROIAndDOGTOutput__ros_msg_type * ros_message = static_cast<const _ROIAndDOGTOutput__ros_msg_type *>(untyped_ros_message);
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

  // Field name: other_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription
      )()->data);
    size_t size = ros_message->other_list.size;
    auto array_ptr = ros_message->other_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: annotation_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, AnnotationMsg
      )()->data);
    size_t size = ros_message->annotation_list.size;
    auto array_ptr = ros_message->annotation_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: pedestrian_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, PedestrianMsg
      )()->data);
    size_t size = ros_message->pedestrian_list.size;
    auto array_ptr = ros_message->pedestrian_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: vehicle_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, VehicleMsg
      )()->data);
    size_t size = ros_message->vehicle_list.size;
    auto array_ptr = ros_message->vehicle_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: traffic_light_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, TrafficLightMsg
      )()->data);
    size_t size = ros_message->traffic_light_list.size;
    auto array_ptr = ros_message->traffic_light_list.data;
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

static bool _ROIAndDOGTOutput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ROIAndDOGTOutput__ros_msg_type * ros_message = static_cast<_ROIAndDOGTOutput__ros_msg_type *>(untyped_ros_message);
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

  // Field name: other_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->other_list.data) {
      cognata_sdk_ros2__msg__ObjectDescription__Sequence__fini(&ros_message->other_list);
    }
    if (!cognata_sdk_ros2__msg__ObjectDescription__Sequence__init(&ros_message->other_list, size)) {
      return "failed to create array for field 'other_list'";
    }
    auto array_ptr = ros_message->other_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: annotation_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, AnnotationMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->annotation_list.data) {
      cognata_sdk_ros2__msg__AnnotationMsg__Sequence__fini(&ros_message->annotation_list);
    }
    if (!cognata_sdk_ros2__msg__AnnotationMsg__Sequence__init(&ros_message->annotation_list, size)) {
      return "failed to create array for field 'annotation_list'";
    }
    auto array_ptr = ros_message->annotation_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: pedestrian_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, PedestrianMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pedestrian_list.data) {
      cognata_sdk_ros2__msg__PedestrianMsg__Sequence__fini(&ros_message->pedestrian_list);
    }
    if (!cognata_sdk_ros2__msg__PedestrianMsg__Sequence__init(&ros_message->pedestrian_list, size)) {
      return "failed to create array for field 'pedestrian_list'";
    }
    auto array_ptr = ros_message->pedestrian_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: vehicle_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, VehicleMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vehicle_list.data) {
      cognata_sdk_ros2__msg__VehicleMsg__Sequence__fini(&ros_message->vehicle_list);
    }
    if (!cognata_sdk_ros2__msg__VehicleMsg__Sequence__init(&ros_message->vehicle_list, size)) {
      return "failed to create array for field 'vehicle_list'";
    }
    auto array_ptr = ros_message->vehicle_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: traffic_light_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, TrafficLightMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->traffic_light_list.data) {
      cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__fini(&ros_message->traffic_light_list);
    }
    if (!cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__init(&ros_message->traffic_light_list, size)) {
      return "failed to create array for field 'traffic_light_list'";
    }
    auto array_ptr = ros_message->traffic_light_list.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t get_serialized_size_cognata_sdk_ros2__msg__ROIAndDOGTOutput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ROIAndDOGTOutput__ros_msg_type * ros_message = static_cast<const _ROIAndDOGTOutput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name other_list
  {
    size_t array_size = ros_message->other_list.size;
    auto array_ptr = ros_message->other_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name annotation_list
  {
    size_t array_size = ros_message->annotation_list.size;
    auto array_ptr = ros_message->annotation_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__AnnotationMsg(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name pedestrian_list
  {
    size_t array_size = ros_message->pedestrian_list.size;
    auto array_ptr = ros_message->pedestrian_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__PedestrianMsg(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name vehicle_list
  {
    size_t array_size = ros_message->vehicle_list.size;
    auto array_ptr = ros_message->vehicle_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name traffic_light_list
  {
    size_t array_size = ros_message->traffic_light_list.size;
    auto array_ptr = ros_message->traffic_light_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ROIAndDOGTOutput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cognata_sdk_ros2__msg__ROIAndDOGTOutput(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t max_serialized_size_cognata_sdk_ros2__msg__ROIAndDOGTOutput(
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
  // member: other_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
        full_bounded, current_alignment);
    }
  }
  // member: annotation_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__AnnotationMsg(
        full_bounded, current_alignment);
    }
  }
  // member: pedestrian_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__PedestrianMsg(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
        full_bounded, current_alignment);
    }
  }
  // member: traffic_light_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ROIAndDOGTOutput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cognata_sdk_ros2__msg__ROIAndDOGTOutput(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ROIAndDOGTOutput = {
  "cognata_sdk_ros2::msg",
  "ROIAndDOGTOutput",
  _ROIAndDOGTOutput__cdr_serialize,
  _ROIAndDOGTOutput__cdr_deserialize,
  _ROIAndDOGTOutput__get_serialized_size,
  _ROIAndDOGTOutput__max_serialized_size
};

static rosidl_message_type_support_t _ROIAndDOGTOutput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ROIAndDOGTOutput,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ROIAndDOGTOutput)() {
  return &_ROIAndDOGTOutput__type_support;
}

#if defined(__cplusplus)
}
#endif
