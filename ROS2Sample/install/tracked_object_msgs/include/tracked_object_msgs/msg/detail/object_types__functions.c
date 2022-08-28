// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice
#include "tracked_object_msgs/msg/detail/object_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tracked_object_msgs__msg__ObjectTypes__init(tracked_object_msgs__msg__ObjectTypes * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tracked_object_msgs__msg__ObjectTypes__fini(tracked_object_msgs__msg__ObjectTypes * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

tracked_object_msgs__msg__ObjectTypes *
tracked_object_msgs__msg__ObjectTypes__create()
{
  tracked_object_msgs__msg__ObjectTypes * msg = (tracked_object_msgs__msg__ObjectTypes *)malloc(sizeof(tracked_object_msgs__msg__ObjectTypes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracked_object_msgs__msg__ObjectTypes));
  bool success = tracked_object_msgs__msg__ObjectTypes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tracked_object_msgs__msg__ObjectTypes__destroy(tracked_object_msgs__msg__ObjectTypes * msg)
{
  if (msg) {
    tracked_object_msgs__msg__ObjectTypes__fini(msg);
  }
  free(msg);
}


bool
tracked_object_msgs__msg__ObjectTypes__Sequence__init(tracked_object_msgs__msg__ObjectTypes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tracked_object_msgs__msg__ObjectTypes * data = NULL;
  if (size) {
    data = (tracked_object_msgs__msg__ObjectTypes *)calloc(size, sizeof(tracked_object_msgs__msg__ObjectTypes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracked_object_msgs__msg__ObjectTypes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracked_object_msgs__msg__ObjectTypes__fini(&data[i - 1]);
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
tracked_object_msgs__msg__ObjectTypes__Sequence__fini(tracked_object_msgs__msg__ObjectTypes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tracked_object_msgs__msg__ObjectTypes__fini(&array->data[i]);
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

tracked_object_msgs__msg__ObjectTypes__Sequence *
tracked_object_msgs__msg__ObjectTypes__Sequence__create(size_t size)
{
  tracked_object_msgs__msg__ObjectTypes__Sequence * array = (tracked_object_msgs__msg__ObjectTypes__Sequence *)malloc(sizeof(tracked_object_msgs__msg__ObjectTypes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tracked_object_msgs__msg__ObjectTypes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tracked_object_msgs__msg__ObjectTypes__Sequence__destroy(tracked_object_msgs__msg__ObjectTypes__Sequence * array)
{
  if (array) {
    tracked_object_msgs__msg__ObjectTypes__Sequence__fini(array);
  }
  free(array);
}
