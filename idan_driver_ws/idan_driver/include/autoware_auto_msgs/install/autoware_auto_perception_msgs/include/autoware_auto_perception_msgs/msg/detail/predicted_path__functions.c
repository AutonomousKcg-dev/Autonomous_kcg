// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `time_step`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
autoware_auto_perception_msgs__msg__PredictedPath__init(autoware_auto_perception_msgs__msg__PredictedPath * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->path, 0)) {
    autoware_auto_perception_msgs__msg__PredictedPath__fini(msg);
    return false;
  }
  // time_step
  if (!builtin_interfaces__msg__Duration__init(&msg->time_step)) {
    autoware_auto_perception_msgs__msg__PredictedPath__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
autoware_auto_perception_msgs__msg__PredictedPath__fini(autoware_auto_perception_msgs__msg__PredictedPath * msg)
{
  if (!msg) {
    return;
  }
  // path
  geometry_msgs__msg__Pose__Sequence__fini(&msg->path);
  // time_step
  builtin_interfaces__msg__Duration__fini(&msg->time_step);
  // confidence
}

autoware_auto_perception_msgs__msg__PredictedPath *
autoware_auto_perception_msgs__msg__PredictedPath__create()
{
  autoware_auto_perception_msgs__msg__PredictedPath * msg = (autoware_auto_perception_msgs__msg__PredictedPath *)malloc(sizeof(autoware_auto_perception_msgs__msg__PredictedPath));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__PredictedPath));
  bool success = autoware_auto_perception_msgs__msg__PredictedPath__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__PredictedPath__destroy(autoware_auto_perception_msgs__msg__PredictedPath * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__PredictedPath__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__PredictedPath__Sequence__init(autoware_auto_perception_msgs__msg__PredictedPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__PredictedPath * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__PredictedPath *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__PredictedPath));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__PredictedPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__PredictedPath__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__PredictedPath__Sequence__fini(autoware_auto_perception_msgs__msg__PredictedPath__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__PredictedPath__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__PredictedPath__Sequence *
autoware_auto_perception_msgs__msg__PredictedPath__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__PredictedPath__Sequence * array = (autoware_auto_perception_msgs__msg__PredictedPath__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__PredictedPath__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__PredictedPath__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__PredictedPath__Sequence__destroy(autoware_auto_perception_msgs__msg__PredictedPath__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__PredictedPath__Sequence__fini(array);
  }
  free(array);
}
