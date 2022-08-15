// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__struct.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"
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

#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"  // description
#include "cognata_sdk_ros2/msg/detail/wheel_msg__functions.h"  // wheels
#include "rosidl_runtime_c/string.h"  // lane_id, lanes_from_left, navigation_segment, signal_light, signal_state, vehicle_role, vehicle_type
#include "rosidl_runtime_c/string_functions.h"  // lane_id, lanes_from_left, navigation_segment, signal_light, signal_state, vehicle_role, vehicle_type
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription)();
size_t get_serialized_size_cognata_sdk_ros2__msg__WheelMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__WheelMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelMsg)();
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


using _VehicleMsg__ros_msg_type = cognata_sdk_ros2__msg__VehicleMsg;

static bool _VehicleMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleMsg__ros_msg_type * ros_message = static_cast<const _VehicleMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->description, cdr))
    {
      return false;
    }
  }

  // Field name: vehicle_type
  {
    const rosidl_runtime_c__String * str = &ros_message->vehicle_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: vehicle_role
  {
    const rosidl_runtime_c__String * str = &ros_message->vehicle_role;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: navigation_segment
  {
    const rosidl_runtime_c__String * str = &ros_message->navigation_segment;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lane_id
  {
    const rosidl_runtime_c__String * str = &ros_message->lane_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lanes_from_left
  {
    const rosidl_runtime_c__String * str = &ros_message->lanes_from_left;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: head_light_state
  {
    cdr << (ros_message->head_light_state ? true : false);
  }

  // Field name: brake_light_state
  {
    cdr << (ros_message->brake_light_state ? true : false);
  }

  // Field name: reverse_light_state
  {
    cdr << (ros_message->reverse_light_state ? true : false);
  }

  // Field name: signal_state
  {
    const rosidl_runtime_c__String * str = &ros_message->signal_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: signal_light
  {
    const rosidl_runtime_c__String * str = &ros_message->signal_light;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: wheels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelMsg
      )()->data);
    size_t size = ros_message->wheels.size;
    auto array_ptr = ros_message->wheels.data;
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

static bool _VehicleMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleMsg__ros_msg_type * ros_message = static_cast<_VehicleMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->description))
    {
      return false;
    }
  }

  // Field name: vehicle_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vehicle_type.data) {
      rosidl_runtime_c__String__init(&ros_message->vehicle_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vehicle_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vehicle_type'\n");
      return false;
    }
  }

  // Field name: vehicle_role
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vehicle_role.data) {
      rosidl_runtime_c__String__init(&ros_message->vehicle_role);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vehicle_role,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vehicle_role'\n");
      return false;
    }
  }

  // Field name: navigation_segment
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->navigation_segment.data) {
      rosidl_runtime_c__String__init(&ros_message->navigation_segment);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->navigation_segment,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'navigation_segment'\n");
      return false;
    }
  }

  // Field name: lane_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lane_id.data) {
      rosidl_runtime_c__String__init(&ros_message->lane_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lane_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lane_id'\n");
      return false;
    }
  }

  // Field name: lanes_from_left
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lanes_from_left.data) {
      rosidl_runtime_c__String__init(&ros_message->lanes_from_left);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lanes_from_left,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lanes_from_left'\n");
      return false;
    }
  }

  // Field name: head_light_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->head_light_state = tmp ? true : false;
  }

  // Field name: brake_light_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_light_state = tmp ? true : false;
  }

  // Field name: reverse_light_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reverse_light_state = tmp ? true : false;
  }

  // Field name: signal_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->signal_state.data) {
      rosidl_runtime_c__String__init(&ros_message->signal_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->signal_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'signal_state'\n");
      return false;
    }
  }

  // Field name: signal_light
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->signal_light.data) {
      rosidl_runtime_c__String__init(&ros_message->signal_light);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->signal_light,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'signal_light'\n");
      return false;
    }
  }

  // Field name: wheels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheels.data) {
      cognata_sdk_ros2__msg__WheelMsg__Sequence__fini(&ros_message->wheels);
    }
    if (!cognata_sdk_ros2__msg__WheelMsg__Sequence__init(&ros_message->wheels, size)) {
      return "failed to create array for field 'wheels'";
    }
    auto array_ptr = ros_message->wheels.data;
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
size_t get_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleMsg__ros_msg_type * ros_message = static_cast<const _VehicleMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name description

  current_alignment += get_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
    &(ros_message->description), current_alignment);
  // field.name vehicle_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vehicle_type.size + 1);
  // field.name vehicle_role
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vehicle_role.size + 1);
  // field.name navigation_segment
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->navigation_segment.size + 1);
  // field.name lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lane_id.size + 1);
  // field.name lanes_from_left
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lanes_from_left.size + 1);
  // field.name head_light_state
  {
    size_t item_size = sizeof(ros_message->head_light_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_light_state
  {
    size_t item_size = sizeof(ros_message->brake_light_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverse_light_state
  {
    size_t item_size = sizeof(ros_message->reverse_light_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->signal_state.size + 1);
  // field.name signal_light
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->signal_light.size + 1);
  // field.name wheels
  {
    size_t array_size = ros_message->wheels.size;
    auto array_ptr = ros_message->wheels.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__WheelMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t max_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
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
  // member: description
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: vehicle_role
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: navigation_segment
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lane_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lanes_from_left
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: head_light_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_light_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reverse_light_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_state
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: signal_light
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wheels
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__WheelMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cognata_sdk_ros2__msg__VehicleMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleMsg = {
  "cognata_sdk_ros2::msg",
  "VehicleMsg",
  _VehicleMsg__cdr_serialize,
  _VehicleMsg__cdr_deserialize,
  _VehicleMsg__get_serialized_size,
  _VehicleMsg__max_serialized_size
};

static rosidl_message_type_support_t _VehicleMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, VehicleMsg)() {
  return &_VehicleMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
