// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from additional_msgs:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice
#include "additional_msgs/msg/detail/trajectory_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `trajectories`
#include "autoware_auto_msgs/msg/detail/trajectory__functions.h"

bool
additional_msgs__msg__TrajectoryArray__init(additional_msgs__msg__TrajectoryArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    additional_msgs__msg__TrajectoryArray__fini(msg);
    return false;
  }
  // trajectories
  if (!autoware_auto_msgs__msg__Trajectory__Sequence__init(&msg->trajectories, 0)) {
    additional_msgs__msg__TrajectoryArray__fini(msg);
    return false;
  }
  return true;
}

void
additional_msgs__msg__TrajectoryArray__fini(additional_msgs__msg__TrajectoryArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // trajectories
  autoware_auto_msgs__msg__Trajectory__Sequence__fini(&msg->trajectories);
}

additional_msgs__msg__TrajectoryArray *
additional_msgs__msg__TrajectoryArray__create()
{
  additional_msgs__msg__TrajectoryArray * msg = (additional_msgs__msg__TrajectoryArray *)malloc(sizeof(additional_msgs__msg__TrajectoryArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(additional_msgs__msg__TrajectoryArray));
  bool success = additional_msgs__msg__TrajectoryArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
additional_msgs__msg__TrajectoryArray__destroy(additional_msgs__msg__TrajectoryArray * msg)
{
  if (msg) {
    additional_msgs__msg__TrajectoryArray__fini(msg);
  }
  free(msg);
}


bool
additional_msgs__msg__TrajectoryArray__Sequence__init(additional_msgs__msg__TrajectoryArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  additional_msgs__msg__TrajectoryArray * data = NULL;
  if (size) {
    data = (additional_msgs__msg__TrajectoryArray *)calloc(size, sizeof(additional_msgs__msg__TrajectoryArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = additional_msgs__msg__TrajectoryArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        additional_msgs__msg__TrajectoryArray__fini(&data[i - 1]);
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
additional_msgs__msg__TrajectoryArray__Sequence__fini(additional_msgs__msg__TrajectoryArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      additional_msgs__msg__TrajectoryArray__fini(&array->data[i]);
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

additional_msgs__msg__TrajectoryArray__Sequence *
additional_msgs__msg__TrajectoryArray__Sequence__create(size_t size)
{
  additional_msgs__msg__TrajectoryArray__Sequence * array = (additional_msgs__msg__TrajectoryArray__Sequence *)malloc(sizeof(additional_msgs__msg__TrajectoryArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = additional_msgs__msg__TrajectoryArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
additional_msgs__msg__TrajectoryArray__Sequence__destroy(additional_msgs__msg__TrajectoryArray__Sequence * array)
{
  if (array) {
    additional_msgs__msg__TrajectoryArray__Sequence__fini(array);
  }
  free(array);
}
