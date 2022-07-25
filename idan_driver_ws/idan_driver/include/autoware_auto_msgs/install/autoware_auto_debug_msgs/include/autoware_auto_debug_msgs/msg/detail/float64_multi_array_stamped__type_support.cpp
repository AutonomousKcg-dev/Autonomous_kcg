// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_debug_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_debug_msgs/msg/detail/float64_multi_array_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_debug_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Float64MultiArrayStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_debug_msgs::msg::Float64MultiArrayStamped(_init);
}

void Float64MultiArrayStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_debug_msgs::msg::Float64MultiArrayStamped *>(message_memory);
  typed_message->~Float64MultiArrayStamped();
}

size_t size_function__Float64MultiArrayStamped__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Float64MultiArrayStamped__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Float64MultiArrayStamped__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__Float64MultiArrayStamped__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Float64MultiArrayStamped_message_member_array[3] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_debug_msgs::msg::Float64MultiArrayStamped, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "layout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_debug_msgs::msg::MultiArrayLayout>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_debug_msgs::msg::Float64MultiArrayStamped, layout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_debug_msgs::msg::Float64MultiArrayStamped, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Float64MultiArrayStamped__data,  // size() function pointer
    get_const_function__Float64MultiArrayStamped__data,  // get_const(index) function pointer
    get_function__Float64MultiArrayStamped__data,  // get(index) function pointer
    resize_function__Float64MultiArrayStamped__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Float64MultiArrayStamped_message_members = {
  "autoware_auto_debug_msgs::msg",  // message namespace
  "Float64MultiArrayStamped",  // message name
  3,  // number of fields
  sizeof(autoware_auto_debug_msgs::msg::Float64MultiArrayStamped),
  Float64MultiArrayStamped_message_member_array,  // message members
  Float64MultiArrayStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  Float64MultiArrayStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Float64MultiArrayStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Float64MultiArrayStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_debug_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_debug_msgs::msg::Float64MultiArrayStamped>()
{
  return &::autoware_auto_debug_msgs::msg::rosidl_typesupport_introspection_cpp::Float64MultiArrayStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_debug_msgs, msg, Float64MultiArrayStamped)() {
  return &::autoware_auto_debug_msgs::msg::rosidl_typesupport_introspection_cpp::Float64MultiArrayStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
