// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_arm_msgs:srv/URControlService.idl
// generated code does not contain a copyright notice

#ifndef TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__BUILDER_HPP_
#define TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_arm_msgs/srv/detail/ur_control_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_URControlService_Request_target_pose
{
public:
  Init_URControlService_Request_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tinker_arm_msgs::srv::URControlService_Request target_pose(::tinker_arm_msgs::srv::URControlService_Request::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_arm_msgs::srv::URControlService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_arm_msgs::srv::URControlService_Request>()
{
  return tinker_arm_msgs::srv::builder::Init_URControlService_Request_target_pose();
}

}  // namespace tinker_arm_msgs


namespace tinker_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_URControlService_Response_success
{
public:
  Init_URControlService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tinker_arm_msgs::srv::URControlService_Response success(::tinker_arm_msgs::srv::URControlService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_arm_msgs::srv::URControlService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_arm_msgs::srv::URControlService_Response>()
{
  return tinker_arm_msgs::srv::builder::Init_URControlService_Response_success();
}

}  // namespace tinker_arm_msgs

#endif  // TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__BUILDER_HPP_
