// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tracked_lane_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tracked_lane_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Lane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tracked_lane_msgs::msg::Lane(_init);
}

void Lane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tracked_lane_msgs::msg::Lane *>(message_memory);
  typed_message->~Lane();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Lane_message_member_array[2] = {
  {
    "left_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Boundary>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::Lane, left_boundary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Boundary>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::Lane, right_boundary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Lane_message_members = {
  "tracked_lane_msgs::msg",  // message namespace
  "Lane",  // message name
  2,  // number of fields
  sizeof(tracked_lane_msgs::msg::Lane),
  Lane_message_member_array,  // message members
  Lane_init_function,  // function to initialize message memory (memory has to be allocated)
  Lane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Lane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Lane_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tracked_lane_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tracked_lane_msgs::msg::Lane>()
{
  return &::tracked_lane_msgs::msg::rosidl_typesupport_introspection_cpp::Lane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tracked_lane_msgs, msg, Lane)() {
  return &::tracked_lane_msgs::msg::rosidl_typesupport_introspection_cpp::Lane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
