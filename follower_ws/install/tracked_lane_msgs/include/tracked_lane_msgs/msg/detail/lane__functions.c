// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `left_boundary`
// Member `right_boundary`
#include "tracked_lane_msgs/msg/detail/boundary__functions.h"

bool
tracked_lane_msgs__msg__Lane__init(tracked_lane_msgs__msg__Lane * msg)
{
  if (!msg) {
    return false;
  }
  // left_boundary
  if (!tracked_lane_msgs__msg__Boundary__init(&msg->left_boundary)) {
    tracked_lane_msgs__msg__Lane__fini(msg);
    return false;
  }
  // right_boundary
  if (!tracked_lane_msgs__msg__Boundary__init(&msg->right_boundary)) {
    tracked_lane_msgs__msg__Lane__fini(msg);
    return false;
  }
  return true;
}

void
tracked_lane_msgs__msg__Lane__fini(tracked_lane_msgs__msg__Lane * msg)
{
  if (!msg) {
    return;
  }
  // left_boundary
  tracked_lane_msgs__msg__Boundary__fini(&msg->left_boundary);
  // right_boundary
  tracked_lane_msgs__msg__Boundary__fini(&msg->right_boundary);
}

tracked_lane_msgs__msg__Lane *
tracked_lane_msgs__msg__Lane__create()
{
  tracked_lane_msgs__msg__Lane * msg = (tracked_lane_msgs__msg__Lane *)malloc(sizeof(tracked_lane_msgs__msg__Lane));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracked_lane_msgs__msg__Lane));
  bool success = tracked_lane_msgs__msg__Lane__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tracked_lane_msgs__msg__Lane__destroy(tracked_lane_msgs__msg__Lane * msg)
{
  if (msg) {
    tracked_lane_msgs__msg__Lane__fini(msg);
  }
  free(msg);
}


bool
tracked_lane_msgs__msg__Lane__Sequence__init(tracked_lane_msgs__msg__Lane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tracked_lane_msgs__msg__Lane * data = NULL;
  if (size) {
    data = (tracked_lane_msgs__msg__Lane *)calloc(size, sizeof(tracked_lane_msgs__msg__Lane));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracked_lane_msgs__msg__Lane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracked_lane_msgs__msg__Lane__fini(&data[i - 1]);
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
tracked_lane_msgs__msg__Lane__Sequence__fini(tracked_lane_msgs__msg__Lane__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tracked_lane_msgs__msg__Lane__fini(&array->data[i]);
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

tracked_lane_msgs__msg__Lane__Sequence *
tracked_lane_msgs__msg__Lane__Sequence__create(size_t size)
{
  tracked_lane_msgs__msg__Lane__Sequence * array = (tracked_lane_msgs__msg__Lane__Sequence *)malloc(sizeof(tracked_lane_msgs__msg__Lane__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tracked_lane_msgs__msg__Lane__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tracked_lane_msgs__msg__Lane__Sequence__destroy(tracked_lane_msgs__msg__Lane__Sequence * array)
{
  if (array) {
    tracked_lane_msgs__msg__Lane__Sequence__fini(array);
  }
  free(array);
}
