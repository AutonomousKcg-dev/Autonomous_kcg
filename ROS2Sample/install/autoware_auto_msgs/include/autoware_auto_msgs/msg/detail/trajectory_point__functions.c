// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `heading`
#include "autoware_auto_msgs/msg/detail/complex32__functions.h"

bool
autoware_auto_msgs__msg__TrajectoryPoint__init(autoware_auto_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    autoware_auto_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // x
  msg->x = 0.0f;
  // y
  msg->y = 0.0f;
  // heading
  if (!autoware_auto_msgs__msg__Complex32__init(&msg->heading)) {
    autoware_auto_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // longitudinal_velocity_mps
  msg->longitudinal_velocity_mps = 0.0f;
  // lateral_velocity_mps
  msg->lateral_velocity_mps = 0.0f;
  // acceleration_mps2
  msg->acceleration_mps2 = 0.0f;
  // heading_rate_rps
  msg->heading_rate_rps = 0.0f;
  // front_wheel_angle_rad
  msg->front_wheel_angle_rad = 0.0f;
  // rear_wheel_angle_rad
  msg->rear_wheel_angle_rad = 0.0f;
  return true;
}

void
autoware_auto_msgs__msg__TrajectoryPoint__fini(autoware_auto_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
  // x
  // y
  // heading
  autoware_auto_msgs__msg__Complex32__fini(&msg->heading);
  // longitudinal_velocity_mps
  // lateral_velocity_mps
  // acceleration_mps2
  // heading_rate_rps
  // front_wheel_angle_rad
  // rear_wheel_angle_rad
}

autoware_auto_msgs__msg__TrajectoryPoint *
autoware_auto_msgs__msg__TrajectoryPoint__create()
{
  autoware_auto_msgs__msg__TrajectoryPoint * msg = (autoware_auto_msgs__msg__TrajectoryPoint *)malloc(sizeof(autoware_auto_msgs__msg__TrajectoryPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__TrajectoryPoint));
  bool success = autoware_auto_msgs__msg__TrajectoryPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__TrajectoryPoint__destroy(autoware_auto_msgs__msg__TrajectoryPoint * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__TrajectoryPoint__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__TrajectoryPoint__Sequence__init(autoware_auto_msgs__msg__TrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__TrajectoryPoint * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__TrajectoryPoint *)calloc(size, sizeof(autoware_auto_msgs__msg__TrajectoryPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__TrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__TrajectoryPoint__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__TrajectoryPoint__Sequence__fini(autoware_auto_msgs__msg__TrajectoryPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__TrajectoryPoint__fini(&array->data[i]);
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

autoware_auto_msgs__msg__TrajectoryPoint__Sequence *
autoware_auto_msgs__msg__TrajectoryPoint__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__TrajectoryPoint__Sequence * array = (autoware_auto_msgs__msg__TrajectoryPoint__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__TrajectoryPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__TrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__TrajectoryPoint__Sequence__destroy(autoware_auto_msgs__msg__TrajectoryPoint__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__TrajectoryPoint__Sequence__fini(array);
  }
  free(array);
}
