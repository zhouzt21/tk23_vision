// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::tinker_vision_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::msg::BoundingBox ymax(::tinker_vision_msgs::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::tinker_vision_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::tinker_vision_msgs::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::tinker_vision_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::tinker_vision_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::tinker_vision_msgs::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::tinker_vision_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  Init_BoundingBox_xmin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_ymin xmin(::tinker_vision_msgs::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::tinker_vision_msgs::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::msg::BoundingBox>()
{
  return tinker_vision_msgs::msg::builder::Init_BoundingBox_xmin();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
