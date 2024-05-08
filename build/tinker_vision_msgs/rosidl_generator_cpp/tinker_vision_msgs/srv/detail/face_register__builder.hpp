// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:srv/FaceRegister.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__BUILDER_HPP_
#define TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/srv/detail/face_register__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace srv
{

namespace builder
{

class Init_FaceRegister_Request_state
{
public:
  Init_FaceRegister_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tinker_vision_msgs::srv::FaceRegister_Request state(::tinker_vision_msgs::srv::FaceRegister_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::srv::FaceRegister_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::srv::FaceRegister_Request>()
{
  return tinker_vision_msgs::srv::builder::Init_FaceRegister_Request_state();
}

}  // namespace tinker_vision_msgs


namespace tinker_vision_msgs
{

namespace srv
{

namespace builder
{

class Init_FaceRegister_Response_info
{
public:
  explicit Init_FaceRegister_Response_info(::tinker_vision_msgs::srv::FaceRegister_Response & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::srv::FaceRegister_Response info(::tinker_vision_msgs::srv::FaceRegister_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::srv::FaceRegister_Response msg_;
};

class Init_FaceRegister_Response_id
{
public:
  explicit Init_FaceRegister_Response_id(::tinker_vision_msgs::srv::FaceRegister_Response & msg)
  : msg_(msg)
  {}
  Init_FaceRegister_Response_info id(::tinker_vision_msgs::srv::FaceRegister_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FaceRegister_Response_info(msg_);
  }

private:
  ::tinker_vision_msgs::srv::FaceRegister_Response msg_;
};

class Init_FaceRegister_Response_fail_info
{
public:
  explicit Init_FaceRegister_Response_fail_info(::tinker_vision_msgs::srv::FaceRegister_Response & msg)
  : msg_(msg)
  {}
  Init_FaceRegister_Response_id fail_info(::tinker_vision_msgs::srv::FaceRegister_Response::_fail_info_type arg)
  {
    msg_.fail_info = std::move(arg);
    return Init_FaceRegister_Response_id(msg_);
  }

private:
  ::tinker_vision_msgs::srv::FaceRegister_Response msg_;
};

class Init_FaceRegister_Response_success
{
public:
  Init_FaceRegister_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceRegister_Response_fail_info success(::tinker_vision_msgs::srv::FaceRegister_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FaceRegister_Response_fail_info(msg_);
  }

private:
  ::tinker_vision_msgs::srv::FaceRegister_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::srv::FaceRegister_Response>()
{
  return tinker_vision_msgs::srv::builder::Init_FaceRegister_Response_success();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__BUILDER_HPP_
