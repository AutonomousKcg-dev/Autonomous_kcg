// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `initial_twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `initial_acceleration`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"
// Member `predicted_paths`
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__functions.h"

bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->initial_pose)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  // initial_twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->initial_twist)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  // initial_acceleration
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->initial_acceleration)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  // predicted_paths
  if (!autoware_auto_perception_msgs__msg__PredictedPath__Sequence__init(&msg->predicted_paths, 0)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg)
{
  if (!msg) {
    return;
  }
  // initial_pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->initial_pose);
  // initial_twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->initial_twist);
  // initial_acceleration
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->initial_acceleration);
  // predicted_paths
  autoware_auto_perception_msgs__msg__PredictedPath__Sequence__fini(&msg->predicted_paths);
}

autoware_auto_perception_msgs__msg__PredictedObjectKinematics *
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__create()
{
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics *)malloc(sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics));
  bool success = autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__destroy(autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__init(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__fini(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence *
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__destroy(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__fini(array);
  }
  free(array);
}
