// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice
#include "tracked_object_msgs/msg/detail/tracked_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `object_pose_m_quat`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `base_frame_id`
// Member `metadata`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_velocity_mps_radps`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `box_dimensions_m`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
tracked_object_msgs__msg__TrackedObject__init(tracked_object_msgs__msg__TrackedObject * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // object_type
  // object_pose_m_quat
  if (!geometry_msgs__msg__Pose__init(&msg->object_pose_m_quat)) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // base_frame_id
  if (!rosidl_runtime_c__String__init(&msg->base_frame_id)) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // object_velocity_mps_radps
  if (!geometry_msgs__msg__Twist__init(&msg->object_velocity_mps_radps)) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // box_dimensions_m
  if (!geometry_msgs__msg__Vector3__init(&msg->box_dimensions_m)) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // confidence
  // metadata
  if (!rosidl_runtime_c__String__init(&msg->metadata)) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  return true;
}

void
tracked_object_msgs__msg__TrackedObject__fini(tracked_object_msgs__msg__TrackedObject * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // object_type
  // object_pose_m_quat
  geometry_msgs__msg__Pose__fini(&msg->object_pose_m_quat);
  // base_frame_id
  rosidl_runtime_c__String__fini(&msg->base_frame_id);
  // object_velocity_mps_radps
  geometry_msgs__msg__Twist__fini(&msg->object_velocity_mps_radps);
  // box_dimensions_m
  geometry_msgs__msg__Vector3__fini(&msg->box_dimensions_m);
  // confidence
  // metadata
  rosidl_runtime_c__String__fini(&msg->metadata);
}

tracked_object_msgs__msg__TrackedObject *
tracked_object_msgs__msg__TrackedObject__create()
{
  tracked_object_msgs__msg__TrackedObject * msg = (tracked_object_msgs__msg__TrackedObject *)malloc(sizeof(tracked_object_msgs__msg__TrackedObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracked_object_msgs__msg__TrackedObject));
  bool success = tracked_object_msgs__msg__TrackedObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tracked_object_msgs__msg__TrackedObject__destroy(tracked_object_msgs__msg__TrackedObject * msg)
{
  if (msg) {
    tracked_object_msgs__msg__TrackedObject__fini(msg);
  }
  free(msg);
}


bool
tracked_object_msgs__msg__TrackedObject__Sequence__init(tracked_object_msgs__msg__TrackedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tracked_object_msgs__msg__TrackedObject * data = NULL;
  if (size) {
    data = (tracked_object_msgs__msg__TrackedObject *)calloc(size, sizeof(tracked_object_msgs__msg__TrackedObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracked_object_msgs__msg__TrackedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracked_object_msgs__msg__TrackedObject__fini(&data[i - 1]);
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
tracked_object_msgs__msg__TrackedObject__Sequence__fini(tracked_object_msgs__msg__TrackedObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tracked_object_msgs__msg__TrackedObject__fini(&array->data[i]);
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

tracked_object_msgs__msg__TrackedObject__Sequence *
tracked_object_msgs__msg__TrackedObject__Sequence__create(size_t size)
{
  tracked_object_msgs__msg__TrackedObject__Sequence * array = (tracked_object_msgs__msg__TrackedObject__Sequence *)malloc(sizeof(tracked_object_msgs__msg__TrackedObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tracked_object_msgs__msg__TrackedObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tracked_object_msgs__msg__TrackedObject__Sequence__destroy(tracked_object_msgs__msg__TrackedObject__Sequence * array)
{
  if (array) {
    tracked_object_msgs__msg__TrackedObject__Sequence__fini(array);
  }
  free(array);
}
