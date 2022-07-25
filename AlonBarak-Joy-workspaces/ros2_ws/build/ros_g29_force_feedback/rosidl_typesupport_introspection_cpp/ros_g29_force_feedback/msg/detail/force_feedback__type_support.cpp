// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_g29_force_feedback/msg/detail/force_feedback__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_g29_force_feedback
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ForceFeedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_g29_force_feedback::msg::ForceFeedback(_init);
}

void ForceFeedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_g29_force_feedback::msg::ForceFeedback *>(message_memory);
  typed_message->~ForceFeedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ForceFeedback_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_g29_force_feedback::msg::ForceFeedback, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_g29_force_feedback::msg::ForceFeedback, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_g29_force_feedback::msg::ForceFeedback, torque),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ForceFeedback_message_members = {
  "ros_g29_force_feedback::msg",  // message namespace
  "ForceFeedback",  // message name
  3,  // number of fields
  sizeof(ros_g29_force_feedback::msg::ForceFeedback),
  ForceFeedback_message_member_array,  // message members
  ForceFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ForceFeedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ForceFeedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ForceFeedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_g29_force_feedback


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_g29_force_feedback::msg::ForceFeedback>()
{
  return &::ros_g29_force_feedback::msg::rosidl_typesupport_introspection_cpp::ForceFeedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_g29_force_feedback, msg, ForceFeedback)() {
  return &::ros_g29_force_feedback::msg::rosidl_typesupport_introspection_cpp::ForceFeedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
