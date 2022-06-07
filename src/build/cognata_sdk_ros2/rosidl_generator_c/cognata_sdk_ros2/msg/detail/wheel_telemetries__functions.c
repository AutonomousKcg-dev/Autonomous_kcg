// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tire_force`
// Member `tire_slip`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `wheel_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
cognata_sdk_ros2__msg__WheelTelemetries__init(cognata_sdk_ros2__msg__WheelTelemetries * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__WheelTelemetries__fini(msg);
    return false;
  }
  // angular_velocity
  // steer_angle
  // drive_torque
  // brake_torque
  // reaction_torque
  // tire_force
  if (!geometry_msgs__msg__Point__init(&msg->tire_force)) {
    cognata_sdk_ros2__msg__WheelTelemetries__fini(msg);
    return false;
  }
  // tire_slip
  if (!geometry_msgs__msg__Point__init(&msg->tire_slip)) {
    cognata_sdk_ros2__msg__WheelTelemetries__fini(msg);
    return false;
  }
  // can_slip
  // combined_tire_slip
  // suspension_compression
  // down_force
  // contact_angle
  // contact_depth
  // contact_speed
  // is_grounded
  // wheel_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->wheel_velocity)) {
    cognata_sdk_ros2__msg__WheelTelemetries__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__WheelTelemetries__fini(cognata_sdk_ros2__msg__WheelTelemetries * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angular_velocity
  // steer_angle
  // drive_torque
  // brake_torque
  // reaction_torque
  // tire_force
  geometry_msgs__msg__Point__fini(&msg->tire_force);
  // tire_slip
  geometry_msgs__msg__Point__fini(&msg->tire_slip);
  // can_slip
  // combined_tire_slip
  // suspension_compression
  // down_force
  // contact_angle
  // contact_depth
  // contact_speed
  // is_grounded
  // wheel_velocity
  geometry_msgs__msg__Vector3__fini(&msg->wheel_velocity);
}

cognata_sdk_ros2__msg__WheelTelemetries *
cognata_sdk_ros2__msg__WheelTelemetries__create()
{
  cognata_sdk_ros2__msg__WheelTelemetries * msg = (cognata_sdk_ros2__msg__WheelTelemetries *)malloc(sizeof(cognata_sdk_ros2__msg__WheelTelemetries));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__WheelTelemetries));
  bool success = cognata_sdk_ros2__msg__WheelTelemetries__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__WheelTelemetries__destroy(cognata_sdk_ros2__msg__WheelTelemetries * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__WheelTelemetries__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__WheelTelemetries__Sequence__init(cognata_sdk_ros2__msg__WheelTelemetries__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__WheelTelemetries * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__WheelTelemetries *)calloc(size, sizeof(cognata_sdk_ros2__msg__WheelTelemetries));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__WheelTelemetries__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__WheelTelemetries__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__WheelTelemetries__Sequence__fini(cognata_sdk_ros2__msg__WheelTelemetries__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__WheelTelemetries__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__WheelTelemetries__Sequence *
cognata_sdk_ros2__msg__WheelTelemetries__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__WheelTelemetries__Sequence * array = (cognata_sdk_ros2__msg__WheelTelemetries__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__WheelTelemetries__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__WheelTelemetries__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__WheelTelemetries__Sequence__destroy(cognata_sdk_ros2__msg__WheelTelemetries__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__WheelTelemetries__Sequence__fini(array);
  }
  free(array);
}
