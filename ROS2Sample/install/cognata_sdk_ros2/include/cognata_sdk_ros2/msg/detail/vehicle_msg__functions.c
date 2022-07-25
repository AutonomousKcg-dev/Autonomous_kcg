// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `description`
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"
// Member `vehicle_type`
// Member `vehicle_role`
// Member `navigation_segment`
// Member `lane_id`
// Member `lanes_from_left`
// Member `signal_state`
// Member `signal_light`
#include "rosidl_runtime_c/string_functions.h"
// Member `wheels`
#include "cognata_sdk_ros2/msg/detail/wheel_msg__functions.h"

bool
cognata_sdk_ros2__msg__VehicleMsg__init(cognata_sdk_ros2__msg__VehicleMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // description
  if (!cognata_sdk_ros2__msg__ObjectDescription__init(&msg->description)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // vehicle_type
  if (!rosidl_runtime_c__String__init(&msg->vehicle_type)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // vehicle_role
  if (!rosidl_runtime_c__String__init(&msg->vehicle_role)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // navigation_segment
  if (!rosidl_runtime_c__String__init(&msg->navigation_segment)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__init(&msg->lane_id)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // lanes_from_left
  if (!rosidl_runtime_c__String__init(&msg->lanes_from_left)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // head_light_state
  // brake_light_state
  // reverse_light_state
  // signal_state
  if (!rosidl_runtime_c__String__init(&msg->signal_state)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // signal_light
  if (!rosidl_runtime_c__String__init(&msg->signal_light)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  // wheels
  if (!cognata_sdk_ros2__msg__WheelMsg__Sequence__init(&msg->wheels, 0)) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__VehicleMsg__fini(cognata_sdk_ros2__msg__VehicleMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // description
  cognata_sdk_ros2__msg__ObjectDescription__fini(&msg->description);
  // vehicle_type
  rosidl_runtime_c__String__fini(&msg->vehicle_type);
  // vehicle_role
  rosidl_runtime_c__String__fini(&msg->vehicle_role);
  // navigation_segment
  rosidl_runtime_c__String__fini(&msg->navigation_segment);
  // lane_id
  rosidl_runtime_c__String__fini(&msg->lane_id);
  // lanes_from_left
  rosidl_runtime_c__String__fini(&msg->lanes_from_left);
  // head_light_state
  // brake_light_state
  // reverse_light_state
  // signal_state
  rosidl_runtime_c__String__fini(&msg->signal_state);
  // signal_light
  rosidl_runtime_c__String__fini(&msg->signal_light);
  // wheels
  cognata_sdk_ros2__msg__WheelMsg__Sequence__fini(&msg->wheels);
}

cognata_sdk_ros2__msg__VehicleMsg *
cognata_sdk_ros2__msg__VehicleMsg__create()
{
  cognata_sdk_ros2__msg__VehicleMsg * msg = (cognata_sdk_ros2__msg__VehicleMsg *)malloc(sizeof(cognata_sdk_ros2__msg__VehicleMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__VehicleMsg));
  bool success = cognata_sdk_ros2__msg__VehicleMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__VehicleMsg__destroy(cognata_sdk_ros2__msg__VehicleMsg * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__VehicleMsg__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__VehicleMsg__Sequence__init(cognata_sdk_ros2__msg__VehicleMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__VehicleMsg * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__VehicleMsg *)calloc(size, sizeof(cognata_sdk_ros2__msg__VehicleMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__VehicleMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__VehicleMsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cognata_sdk_ros2__msg__VehicleMsg__Sequence__fini(cognata_sdk_ros2__msg__VehicleMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__VehicleMsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cognata_sdk_ros2__msg__VehicleMsg__Sequence *
cognata_sdk_ros2__msg__VehicleMsg__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__VehicleMsg__Sequence * array = (cognata_sdk_ros2__msg__VehicleMsg__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__VehicleMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__VehicleMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__VehicleMsg__Sequence__destroy(cognata_sdk_ros2__msg__VehicleMsg__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__VehicleMsg__Sequence__fini(array);
  }
  free(array);
}
