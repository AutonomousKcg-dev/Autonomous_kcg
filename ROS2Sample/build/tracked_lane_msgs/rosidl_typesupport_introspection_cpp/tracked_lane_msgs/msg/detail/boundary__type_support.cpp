// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tracked_lane_msgs/msg/detail/boundary__struct.hpp"
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

void Boundary_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tracked_lane_msgs::msg::Boundary(_init);
}

void Boundary_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tracked_lane_msgs::msg::Boundary *>(message_memory);
  typed_message->~Boundary();
}

size_t size_function__Boundary__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tracked_lane_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Boundary__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tracked_lane_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__Boundary__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tracked_lane_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void resize_function__Boundary__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tracked_lane_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Boundary_message_member_array[2] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::Boundary, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Boundary__points,  // size() function pointer
    get_const_function__Boundary__points,  // get_const(index) function pointer
    get_function__Boundary__points,  // get(index) function pointer
    resize_function__Boundary__points  // resize(index) function pointer
  },
  {
    "num_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::Boundary, num_points),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Boundary_message_members = {
  "tracked_lane_msgs::msg",  // message namespace
  "Boundary",  // message name
  2,  // number of fields
  sizeof(tracked_lane_msgs::msg::Boundary),
  Boundary_message_member_array,  // message members
  Boundary_init_function,  // function to initialize message memory (memory has to be allocated)
  Boundary_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Boundary_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Boundary_message_members,
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
get_message_type_support_handle<tracked_lane_msgs::msg::Boundary>()
{
  return &::tracked_lane_msgs::msg::rosidl_typesupport_introspection_cpp::Boundary_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tracked_lane_msgs, msg, Boundary)() {
  return &::tracked_lane_msgs::msg::rosidl_typesupport_introspection_cpp::Boundary_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
