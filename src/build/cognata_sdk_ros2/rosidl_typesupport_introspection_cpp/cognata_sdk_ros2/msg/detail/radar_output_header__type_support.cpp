// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_header__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cognata_sdk_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RadarOutputHeader_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cognata_sdk_ros2::msg::RadarOutputHeader(_init);
}

void RadarOutputHeader_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cognata_sdk_ros2::msg::RadarOutputHeader *>(message_memory);
  typed_message->~RadarOutputHeader();
}

size_t size_function__RadarOutputHeader__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::RadarOutputTarget> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarOutputHeader__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::RadarOutputTarget> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarOutputHeader__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cognata_sdk_ros2::msg::RadarOutputTarget> *>(untyped_member);
  return &member[index];
}

void resize_function__RadarOutputHeader__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cognata_sdk_ros2::msg::RadarOutputTarget> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RadarOutputHeader_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::RadarOutputHeader, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "radar_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::RadarOutputHeader, radar_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "radar_placement",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::RadarOutputHeader, radar_placement),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "h_fov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::RadarOutputHeader, h_fov),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v_fov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::RadarOutputHeader, v_fov),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::RadarOutputTarget>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::RadarOutputHeader, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarOutputHeader__targets,  // size() function pointer
    get_const_function__RadarOutputHeader__targets,  // get_const(index) function pointer
    get_function__RadarOutputHeader__targets,  // get(index) function pointer
    resize_function__RadarOutputHeader__targets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RadarOutputHeader_message_members = {
  "cognata_sdk_ros2::msg",  // message namespace
  "RadarOutputHeader",  // message name
  6,  // number of fields
  sizeof(cognata_sdk_ros2::msg::RadarOutputHeader),
  RadarOutputHeader_message_member_array,  // message members
  RadarOutputHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarOutputHeader_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RadarOutputHeader_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RadarOutputHeader_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cognata_sdk_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cognata_sdk_ros2::msg::RadarOutputHeader>()
{
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::RadarOutputHeader_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cognata_sdk_ros2, msg, RadarOutputHeader)() {
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::RadarOutputHeader_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
