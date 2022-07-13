// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_g29_force_feedback/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros_g29_force_feedback/msg/detail/force_feedback__struct.hpp"

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

namespace ros_g29_force_feedback
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_g29_force_feedback
cdr_serialize(
  const ros_g29_force_feedback::msg::ForceFeedback & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_g29_force_feedback
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_g29_force_feedback::msg::ForceFeedback & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_g29_force_feedback
get_serialized_size(
  const ros_g29_force_feedback::msg::ForceFeedback & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_g29_force_feedback
max_serialized_size_ForceFeedback(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_g29_force_feedback

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_g29_force_feedback
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_g29_force_feedback, msg, ForceFeedback)();

#ifdef __cplusplus
}
#endif

#endif  // ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
