// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/HADMapRoute.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `segments`
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__functions.h"

bool
autoware_auto_planning_msgs__msg__HADMapRoute__init(autoware_auto_planning_msgs__msg__HADMapRoute * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  // start_pose
  if (!geometry_msgs__msg__Pose__init(&msg->start_pose)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__init(&msg->goal_pose)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  // segments
  if (!autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__init(&msg->segments, 0)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__msg__HADMapRoute__fini(autoware_auto_planning_msgs__msg__HADMapRoute * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start_pose
  geometry_msgs__msg__Pose__fini(&msg->start_pose);
  // goal_pose
  geometry_msgs__msg__Pose__fini(&msg->goal_pose);
  // segments
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__fini(&msg->segments);
}

autoware_auto_planning_msgs__msg__HADMapRoute *
autoware_auto_planning_msgs__msg__HADMapRoute__create()
{
  autoware_auto_planning_msgs__msg__HADMapRoute * msg = (autoware_auto_planning_msgs__msg__HADMapRoute *)malloc(sizeof(autoware_auto_planning_msgs__msg__HADMapRoute));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__HADMapRoute));
  bool success = autoware_auto_planning_msgs__msg__HADMapRoute__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__HADMapRoute__destroy(autoware_auto_planning_msgs__msg__HADMapRoute * msg)
{
  if (msg) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__init(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_planning_msgs__msg__HADMapRoute * data = NULL;
  if (size) {
    data = (autoware_auto_planning_msgs__msg__HADMapRoute *)calloc(size, sizeof(autoware_auto_planning_msgs__msg__HADMapRoute));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__HADMapRoute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__HADMapRoute__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__fini(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_planning_msgs__msg__HADMapRoute__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__HADMapRoute__Sequence *
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__create(size_t size)
{
  autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array = (autoware_auto_planning_msgs__msg__HADMapRoute__Sequence *)malloc(sizeof(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__destroy(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array)
{
  if (array) {
    autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__fini(array);
  }
  free(array);
}
