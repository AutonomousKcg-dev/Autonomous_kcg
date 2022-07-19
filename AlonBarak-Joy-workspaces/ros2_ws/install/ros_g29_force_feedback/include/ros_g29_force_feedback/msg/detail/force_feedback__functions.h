// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__FUNCTIONS_H_
#define ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_g29_force_feedback/msg/rosidl_generator_c__visibility_control.h"

#include "ros_g29_force_feedback/msg/detail/force_feedback__struct.h"

/// Initialize msg/ForceFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_g29_force_feedback__msg__ForceFeedback
 * )) before or use
 * ros_g29_force_feedback__msg__ForceFeedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
bool
ros_g29_force_feedback__msg__ForceFeedback__init(ros_g29_force_feedback__msg__ForceFeedback * msg);

/// Finalize msg/ForceFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
void
ros_g29_force_feedback__msg__ForceFeedback__fini(ros_g29_force_feedback__msg__ForceFeedback * msg);

/// Create msg/ForceFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_g29_force_feedback__msg__ForceFeedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
ros_g29_force_feedback__msg__ForceFeedback *
ros_g29_force_feedback__msg__ForceFeedback__create();

/// Destroy msg/ForceFeedback message.
/**
 * It calls
 * ros_g29_force_feedback__msg__ForceFeedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
void
ros_g29_force_feedback__msg__ForceFeedback__destroy(ros_g29_force_feedback__msg__ForceFeedback * msg);


/// Initialize array of msg/ForceFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_g29_force_feedback__msg__ForceFeedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
bool
ros_g29_force_feedback__msg__ForceFeedback__Sequence__init(ros_g29_force_feedback__msg__ForceFeedback__Sequence * array, size_t size);

/// Finalize array of msg/ForceFeedback messages.
/**
 * It calls
 * ros_g29_force_feedback__msg__ForceFeedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
void
ros_g29_force_feedback__msg__ForceFeedback__Sequence__fini(ros_g29_force_feedback__msg__ForceFeedback__Sequence * array);

/// Create array of msg/ForceFeedback messages.
/**
 * It allocates the memory for the array and calls
 * ros_g29_force_feedback__msg__ForceFeedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
ros_g29_force_feedback__msg__ForceFeedback__Sequence *
ros_g29_force_feedback__msg__ForceFeedback__Sequence__create(size_t size);

/// Destroy array of msg/ForceFeedback messages.
/**
 * It calls
 * ros_g29_force_feedback__msg__ForceFeedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_g29_force_feedback
void
ros_g29_force_feedback__msg__ForceFeedback__Sequence__destroy(ros_g29_force_feedback__msg__ForceFeedback__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__FUNCTIONS_H_
