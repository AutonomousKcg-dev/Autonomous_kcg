// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_debug_msgs:msg/Float32MultiArrayStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_debug_msgs/msg/detail/float32_multi_array_stamped__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_debug_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_debug_msgs/msg/detail/float32_multi_array_stamped__functions.h"
#include "autoware_auto_debug_msgs/msg/detail/float32_multi_array_stamped__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `layout`
#include "autoware_auto_debug_msgs/msg/multi_array_layout.h"
// Member `layout`
#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_debug_msgs__msg__Float32MultiArrayStamped__init(message_memory);
}

void Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_fini_function(void * message_memory)
{
  autoware_auto_debug_msgs__msg__Float32MultiArrayStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_debug_msgs__msg__Float32MultiArrayStamped, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_debug_msgs__msg__Float32MultiArrayStamped, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_debug_msgs__msg__Float32MultiArrayStamped, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_members = {
  "autoware_auto_debug_msgs__msg",  // message namespace
  "Float32MultiArrayStamped",  // message name
  3,  // number of fields
  sizeof(autoware_auto_debug_msgs__msg__Float32MultiArrayStamped),
  Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_member_array,  // message members
  Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_type_support_handle = {
  0,
  &Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_debug_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_debug_msgs, msg, Float32MultiArrayStamped)() {
  Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_debug_msgs, msg, MultiArrayLayout)();
  if (!Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_type_support_handle.typesupport_identifier) {
    Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Float32MultiArrayStamped__rosidl_typesupport_introspection_c__Float32MultiArrayStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
