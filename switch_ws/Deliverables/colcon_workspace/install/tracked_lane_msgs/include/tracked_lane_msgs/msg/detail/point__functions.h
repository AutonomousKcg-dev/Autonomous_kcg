// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tracked_lane_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__POINT__FUNCTIONS_H_
#define TRACKED_LANE_MSGS__MSG__DETAIL__POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tracked_lane_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tracked_lane_msgs/msg/detail/point__struct.h"

/// Initialize msg/Point message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracked_lane_msgs__msg__Point
 * )) before or use
 * tracked_lane_msgs__msg__Point__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
bool
tracked_lane_msgs__msg__Point__init(tracked_lane_msgs__msg__Point * msg);

/// Finalize msg/Point message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Point__fini(tracked_lane_msgs__msg__Point * msg);

/// Create msg/Point message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracked_lane_msgs__msg__Point__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
tracked_lane_msgs__msg__Point *
tracked_lane_msgs__msg__Point__create();

/// Destroy msg/Point message.
/**
 * It calls
 * tracked_lane_msgs__msg__Point__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Point__destroy(tracked_lane_msgs__msg__Point * msg);


/// Initialize array of msg/Point messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracked_lane_msgs__msg__Point__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
bool
tracked_lane_msgs__msg__Point__Sequence__init(tracked_lane_msgs__msg__Point__Sequence * array, size_t size);

/// Finalize array of msg/Point messages.
/**
 * It calls
 * tracked_lane_msgs__msg__Point__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Point__Sequence__fini(tracked_lane_msgs__msg__Point__Sequence * array);

/// Create array of msg/Point messages.
/**
 * It allocates the memory for the array and calls
 * tracked_lane_msgs__msg__Point__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
tracked_lane_msgs__msg__Point__Sequence *
tracked_lane_msgs__msg__Point__Sequence__create(size_t size);

/// Destroy array of msg/Point messages.
/**
 * It calls
 * tracked_lane_msgs__msg__Point__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Point__Sequence__destroy(tracked_lane_msgs__msg__Point__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__POINT__FUNCTIONS_H_
