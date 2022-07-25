// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `point`
#include "autoware_auto_planning_msgs/msg/detail/path_point__functions.h"
// Member `lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_auto_planning_msgs__msg__PathPointWithLaneId__init(autoware_auto_planning_msgs__msg__PathPointWithLaneId * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!autoware_auto_planning_msgs__msg__PathPoint__init(&msg->point)) {
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(msg);
    return false;
  }
  // lane_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->lane_ids, 0)) {
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(autoware_auto_planning_msgs__msg__PathPointWithLaneId * msg)
{
  if (!msg) {
    return;
  }
  // point
  autoware_auto_planning_msgs__msg__PathPoint__fini(&msg->point);
  // lane_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->lane_ids);
}

autoware_auto_planning_msgs__msg__PathPointWithLaneId *
autoware_auto_planning_msgs__msg__PathPointWithLaneId__create()
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId * msg = (autoware_auto_planning_msgs__msg__PathPointWithLaneId *)malloc(sizeof(autoware_auto_planning_msgs__msg__PathPointWithLaneId));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__PathPointWithLaneId));
  bool success = autoware_auto_planning_msgs__msg__PathPointWithLaneId__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__PathPointWithLaneId__destroy(autoware_auto_planning_msgs__msg__PathPointWithLaneId * msg)
{
  if (msg) {
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__init(autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_planning_msgs__msg__PathPointWithLaneId * data = NULL;
  if (size) {
    data = (autoware_auto_planning_msgs__msg__PathPointWithLaneId *)calloc(size, sizeof(autoware_auto_planning_msgs__msg__PathPointWithLaneId));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__PathPointWithLaneId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__fini(autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence *
autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__create(size_t size)
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * array = (autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence *)malloc(sizeof(autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__destroy(autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * array)
{
  if (array) {
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__fini(array);
  }
  free(array);
}
