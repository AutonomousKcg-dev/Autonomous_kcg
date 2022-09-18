// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "autoware_auto_msgs/msg/detail/trajectory_point__functions.h"

bool
autoware_auto_msgs__msg__Trajectory__init(autoware_auto_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // points
  if (!autoware_auto_msgs__msg__TrajectoryPoint__Sequence__init(&msg->points, 0)) {
    autoware_auto_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__msg__Trajectory__fini(autoware_auto_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  autoware_auto_msgs__msg__TrajectoryPoint__Sequence__fini(&msg->points);
}

autoware_auto_msgs__msg__Trajectory *
autoware_auto_msgs__msg__Trajectory__create()
{
  autoware_auto_msgs__msg__Trajectory * msg = (autoware_auto_msgs__msg__Trajectory *)malloc(sizeof(autoware_auto_msgs__msg__Trajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__Trajectory));
  bool success = autoware_auto_msgs__msg__Trajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__Trajectory__destroy(autoware_auto_msgs__msg__Trajectory * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__Trajectory__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__Trajectory__Sequence__init(autoware_auto_msgs__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__Trajectory * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__Trajectory *)calloc(size, sizeof(autoware_auto_msgs__msg__Trajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__Trajectory__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__Trajectory__Sequence__fini(autoware_auto_msgs__msg__Trajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__Trajectory__fini(&array->data[i]);
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

autoware_auto_msgs__msg__Trajectory__Sequence *
autoware_auto_msgs__msg__Trajectory__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__Trajectory__Sequence * array = (autoware_auto_msgs__msg__Trajectory__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__Trajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__Trajectory__Sequence__destroy(autoware_auto_msgs__msg__Trajectory__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__Trajectory__Sequence__fini(array);
  }
  free(array);
}
