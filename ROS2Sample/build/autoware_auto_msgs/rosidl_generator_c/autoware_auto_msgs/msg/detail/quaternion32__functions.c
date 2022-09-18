// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/Quaternion32.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/quaternion32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
autoware_auto_msgs__msg__Quaternion32__init(autoware_auto_msgs__msg__Quaternion32 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  msg->x = 0.0f;
  // y
  msg->y = 0.0f;
  // z
  msg->z = 0.0f;
  // w
  msg->w = 1.0f;
  return true;
}

void
autoware_auto_msgs__msg__Quaternion32__fini(autoware_auto_msgs__msg__Quaternion32 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

autoware_auto_msgs__msg__Quaternion32 *
autoware_auto_msgs__msg__Quaternion32__create()
{
  autoware_auto_msgs__msg__Quaternion32 * msg = (autoware_auto_msgs__msg__Quaternion32 *)malloc(sizeof(autoware_auto_msgs__msg__Quaternion32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__Quaternion32));
  bool success = autoware_auto_msgs__msg__Quaternion32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__Quaternion32__destroy(autoware_auto_msgs__msg__Quaternion32 * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__Quaternion32__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__Quaternion32__Sequence__init(autoware_auto_msgs__msg__Quaternion32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__Quaternion32 * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__Quaternion32 *)calloc(size, sizeof(autoware_auto_msgs__msg__Quaternion32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__Quaternion32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__Quaternion32__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__Quaternion32__Sequence__fini(autoware_auto_msgs__msg__Quaternion32__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__Quaternion32__fini(&array->data[i]);
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

autoware_auto_msgs__msg__Quaternion32__Sequence *
autoware_auto_msgs__msg__Quaternion32__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__Quaternion32__Sequence * array = (autoware_auto_msgs__msg__Quaternion32__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__Quaternion32__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__Quaternion32__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__Quaternion32__Sequence__destroy(autoware_auto_msgs__msg__Quaternion32__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__Quaternion32__Sequence__fini(array);
  }
  free(array);
}
