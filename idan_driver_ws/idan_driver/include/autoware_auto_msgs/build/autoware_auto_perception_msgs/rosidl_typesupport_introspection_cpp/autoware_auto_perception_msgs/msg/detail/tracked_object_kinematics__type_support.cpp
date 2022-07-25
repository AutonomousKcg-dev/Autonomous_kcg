// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrackedObjectKinematics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_perception_msgs::msg::TrackedObjectKinematics(_init);
}

void TrackedObjectKinematics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_perception_msgs::msg::TrackedObjectKinematics *>(message_memory);
  typed_message->~TrackedObjectKinematics();
}

size_t size_function__TrackedObjectKinematics__position_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__TrackedObjectKinematics__position_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedObjectKinematics__position_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedObjectKinematics_message_member_array[7] = {
  {
    "centroid_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, centroid_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, position_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedObjectKinematics__position_covariance,  // size() function pointer
    get_const_function__TrackedObjectKinematics__position_covariance,  // get_const(index) function pointer
    get_function__TrackedObjectKinematics__position_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_availability",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, orientation_availability),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "twist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TwistWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, twist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::AccelWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_stationary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics, is_stationary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedObjectKinematics_message_members = {
  "autoware_auto_perception_msgs::msg",  // message namespace
  "TrackedObjectKinematics",  // message name
  7,  // number of fields
  sizeof(autoware_auto_perception_msgs::msg::TrackedObjectKinematics),
  TrackedObjectKinematics_message_member_array,  // message members
  TrackedObjectKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedObjectKinematics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedObjectKinematics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedObjectKinematics_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedObjectKinematics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_perception_msgs, msg, TrackedObjectKinematics)() {
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedObjectKinematics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
