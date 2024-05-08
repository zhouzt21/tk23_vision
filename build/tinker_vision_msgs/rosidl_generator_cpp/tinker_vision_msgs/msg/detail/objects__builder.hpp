// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/msg/detail/objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace msg
{

namespace builder
{

class Init_Objects_objects
{
public:
  explicit Init_Objects_objects(::tinker_vision_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::msg::Objects objects(::tinker_vision_msgs::msg::Objects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Objects msg_;
};

class Init_Objects_status
{
public:
  explicit Init_Objects_status(::tinker_vision_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  Init_Objects_objects status(::tinker_vision_msgs::msg::Objects::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Objects_objects(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Objects msg_;
};

class Init_Objects_header
{
public:
  Init_Objects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Objects_status header(::tinker_vision_msgs::msg::Objects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Objects_status(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Objects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::msg::Objects>()
{
  return tinker_vision_msgs::msg::builder::Init_Objects_header();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_
