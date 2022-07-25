// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__functions.h"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.h"


// Include directives for member types
// Member `diag_header`
#include "autoware_auto_system_msgs/msg/diagnostic_header.h"
// Member `diag_header`
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__rosidl_typesupport_introspection_c.h"
// Member `diag_array`
#include "std_msgs/msg/float32_multi_array.h"
// Member `diag_array`
#include "std_msgs/msg/detail/float32_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init(message_memory);
}

void Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_fini_function(void * message_memory)
{
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_member_array[2] = {
  {
    "diag_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic, diag_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic, diag_array),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_members = {
  "autoware_auto_system_msgs__msg",  // message namespace
  "Float32MultiArrayDiagnostic",  // message name
  2,  // number of fields
  sizeof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic),
  Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_member_array,  // message members
  Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_init_function,  // function to initialize message memory (memory has to be allocated)
  Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_type_support_handle = {
  0,
  &Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_system_msgs, msg, Float32MultiArrayDiagnostic)() {
  Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_system_msgs, msg, DiagnosticHeader)();
  Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32MultiArray)();
  if (!Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_type_support_handle.typesupport_identifier) {
    Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Float32MultiArrayDiagnostic__rosidl_typesupport_introspection_c__Float32MultiArrayDiagnostic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
