// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice
#include "tracked_object_msgs/msg/detail/tracked_object_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tracked_objects`
#include "tracked_object_msgs/msg/detail/tracked_object__functions.h"

bool
tracked_object_msgs__msg__TrackedObjectArray__init(tracked_object_msgs__msg__TrackedObjectArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tracked_object_msgs__msg__TrackedObjectArray__fini(msg);
    return false;
  }
  // tracked_objects
  if (!tracked_object_msgs__msg__TrackedObject__Sequence__init(&msg->tracked_objects, 0)) {
    tracked_object_msgs__msg__TrackedObjectArray__fini(msg);
    return false;
  }
  return true;
}

void
tracked_object_msgs__msg__TrackedObjectArray__fini(tracked_object_msgs__msg__TrackedObjectArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracked_objects
  tracked_object_msgs__msg__TrackedObject__Sequence__fini(&msg->tracked_objects);
}

tracked_object_msgs__msg__TrackedObjectArray *
tracked_object_msgs__msg__TrackedObjectArray__create()
{
  tracked_object_msgs__msg__TrackedObjectArray * msg = (tracked_object_msgs__msg__TrackedObjectArray *)malloc(sizeof(tracked_object_msgs__msg__TrackedObjectArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracked_object_msgs__msg__TrackedObjectArray));
  bool success = tracked_object_msgs__msg__TrackedObjectArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tracked_object_msgs__msg__TrackedObjectArray__destroy(tracked_object_msgs__msg__TrackedObjectArray * msg)
{
  if (msg) {
    tracked_object_msgs__msg__TrackedObjectArray__fini(msg);
  }
  free(msg);
}


bool
tracked_object_msgs__msg__TrackedObjectArray__Sequence__init(tracked_object_msgs__msg__TrackedObjectArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tracked_object_msgs__msg__TrackedObjectArray * data = NULL;
  if (size) {
    data = (tracked_object_msgs__msg__TrackedObjectArray *)calloc(size, sizeof(tracked_object_msgs__msg__TrackedObjectArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracked_object_msgs__msg__TrackedObjectArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracked_object_msgs__msg__TrackedObjectArray__fini(&data[i - 1]);
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
tracked_object_msgs__msg__TrackedObjectArray__Sequence__fini(tracked_object_msgs__msg__TrackedObjectArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tracked_object_msgs__msg__TrackedObjectArray__fini(&array->data[i]);
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

tracked_object_msgs__msg__TrackedObjectArray__Sequence *
tracked_object_msgs__msg__TrackedObjectArray__Sequence__create(size_t size)
{
  tracked_object_msgs__msg__TrackedObjectArray__Sequence * array = (tracked_object_msgs__msg__TrackedObjectArray__Sequence *)malloc(sizeof(tracked_object_msgs__msg__TrackedObjectArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tracked_object_msgs__msg__TrackedObjectArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tracked_object_msgs__msg__TrackedObjectArray__Sequence__destroy(tracked_object_msgs__msg__TrackedObjectArray__Sequence * array)
{
  if (array) {
    tracked_object_msgs__msg__TrackedObjectArray__Sequence__fini(array);
  }
  free(array);
}
