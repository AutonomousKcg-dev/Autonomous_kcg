// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from additional_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__BUILDER_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__BUILDER_HPP_

#include "additional_msgs/msg/detail/can_packet__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace additional_msgs
{

namespace msg
{

namespace builder
{

class Init_CanPacket_time
{
public:
  explicit Init_CanPacket_time(::additional_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  ::additional_msgs::msg::CanPacket time(::additional_msgs::msg::CanPacket::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_flag
{
public:
  explicit Init_CanPacket_flag(::additional_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  Init_CanPacket_time flag(::additional_msgs::msg::CanPacket::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_CanPacket_time(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_dat
{
public:
  explicit Init_CanPacket_dat(::additional_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  Init_CanPacket_flag dat(::additional_msgs::msg::CanPacket::_dat_type arg)
  {
    msg_.dat = std::move(arg);
    return Init_CanPacket_flag(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_len
{
public:
  explicit Init_CanPacket_len(::additional_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  Init_CanPacket_dat len(::additional_msgs::msg::CanPacket::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_CanPacket_dat(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_id
{
public:
  explicit Init_CanPacket_id(::additional_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  Init_CanPacket_len id(::additional_msgs::msg::CanPacket::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CanPacket_len(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_count
{
public:
  explicit Init_CanPacket_count(::additional_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  Init_CanPacket_id count(::additional_msgs::msg::CanPacket::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_CanPacket_id(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_header
{
public:
  Init_CanPacket_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanPacket_count header(::additional_msgs::msg::CanPacket::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CanPacket_count(msg_);
  }

private:
  ::additional_msgs::msg::CanPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::additional_msgs::msg::CanPacket>()
{
  return additional_msgs::msg::builder::Init_CanPacket_header();
}

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__BUILDER_HPP_
