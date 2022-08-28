// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__BUILDER_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__BUILDER_HPP_

#include "tracked_lane_msgs/msg/detail/lane_results__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tracked_lane_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneResults_algo_description
{
public:
  explicit Init_LaneResults_algo_description(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  ::tracked_lane_msgs::msg::LaneResults algo_description(::tracked_lane_msgs::msg::LaneResults::_algo_description_type arg)
  {
    msg_.algo_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_total_number_of_lanes
{
public:
  explicit Init_LaneResults_total_number_of_lanes(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_algo_description total_number_of_lanes(::tracked_lane_msgs::msg::LaneResults::_total_number_of_lanes_type arg)
  {
    msg_.total_number_of_lanes = std::move(arg);
    return Init_LaneResults_algo_description(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_road_boundary
{
public:
  explicit Init_LaneResults_road_boundary(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_total_number_of_lanes road_boundary(::tracked_lane_msgs::msg::LaneResults::_road_boundary_type arg)
  {
    msg_.road_boundary = std::move(arg);
    return Init_LaneResults_total_number_of_lanes(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_ego_lane
{
public:
  explicit Init_LaneResults_ego_lane(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_road_boundary ego_lane(::tracked_lane_msgs::msg::LaneResults::_ego_lane_type arg)
  {
    msg_.ego_lane = std::move(arg);
    return Init_LaneResults_road_boundary(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_num_adjacent_right
{
public:
  explicit Init_LaneResults_num_adjacent_right(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_ego_lane num_adjacent_right(::tracked_lane_msgs::msg::LaneResults::_num_adjacent_right_type arg)
  {
    msg_.num_adjacent_right = std::move(arg);
    return Init_LaneResults_ego_lane(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_adjacent_right
{
public:
  explicit Init_LaneResults_adjacent_right(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_num_adjacent_right adjacent_right(::tracked_lane_msgs::msg::LaneResults::_adjacent_right_type arg)
  {
    msg_.adjacent_right = std::move(arg);
    return Init_LaneResults_num_adjacent_right(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_num_adjacent_left
{
public:
  explicit Init_LaneResults_num_adjacent_left(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_adjacent_right num_adjacent_left(::tracked_lane_msgs::msg::LaneResults::_num_adjacent_left_type arg)
  {
    msg_.num_adjacent_left = std::move(arg);
    return Init_LaneResults_adjacent_right(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_adjacent_left
{
public:
  explicit Init_LaneResults_adjacent_left(::tracked_lane_msgs::msg::LaneResults & msg)
  : msg_(msg)
  {}
  Init_LaneResults_num_adjacent_left adjacent_left(::tracked_lane_msgs::msg::LaneResults::_adjacent_left_type arg)
  {
    msg_.adjacent_left = std::move(arg);
    return Init_LaneResults_num_adjacent_left(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

class Init_LaneResults_header
{
public:
  Init_LaneResults_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneResults_adjacent_left header(::tracked_lane_msgs::msg::LaneResults::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneResults_adjacent_left(msg_);
  }

private:
  ::tracked_lane_msgs::msg::LaneResults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracked_lane_msgs::msg::LaneResults>()
{
  return tracked_lane_msgs::msg::builder::Init_LaneResults_header();
}

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__BUILDER_HPP_
