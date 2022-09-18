// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from autoware_auto_msgs:srv/ModifyTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AUTOWARE_AUTO_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "autoware_auto_msgs/srv/detail/modify_trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace autoware_auto_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
cdr_serialize(
  const autoware_auto_msgs::srv::ModifyTrajectory_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_msgs::srv::ModifyTrajectory_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
get_serialized_size(
  const autoware_auto_msgs::srv::ModifyTrajectory_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
max_serialized_size_ModifyTrajectory_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_auto_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_msgs, srv, ModifyTrajectory_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "autoware_auto_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "autoware_auto_msgs/srv/detail/modify_trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace autoware_auto_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
cdr_serialize(
  const autoware_auto_msgs::srv::ModifyTrajectory_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_msgs::srv::ModifyTrajectory_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
get_serialized_size(
  const autoware_auto_msgs::srv::ModifyTrajectory_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
max_serialized_size_ModifyTrajectory_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_auto_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_msgs, srv, ModifyTrajectory_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "autoware_auto_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_msgs, srv, ModifyTrajectory)();

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_