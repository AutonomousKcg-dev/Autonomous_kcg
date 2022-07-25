// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `turn_light`
#include "rosidl_runtime_c/string_functions.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `wheels`
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__functions.h"

bool
cognata_sdk_ros2__msg__CarTelemetriesMsg__init(cognata_sdk_ros2__msg__CarTelemetriesMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(msg);
    return false;
  }
  // turn_light
  if (!rosidl_runtime_c__String__init(&msg->turn_light)) {
    cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(msg);
    return false;
  }
  // acceleration
  // brake
  // gas
  // steering
  // center_of_mass
  if (!geometry_msgs__msg__Twist__init(&msg->center_of_mass)) {
    cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(msg);
    return false;
  }
  // engine_rpm
  // engine_load
  // engine_torque
  // engine_power
  // current_gear
  // wheels
  if (!cognata_sdk_ros2__msg__WheelTelemetries__Sequence__init(&msg->wheels, 0)) {
    cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(cognata_sdk_ros2__msg__CarTelemetriesMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // turn_light
  rosidl_runtime_c__String__fini(&msg->turn_light);
  // acceleration
  // brake
  // gas
  // steering
  // center_of_mass
  geometry_msgs__msg__Twist__fini(&msg->center_of_mass);
  // engine_rpm
  // engine_load
  // engine_torque
  // engine_power
  // current_gear
  // wheels
  cognata_sdk_ros2__msg__WheelTelemetries__Sequence__fini(&msg->wheels);
}

cognata_sdk_ros2__msg__CarTelemetriesMsg *
cognata_sdk_ros2__msg__CarTelemetriesMsg__create()
{
  cognata_sdk_ros2__msg__CarTelemetriesMsg * msg = (cognata_sdk_ros2__msg__CarTelemetriesMsg *)malloc(sizeof(cognata_sdk_ros2__msg__CarTelemetriesMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__CarTelemetriesMsg));
  bool success = cognata_sdk_ros2__msg__CarTelemetriesMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__CarTelemetriesMsg__destroy(cognata_sdk_ros2__msg__CarTelemetriesMsg * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence__init(cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__CarTelemetriesMsg * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__CarTelemetriesMsg *)calloc(size, sizeof(cognata_sdk_ros2__msg__CarTelemetriesMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__CarTelemetriesMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence__fini(cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__CarTelemetriesMsg__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence *
cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence * array = (cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence__destroy(cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__CarTelemetriesMsg__Sequence__fini(array);
  }
  free(array);
}
