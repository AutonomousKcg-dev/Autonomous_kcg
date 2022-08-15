// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__struct.hpp"
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

void BoundingBoxMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cognata_sdk_ros2::msg::BoundingBoxMsg(_init);
}

void BoundingBoxMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cognata_sdk_ros2::msg::BoundingBoxMsg *>(message_memory);
  typed_message->~BoundingBoxMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoundingBoxMsg_message_member_array[4] = {
  {
    "transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::BoundingBoxMsg, transform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::BoundingBoxMsg, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::BoundingBoxMsg, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::BoundingBoxMsg, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoundingBoxMsg_message_members = {
  "cognata_sdk_ros2::msg",  // message namespace
  "BoundingBoxMsg",  // message name
  4,  // number of fields
  sizeof(cognata_sdk_ros2::msg::BoundingBoxMsg),
  BoundingBoxMsg_message_member_array,  // message members
  BoundingBoxMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBoxMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoundingBoxMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoundingBoxMsg_message_members,
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
get_message_type_support_handle<cognata_sdk_ros2::msg::BoundingBoxMsg>()
{
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::BoundingBoxMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cognata_sdk_ros2, msg, BoundingBoxMsg)() {
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::BoundingBoxMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
