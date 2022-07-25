// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__FUNCTIONS_H_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cognata_sdk_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "cognata_sdk_ros2/msg/detail/radar_output_target__struct.h"

/// Initialize msg/RadarOutputTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cognata_sdk_ros2__msg__RadarOutputTarget
 * )) before or use
 * cognata_sdk_ros2__msg__RadarOutputTarget__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
bool
cognata_sdk_ros2__msg__RadarOutputTarget__init(cognata_sdk_ros2__msg__RadarOutputTarget * msg);

/// Finalize msg/RadarOutputTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
void
cognata_sdk_ros2__msg__RadarOutputTarget__fini(cognata_sdk_ros2__msg__RadarOutputTarget * msg);

/// Create msg/RadarOutputTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cognata_sdk_ros2__msg__RadarOutputTarget__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
cognata_sdk_ros2__msg__RadarOutputTarget *
cognata_sdk_ros2__msg__RadarOutputTarget__create();

/// Destroy msg/RadarOutputTarget message.
/**
 * It calls
 * cognata_sdk_ros2__msg__RadarOutputTarget__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
void
cognata_sdk_ros2__msg__RadarOutputTarget__destroy(cognata_sdk_ros2__msg__RadarOutputTarget * msg);


/// Initialize array of msg/RadarOutputTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * cognata_sdk_ros2__msg__RadarOutputTarget__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
bool
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array, size_t size);

/// Finalize array of msg/RadarOutputTarget messages.
/**
 * It calls
 * cognata_sdk_ros2__msg__RadarOutputTarget__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
void
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array);

/// Create array of msg/RadarOutputTarget messages.
/**
 * It allocates the memory for the array and calls
 * cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__create(size_t size);

/// Destroy array of msg/RadarOutputTarget messages.
/**
 * It calls
 * cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cognata_sdk_ros2
void
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__destroy(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__FUNCTIONS_H_
