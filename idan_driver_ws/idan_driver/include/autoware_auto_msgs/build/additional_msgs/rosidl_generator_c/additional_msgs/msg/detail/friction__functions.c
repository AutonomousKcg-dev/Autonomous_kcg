// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice
#include "additional_msgs/msg/detail/friction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
additional_msgs__msg__Friction__init(additional_msgs__msg__Friction * msg)
{
  if (!msg) {
    return false;
  }
  // value
  msg->value = 0.0f;
  return true;
}

void
additional_msgs__msg__Friction__fini(additional_msgs__msg__Friction * msg)
{
  if (!msg) {
    return;
  }
  // value
}

additional_msgs__msg__Friction *
additional_msgs__msg__Friction__create()
{
  additional_msgs__msg__Friction * msg = (additional_msgs__msg__Friction *)malloc(sizeof(additional_msgs__msg__Friction));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(additional_msgs__msg__Friction));
  bool success = additional_msgs__msg__Friction__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
additional_msgs__msg__Friction__destroy(additional_msgs__msg__Friction * msg)
{
  if (msg) {
    additional_msgs__msg__Friction__fini(msg);
  }
  free(msg);
}


bool
additional_msgs__msg__Friction__Sequence__init(additional_msgs__msg__Friction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  additional_msgs__msg__Friction * data = NULL;
  if (size) {
    data = (additional_msgs__msg__Friction *)calloc(size, sizeof(additional_msgs__msg__Friction));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = additional_msgs__msg__Friction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        additional_msgs__msg__Friction__fini(&data[i - 1]);
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
additional_msgs__msg__Friction__Sequence__fini(additional_msgs__msg__Friction__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      additional_msgs__msg__Friction__fini(&array->data[i]);
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

additional_msgs__msg__Friction__Sequence *
additional_msgs__msg__Friction__Sequence__create(size_t size)
{
  additional_msgs__msg__Friction__Sequence * array = (additional_msgs__msg__Friction__Sequence *)malloc(sizeof(additional_msgs__msg__Friction__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = additional_msgs__msg__Friction__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
additional_msgs__msg__Friction__Sequence__destroy(additional_msgs__msg__Friction__Sequence * array)
{
  if (array) {
    additional_msgs__msg__Friction__Sequence__fini(array);
  }
  free(array);
}
