// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__FUNCTIONS_H_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_msgs/msg/detail/vehicle_control_command__struct.h"

/// Initialize msg/VehicleControlCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__msg__VehicleControlCommand
 * )) before or use
 * autoware_auto_msgs__msg__VehicleControlCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__msg__VehicleControlCommand__init(autoware_auto_msgs__msg__VehicleControlCommand * msg);

/// Finalize msg/VehicleControlCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__VehicleControlCommand__fini(autoware_auto_msgs__msg__VehicleControlCommand * msg);

/// Create msg/VehicleControlCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__msg__VehicleControlCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__msg__VehicleControlCommand *
autoware_auto_msgs__msg__VehicleControlCommand__create();

/// Destroy msg/VehicleControlCommand message.
/**
 * It calls
 * autoware_auto_msgs__msg__VehicleControlCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__VehicleControlCommand__destroy(autoware_auto_msgs__msg__VehicleControlCommand * msg);


/// Initialize array of msg/VehicleControlCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__msg__VehicleControlCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__msg__VehicleControlCommand__Sequence__init(autoware_auto_msgs__msg__VehicleControlCommand__Sequence * array, size_t size);

/// Finalize array of msg/VehicleControlCommand messages.
/**
 * It calls
 * autoware_auto_msgs__msg__VehicleControlCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__VehicleControlCommand__Sequence__fini(autoware_auto_msgs__msg__VehicleControlCommand__Sequence * array);

/// Create array of msg/VehicleControlCommand messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__msg__VehicleControlCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__msg__VehicleControlCommand__Sequence *
autoware_auto_msgs__msg__VehicleControlCommand__Sequence__create(size_t size);

/// Destroy array of msg/VehicleControlCommand messages.
/**
 * It calls
 * autoware_auto_msgs__msg__VehicleControlCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__VehicleControlCommand__Sequence__destroy(autoware_auto_msgs__msg__VehicleControlCommand__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__FUNCTIONS_H_
