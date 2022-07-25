// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.hpp"
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

void PedestrianMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cognata_sdk_ros2::msg::PedestrianMsg(_init);
}

void PedestrianMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cognata_sdk_ros2::msg::PedestrianMsg *>(message_memory);
  typed_message->~PedestrianMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PedestrianMsg_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::PedestrianMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::ObjectDescription>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::PedestrianMsg, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pedestrian_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::PedestrianMsg, pedestrian_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PedestrianMsg_message_members = {
  "cognata_sdk_ros2::msg",  // message namespace
  "PedestrianMsg",  // message name
  3,  // number of fields
  sizeof(cognata_sdk_ros2::msg::PedestrianMsg),
  PedestrianMsg_message_member_array,  // message members
  PedestrianMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  PedestrianMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PedestrianMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PedestrianMsg_message_members,
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
get_message_type_support_handle<cognata_sdk_ros2::msg::PedestrianMsg>()
{
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::PedestrianMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cognata_sdk_ros2, msg, PedestrianMsg)() {
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::PedestrianMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
