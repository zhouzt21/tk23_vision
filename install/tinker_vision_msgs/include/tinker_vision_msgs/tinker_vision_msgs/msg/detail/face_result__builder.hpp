// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__BUILDER_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/msg/detail/face_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace msg
{

namespace builder
{

class Init_FaceResult_fail_info
{
public:
  explicit Init_FaceResult_fail_info(::tinker_vision_msgs::msg::FaceResult & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::msg::FaceResult fail_info(::tinker_vision_msgs::msg::FaceResult::_fail_info_type arg)
  {
    msg_.fail_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::msg::FaceResult msg_;
};

class Init_FaceResult_success
{
public:
  explicit Init_FaceResult_success(::tinker_vision_msgs::msg::FaceResult & msg)
  : msg_(msg)
  {}
  Init_FaceResult_fail_info success(::tinker_vision_msgs::msg::FaceResult::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FaceResult_fail_info(msg_);
  }

private:
  ::tinker_vision_msgs::msg::FaceResult msg_;
};

class Init_FaceResult_faces
{
public:
  explicit Init_FaceResult_faces(::tinker_vision_msgs::msg::FaceResult & msg)
  : msg_(msg)
  {}
  Init_FaceResult_success faces(::tinker_vision_msgs::msg::FaceResult::_faces_type arg)
  {
    msg_.faces = std::move(arg);
    return Init_FaceResult_success(msg_);
  }

private:
  ::tinker_vision_msgs::msg::FaceResult msg_;
};

class Init_FaceResult_header
{
public:
  Init_FaceResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceResult_faces header(::tinker_vision_msgs::msg::FaceResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FaceResult_faces(msg_);
  }

private:
  ::tinker_vision_msgs::msg::FaceResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::msg::FaceResult>()
{
  return tinker_vision_msgs::msg::builder::Init_FaceResult_header();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__BUILDER_HPP_
