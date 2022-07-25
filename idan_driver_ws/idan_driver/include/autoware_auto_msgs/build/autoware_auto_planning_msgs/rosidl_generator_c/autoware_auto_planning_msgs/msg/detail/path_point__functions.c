// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
autoware_auto_planning_msgs__msg__PathPoint__init(autoware_auto_planning_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_auto_planning_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    autoware_auto_planning_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  // is_final
  msg->is_final = false;
  return true;
}

void
autoware_auto_planning_msgs__msg__PathPoint__fini(autoware_auto_planning_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // is_final
}

autoware_auto_planning_msgs__msg__PathPoint *
autoware_auto_planning_msgs__msg__PathPoint__create()
{
  autoware_auto_planning_msgs__msg__PathPoint * msg = (autoware_auto_planning_msgs__msg__PathPoint *)malloc(sizeof(autoware_auto_planning_msgs__msg__PathPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__PathPoint));
  bool success = autoware_auto_planning_msgs__msg__PathPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__PathPoint__destroy(autoware_auto_planning_msgs__msg__PathPoint * msg)
{
  if (msg) {
    autoware_auto_planning_msgs__msg__PathPoint__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_planning_msgs__msg__PathPoint__Sequence__init(autoware_auto_planning_msgs__msg__PathPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_planning_msgs__msg__PathPoint * data = NULL;
  if (size) {
    data = (autoware_auto_planning_msgs__msg__PathPoint *)calloc(size, sizeof(autoware_auto_planning_msgs__msg__PathPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__PathPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__PathPoint__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__PathPoint__Sequence__fini(autoware_auto_planning_msgs__msg__PathPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_planning_msgs__msg__PathPoint__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__PathPoint__Sequence *
autoware_auto_planning_msgs__msg__PathPoint__Sequence__create(size_t size)
{
  autoware_auto_planning_msgs__msg__PathPoint__Sequence * array = (autoware_auto_planning_msgs__msg__PathPoint__Sequence *)malloc(sizeof(autoware_auto_planning_msgs__msg__PathPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__PathPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__PathPoint__Sequence__destroy(autoware_auto_planning_msgs__msg__PathPoint__Sequence * array)
{
  if (array) {
    autoware_auto_planning_msgs__msg__PathPoint__Sequence__fini(array);
  }
  free(array);
}
