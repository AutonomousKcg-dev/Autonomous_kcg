// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/lane_results__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `adjacent_left`
// Member `adjacent_right`
// Member `ego_lane`
// Member `road_boundary`
#include "tracked_lane_msgs/msg/detail/lane__functions.h"
// Member `algo_description`
#include "rosidl_runtime_c/string_functions.h"

bool
tracked_lane_msgs__msg__LaneResults__init(tracked_lane_msgs__msg__LaneResults * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
    return false;
  }
  // adjacent_left
  if (!tracked_lane_msgs__msg__Lane__Sequence__init(&msg->adjacent_left, 0)) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
    return false;
  }
  // num_adjacent_left
  // adjacent_right
  if (!tracked_lane_msgs__msg__Lane__Sequence__init(&msg->adjacent_right, 0)) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
    return false;
  }
  // num_adjacent_right
  // ego_lane
  if (!tracked_lane_msgs__msg__Lane__init(&msg->ego_lane)) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
    return false;
  }
  // road_boundary
  if (!tracked_lane_msgs__msg__Lane__init(&msg->road_boundary)) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
    return false;
  }
  // total_number_of_lanes
  // algo_description
  if (!rosidl_runtime_c__String__init(&msg->algo_description)) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
    return false;
  }
  return true;
}

void
tracked_lane_msgs__msg__LaneResults__fini(tracked_lane_msgs__msg__LaneResults * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // adjacent_left
  tracked_lane_msgs__msg__Lane__Sequence__fini(&msg->adjacent_left);
  // num_adjacent_left
  // adjacent_right
  tracked_lane_msgs__msg__Lane__Sequence__fini(&msg->adjacent_right);
  // num_adjacent_right
  // ego_lane
  tracked_lane_msgs__msg__Lane__fini(&msg->ego_lane);
  // road_boundary
  tracked_lane_msgs__msg__Lane__fini(&msg->road_boundary);
  // total_number_of_lanes
  // algo_description
  rosidl_runtime_c__String__fini(&msg->algo_description);
}

tracked_lane_msgs__msg__LaneResults *
tracked_lane_msgs__msg__LaneResults__create()
{
  tracked_lane_msgs__msg__LaneResults * msg = (tracked_lane_msgs__msg__LaneResults *)malloc(sizeof(tracked_lane_msgs__msg__LaneResults));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracked_lane_msgs__msg__LaneResults));
  bool success = tracked_lane_msgs__msg__LaneResults__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tracked_lane_msgs__msg__LaneResults__destroy(tracked_lane_msgs__msg__LaneResults * msg)
{
  if (msg) {
    tracked_lane_msgs__msg__LaneResults__fini(msg);
  }
  free(msg);
}


bool
tracked_lane_msgs__msg__LaneResults__Sequence__init(tracked_lane_msgs__msg__LaneResults__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tracked_lane_msgs__msg__LaneResults * data = NULL;
  if (size) {
    data = (tracked_lane_msgs__msg__LaneResults *)calloc(size, sizeof(tracked_lane_msgs__msg__LaneResults));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracked_lane_msgs__msg__LaneResults__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracked_lane_msgs__msg__LaneResults__fini(&data[i - 1]);
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
tracked_lane_msgs__msg__LaneResults__Sequence__fini(tracked_lane_msgs__msg__LaneResults__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tracked_lane_msgs__msg__LaneResults__fini(&array->data[i]);
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

tracked_lane_msgs__msg__LaneResults__Sequence *
tracked_lane_msgs__msg__LaneResults__Sequence__create(size_t size)
{
  tracked_lane_msgs__msg__LaneResults__Sequence * array = (tracked_lane_msgs__msg__LaneResults__Sequence *)malloc(sizeof(tracked_lane_msgs__msg__LaneResults__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tracked_lane_msgs__msg__LaneResults__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tracked_lane_msgs__msg__LaneResults__Sequence__destroy(tracked_lane_msgs__msg__LaneResults__Sequence * array)
{
  if (array) {
    tracked_lane_msgs__msg__LaneResults__Sequence__fini(array);
  }
  free(array);
}
