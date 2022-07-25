// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from additional_msgs:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "additional_msgs/msg/detail/trajectory_array__struct.hpp"
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

void TrajectoryArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) additional_msgs::msg::TrajectoryArray(_init);
}

void TrajectoryArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<additional_msgs::msg::TrajectoryArray *>(message_memory);
  typed_message->~TrajectoryArray();
}

size_t size_function__TrajectoryArray__trajectories(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_auto_msgs::msg::Trajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryArray__trajectories(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_auto_msgs::msg::Trajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryArray__trajectories(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_auto_msgs::msg::Trajectory> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryArray__trajectories(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_auto_msgs::msg::Trajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(additional_msgs::msg::TrajectoryArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_msgs::msg::Trajectory>(),  // members of sub message
    true,  // is array
    100,  // array size
    true,  // is upper bound
    offsetof(additional_msgs::msg::TrajectoryArray, trajectories),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryArray__trajectories,  // size() function pointer
    get_const_function__TrajectoryArray__trajectories,  // get_const(index) function pointer
    get_function__TrajectoryArray__trajectories,  // get(index) function pointer
    resize_function__TrajectoryArray__trajectories  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryArray_message_members = {
  "additional_msgs::msg",  // message namespace
  "TrajectoryArray",  // message name
  2,  // number of fields
  sizeof(additional_msgs::msg::TrajectoryArray),
  TrajectoryArray_message_member_array,  // message members
  TrajectoryArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryArray_message_members,
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
get_message_type_support_handle<additional_msgs::msg::TrajectoryArray>()
{
  return &::additional_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, additional_msgs, msg, TrajectoryArray)() {
  return &::additional_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
