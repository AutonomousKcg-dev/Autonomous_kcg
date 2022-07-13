// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice
#include "ros_g29_force_feedback/msg/detail/force_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros_g29_force_feedback__msg__ForceFeedback__init(ros_g29_force_feedback__msg__ForceFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_g29_force_feedback__msg__ForceFeedback__fini(msg);
    return false;
  }
  // position
  // torque
  return true;
}

void
ros_g29_force_feedback__msg__ForceFeedback__fini(ros_g29_force_feedback__msg__ForceFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  // torque
}

ros_g29_force_feedback__msg__ForceFeedback *
ros_g29_force_feedback__msg__ForceFeedback__create()
{
  ros_g29_force_feedback__msg__ForceFeedback * msg = (ros_g29_force_feedback__msg__ForceFeedback *)malloc(sizeof(ros_g29_force_feedback__msg__ForceFeedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_g29_force_feedback__msg__ForceFeedback));
  bool success = ros_g29_force_feedback__msg__ForceFeedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_g29_force_feedback__msg__ForceFeedback__destroy(ros_g29_force_feedback__msg__ForceFeedback * msg)
{
  if (msg) {
    ros_g29_force_feedback__msg__ForceFeedback__fini(msg);
  }
  free(msg);
}


bool
ros_g29_force_feedback__msg__ForceFeedback__Sequence__init(ros_g29_force_feedback__msg__ForceFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_g29_force_feedback__msg__ForceFeedback * data = NULL;
  if (size) {
    data = (ros_g29_force_feedback__msg__ForceFeedback *)calloc(size, sizeof(ros_g29_force_feedback__msg__ForceFeedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_g29_force_feedback__msg__ForceFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_g29_force_feedback__msg__ForceFeedback__fini(&data[i - 1]);
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
ros_g29_force_feedback__msg__ForceFeedback__Sequence__fini(ros_g29_force_feedback__msg__ForceFeedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_g29_force_feedback__msg__ForceFeedback__fini(&array->data[i]);
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

ros_g29_force_feedback__msg__ForceFeedback__Sequence *
ros_g29_force_feedback__msg__ForceFeedback__Sequence__create(size_t size)
{
  ros_g29_force_feedback__msg__ForceFeedback__Sequence * array = (ros_g29_force_feedback__msg__ForceFeedback__Sequence *)malloc(sizeof(ros_g29_force_feedback__msg__ForceFeedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_g29_force_feedback__msg__ForceFeedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_g29_force_feedback__msg__ForceFeedback__Sequence__destroy(ros_g29_force_feedback__msg__ForceFeedback__Sequence * array)
{
  if (array) {
    ros_g29_force_feedback__msg__ForceFeedback__Sequence__fini(array);
  }
  free(array);
}
