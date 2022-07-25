// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "additional_msgs/msg/detail/friction__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace additional_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Friction_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) additional_msgs::msg::Friction(_init);
}

void Friction_fini_function(void * message_memory)
{
  auto typed_message = static_cast<additional_msgs::msg::Friction *>(message_memory);
  typed_message->~Friction();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Friction_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs::msg::Friction, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Friction_message_members = {
  "additional_msgs::msg",  // message namespace
  "Friction",  // message name
  1,  // number of fields
  sizeof(additional_msgs::msg::Friction),
  Friction_message_member_array,  // message members
  Friction_init_function,  // function to initialize message memory (memory has to be allocated)
  Friction_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Friction_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Friction_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace additional_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<additional_msgs::msg::Friction>()
{
  return &::additional_msgs::msg::rosidl_typesupport_introspection_cpp::Friction_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, additional_msgs, msg, Friction)() {
  return &::additional_msgs::msg::rosidl_typesupport_introspection_cpp::Friction_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
