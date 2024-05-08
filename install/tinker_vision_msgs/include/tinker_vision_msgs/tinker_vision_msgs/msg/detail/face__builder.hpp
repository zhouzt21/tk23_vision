// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE__BUILDER_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/msg/detail/face__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace msg
{

namespace builder
{

class Init_Face_info
{
public:
  explicit Init_Face_info(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::msg::Face info(::tinker_vision_msgs::msg::Face::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_hair
{
public:
  explicit Init_Face_hair(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_info hair(::tinker_vision_msgs::msg::Face::_hair_type arg)
  {
    msg_.hair = std::move(arg);
    return Init_Face_info(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_clothes
{
public:
  explicit Init_Face_clothes(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_hair clothes(::tinker_vision_msgs::msg::Face::_clothes_type arg)
  {
    msg_.clothes = std::move(arg);
    return Init_Face_hair(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_gender
{
public:
  explicit Init_Face_gender(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_clothes gender(::tinker_vision_msgs::msg::Face::_gender_type arg)
  {
    msg_.gender = std::move(arg);
    return Init_Face_clothes(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_age
{
public:
  explicit Init_Face_age(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_gender age(::tinker_vision_msgs::msg::Face::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Face_gender(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_centroid
{
public:
  explicit Init_Face_centroid(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_age centroid(::tinker_vision_msgs::msg::Face::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_Face_age(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_box
{
public:
  explicit Init_Face_box(::tinker_vision_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_centroid box(::tinker_vision_msgs::msg::Face::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_Face_centroid(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

class Init_Face_id
{
public:
  Init_Face_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Face_box id(::tinker_vision_msgs::msg::Face::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Face_box(msg_);
  }

private:
  ::tinker_vision_msgs::msg::Face msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::msg::Face>()
{
  return tinker_vision_msgs::msg::builder::Init_Face_id();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE__BUILDER_HPP_
