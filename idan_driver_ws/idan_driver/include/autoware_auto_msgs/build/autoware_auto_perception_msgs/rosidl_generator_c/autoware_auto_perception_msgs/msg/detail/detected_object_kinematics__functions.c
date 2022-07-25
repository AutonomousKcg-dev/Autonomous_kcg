// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

bool
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__init(autoware_auto_perception_msgs__msg__DetectedObjectKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose_with_covariance)) {
    autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(msg);
    return false;
  }
  // has_position_covariance
  // orientation_availability
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(msg);
    return false;
  }
  // has_twist
  // has_twist_covariance
  return true;
}

void
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(autoware_auto_perception_msgs__msg__DetectedObjectKinematics * msg)
{
  if (!msg) {
    return;
  }
  // pose_with_covariance
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose_with_covariance);
  // has_position_covariance
  // orientation_availability
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
  // has_twist
  // has_twist_covariance
}

autoware_auto_perception_msgs__msg__DetectedObjectKinematics *
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__create()
{
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics * msg = (autoware_auto_perception_msgs__msg__DetectedObjectKinematics *)malloc(sizeof(autoware_auto_perception_msgs__msg__DetectedObjectKinematics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__DetectedObjectKinematics));
  bool success = autoware_auto_perception_msgs__msg__DetectedObjectKinematics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__destroy(autoware_auto_perception_msgs__msg__DetectedObjectKinematics * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence__init(autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__DetectedObjectKinematics *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__DetectedObjectKinematics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__DetectedObjectKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence__fini(autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence *
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence * array = (autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence__destroy(autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence__fini(array);
  }
  free(array);
}
