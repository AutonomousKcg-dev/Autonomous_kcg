// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/PathWithLaneId.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_with_lane_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__functions.h"
// Member `drivable_area`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"

bool
autoware_auto_planning_msgs__msg__PathWithLaneId__init(autoware_auto_planning_msgs__msg__PathWithLaneId * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  // points
  if (!autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__init(&msg->points, 0)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  // drivable_area
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->drivable_area)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__msg__PathWithLaneId__fini(autoware_auto_planning_msgs__msg__PathWithLaneId * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__fini(&msg->points);
  // drivable_area
  nav_msgs__msg__OccupancyGrid__fini(&msg->drivable_area);
}

autoware_auto_planning_msgs__msg__PathWithLaneId *
autoware_auto_planning_msgs__msg__PathWithLaneId__create()
{
  autoware_auto_planning_msgs__msg__PathWithLaneId * msg = (autoware_auto_planning_msgs__msg__PathWithLaneId *)malloc(sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId));
  bool success = autoware_auto_planning_msgs__msg__PathWithLaneId__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__PathWithLaneId__destroy(autoware_auto_planning_msgs__msg__PathWithLaneId * msg)
{
  if (msg) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__init(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_planning_msgs__msg__PathWithLaneId * data = NULL;
  if (size) {
    data = (autoware_auto_planning_msgs__msg__PathWithLaneId *)calloc(size, sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__PathWithLaneId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__PathWithLaneId__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__fini(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_planning_msgs__msg__PathWithLaneId__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence *
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__create(size_t size)
{
  autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array = (autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence *)malloc(sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__destroy(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array)
{
  if (array) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__fini(array);
  }
  free(array);
}
