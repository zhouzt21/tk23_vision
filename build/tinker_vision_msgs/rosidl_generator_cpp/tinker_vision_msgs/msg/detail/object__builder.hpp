// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_right_down
{
public:
  explicit Init_Object_right_down(::tinker_vision_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::msg::Object right_down(::tinker_vision_msgs::msg::Object::_right_down_type arg)
  {
    msg_.right_down = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

class Init_Object_left_up
{
public:
  explicit Init_Object_left_up(::tinker_vision_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_right_down left_up(::tinker_vision_msgs::msg::Object::_left_up_type arg)
  {
    msg_.left_up = std::move(arg);
    return Init_Object_right_down(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

class Init_Object_intersect
{
public:
  explicit Init_Object_intersect(::tinker_vision_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_left_up intersect(::tinker_vision_msgs::msg::Object::_intersect_type arg)
  {
    msg_.intersect = std::move(arg);
    return Init_Object_left_up(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

class Init_Object_centroid
{
public:
  explicit Init_Object_centroid(::tinker_vision_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_intersect centroid(::tinker_vision_msgs::msg::Object::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_Object_intersect(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

class Init_Object_cls
{
public:
  explicit Init_Object_cls(::tinker_vision_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_centroid cls(::tinker_vision_msgs::msg::Object::_cls_type arg)
  {
    msg_.cls = std::move(arg);
    return Init_Object_centroid(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::tinker_vision_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_cls id(::tinker_vision_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_cls(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

class Init_Object_conf
{
public:
  Init_Object_conf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_id conf(::tinker_vision_msgs::msg::Object::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::msg::Object>()
{
  return tinker_vision_msgs::msg::builder::Init_Object_conf();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
