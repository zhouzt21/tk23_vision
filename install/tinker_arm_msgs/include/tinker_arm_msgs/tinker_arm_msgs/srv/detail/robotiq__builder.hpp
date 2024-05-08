// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_arm_msgs:srv/Robotiq.idl
// generated code does not contain a copyright notice

#ifndef TINKER_ARM_MSGS__SRV__DETAIL__ROBOTIQ__BUILDER_HPP_
#define TINKER_ARM_MSGS__SRV__DETAIL__ROBOTIQ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_arm_msgs/srv/detail/robotiq__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_Robotiq_Request_distance
{
public:
  Init_Robotiq_Request_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tinker_arm_msgs::srv::Robotiq_Request distance(::tinker_arm_msgs::srv::Robotiq_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_arm_msgs::srv::Robotiq_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_arm_msgs::srv::Robotiq_Request>()
{
  return tinker_arm_msgs::srv::builder::Init_Robotiq_Request_distance();
}

}  // namespace tinker_arm_msgs


namespace tinker_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_Robotiq_Response_success
{
public:
  Init_Robotiq_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tinker_arm_msgs::srv::Robotiq_Response success(::tinker_arm_msgs::srv::Robotiq_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_arm_msgs::srv::Robotiq_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_arm_msgs::srv::Robotiq_Response>()
{
  return tinker_arm_msgs::srv::builder::Init_Robotiq_Response_success();
}

}  // namespace tinker_arm_msgs

#endif  // TINKER_ARM_MSGS__SRV__DETAIL__ROBOTIQ__BUILDER_HPP_
