// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `other_list`
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"
// Member `annotation_list`
#include "cognata_sdk_ros2/msg/detail/annotation_msg__functions.h"
// Member `pedestrian_list`
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__functions.h"
// Member `vehicle_list`
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"
// Member `traffic_light_list`
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__functions.h"

bool
cognata_sdk_ros2__msg__ROIAndDOGTOutput__init(cognata_sdk_ros2__msg__ROIAndDOGTOutput * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
    return false;
  }
  // other_list
  if (!cognata_sdk_ros2__msg__ObjectDescription__Sequence__init(&msg->other_list, 0)) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
    return false;
  }
  // annotation_list
  if (!cognata_sdk_ros2__msg__AnnotationMsg__Sequence__init(&msg->annotation_list, 0)) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
    return false;
  }
  // pedestrian_list
  if (!cognata_sdk_ros2__msg__PedestrianMsg__Sequence__init(&msg->pedestrian_list, 0)) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
    return false;
  }
  // vehicle_list
  if (!cognata_sdk_ros2__msg__VehicleMsg__Sequence__init(&msg->vehicle_list, 0)) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
    return false;
  }
  // traffic_light_list
  if (!cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__init(&msg->traffic_light_list, 0)) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(cognata_sdk_ros2__msg__ROIAndDOGTOutput * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // other_list
  cognata_sdk_ros2__msg__ObjectDescription__Sequence__fini(&msg->other_list);
  // annotation_list
  cognata_sdk_ros2__msg__AnnotationMsg__Sequence__fini(&msg->annotation_list);
  // pedestrian_list
  cognata_sdk_ros2__msg__PedestrianMsg__Sequence__fini(&msg->pedestrian_list);
  // vehicle_list
  cognata_sdk_ros2__msg__VehicleMsg__Sequence__fini(&msg->vehicle_list);
  // traffic_light_list
  cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__fini(&msg->traffic_light_list);
}

cognata_sdk_ros2__msg__ROIAndDOGTOutput *
cognata_sdk_ros2__msg__ROIAndDOGTOutput__create()
{
  cognata_sdk_ros2__msg__ROIAndDOGTOutput * msg = (cognata_sdk_ros2__msg__ROIAndDOGTOutput *)malloc(sizeof(cognata_sdk_ros2__msg__ROIAndDOGTOutput));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__ROIAndDOGTOutput));
  bool success = cognata_sdk_ros2__msg__ROIAndDOGTOutput__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__ROIAndDOGTOutput__destroy(cognata_sdk_ros2__msg__ROIAndDOGTOutput * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence__init(cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__ROIAndDOGTOutput * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__ROIAndDOGTOutput *)calloc(size, sizeof(cognata_sdk_ros2__msg__ROIAndDOGTOutput));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__ROIAndDOGTOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence__fini(cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence *
cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence * array = (cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence__destroy(cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__ROIAndDOGTOutput__Sequence__fini(array);
  }
  free(array);
}
