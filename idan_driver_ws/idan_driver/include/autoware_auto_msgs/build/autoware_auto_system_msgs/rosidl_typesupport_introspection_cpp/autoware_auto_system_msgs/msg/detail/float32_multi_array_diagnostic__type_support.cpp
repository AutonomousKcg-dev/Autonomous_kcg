// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_system_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Float32MultiArrayDiagnostic_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic(_init);
}

void Float32MultiArrayDiagnostic_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic *>(message_memory);
  typed_message->~Float32MultiArrayDiagnostic();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Float32MultiArrayDiagnostic_message_member_array[2] = {
  {
    "diag_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_system_msgs::msg::DiagnosticHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic, diag_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "diag_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float32MultiArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic, diag_array),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Float32MultiArrayDiagnostic_message_members = {
  "autoware_auto_system_msgs::msg",  // message namespace
  "Float32MultiArrayDiagnostic",  // message name
  2,  // number of fields
  sizeof(autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic),
  Float32MultiArrayDiagnostic_message_member_array,  // message members
  Float32MultiArrayDiagnostic_init_function,  // function to initialize message memory (memory has to be allocated)
  Float32MultiArrayDiagnostic_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Float32MultiArrayDiagnostic_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Float32MultiArrayDiagnostic_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_system_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>()
{
  return &::autoware_auto_system_msgs::msg::rosidl_typesupport_introspection_cpp::Float32MultiArrayDiagnostic_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_system_msgs, msg, Float32MultiArrayDiagnostic)() {
  return &::autoware_auto_system_msgs::msg::rosidl_typesupport_introspection_cpp::Float32MultiArrayDiagnostic_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
