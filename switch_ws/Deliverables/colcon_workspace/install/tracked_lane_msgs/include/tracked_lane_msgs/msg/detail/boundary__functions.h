// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__FUNCTIONS_H_
#define TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tracked_lane_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tracked_lane_msgs/msg/detail/boundary__struct.h"

/// Initialize msg/Boundary message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracked_lane_msgs__msg__Boundary
 * )) before or use
 * tracked_lane_msgs__msg__Boundary__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
bool
tracked_lane_msgs__msg__Boundary__init(tracked_lane_msgs__msg__Boundary * msg);

/// Finalize msg/Boundary message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Boundary__fini(tracked_lane_msgs__msg__Boundary * msg);

/// Create msg/Boundary message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracked_lane_msgs__msg__Boundary__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
tracked_lane_msgs__msg__Boundary *
tracked_lane_msgs__msg__Boundary__create();

/// Destroy msg/Boundary message.
/**
 * It calls
 * tracked_lane_msgs__msg__Boundary__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Boundary__destroy(tracked_lane_msgs__msg__Boundary * msg);


/// Initialize array of msg/Boundary messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracked_lane_msgs__msg__Boundary__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
bool
tracked_lane_msgs__msg__Boundary__Sequence__init(tracked_lane_msgs__msg__Boundary__Sequence * array, size_t size);

/// Finalize array of msg/Boundary messages.
/**
 * It calls
 * tracked_lane_msgs__msg__Boundary__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Boundary__Sequence__fini(tracked_lane_msgs__msg__Boundary__Sequence * array);

/// Create array of msg/Boundary messages.
/**
 * It allocates the memory for the array and calls
 * tracked_lane_msgs__msg__Boundary__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
tracked_lane_msgs__msg__Boundary__Sequence *
tracked_lane_msgs__msg__Boundary__Sequence__create(size_t size);

/// Destroy array of msg/Boundary messages.
/**
 * It calls
 * tracked_lane_msgs__msg__Boundary__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_lane_msgs
void
tracked_lane_msgs__msg__Boundary__Sequence__destroy(tracked_lane_msgs__msg__Boundary__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__FUNCTIONS_H_
