// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tracked_lane_msgs/msg/detail/lane_results__struct.hpp"
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

void LaneResults_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tracked_lane_msgs::msg::LaneResults(_init);
}

void LaneResults_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tracked_lane_msgs::msg::LaneResults *>(message_memory);
  typed_message->~LaneResults();
}

size_t size_function__LaneResults__adjacent_left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneResults__adjacent_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneResults__adjacent_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void resize_function__LaneResults__adjacent_left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneResults__adjacent_right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneResults__adjacent_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneResults__adjacent_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void resize_function__LaneResults__adjacent_right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tracked_lane_msgs::msg::Lane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneResults_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adjacent_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Lane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, adjacent_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneResults__adjacent_left,  // size() function pointer
    get_const_function__LaneResults__adjacent_left,  // get_const(index) function pointer
    get_function__LaneResults__adjacent_left,  // get(index) function pointer
    resize_function__LaneResults__adjacent_left  // resize(index) function pointer
  },
  {
    "num_adjacent_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, num_adjacent_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adjacent_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Lane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, adjacent_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneResults__adjacent_right,  // size() function pointer
    get_const_function__LaneResults__adjacent_right,  // get_const(index) function pointer
    get_function__LaneResults__adjacent_right,  // get(index) function pointer
    resize_function__LaneResults__adjacent_right  // resize(index) function pointer
  },
  {
    "num_adjacent_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, num_adjacent_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_lane",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Lane>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, ego_lane),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracked_lane_msgs::msg::Lane>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, road_boundary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_number_of_lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, total_number_of_lanes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "algo_description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_lane_msgs::msg::LaneResults, algo_description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneResults_message_members = {
  "tracked_lane_msgs::msg",  // message namespace
  "LaneResults",  // message name
  9,  // number of fields
  sizeof(tracked_lane_msgs::msg::LaneResults),
  LaneResults_message_member_array,  // message members
  LaneResults_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneResults_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneResults_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneResults_message_members,
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
get_message_type_support_handle<tracked_lane_msgs::msg::LaneResults>()
{
  return &::tracked_lane_msgs::msg::rosidl_typesupport_introspection_cpp::LaneResults_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tracked_lane_msgs, msg, LaneResults)() {
  return &::tracked_lane_msgs::msg::rosidl_typesupport_introspection_cpp::LaneResults_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
