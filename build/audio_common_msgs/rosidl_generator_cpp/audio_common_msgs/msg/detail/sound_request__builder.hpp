// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/msg/detail/sound_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_SoundRequest_arg2
{
public:
  explicit Init_SoundRequest_arg2(::audio_common_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::SoundRequest arg2(::audio_common_msgs::msg::SoundRequest::_arg2_type arg)
  {
    msg_.arg2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_arg
{
public:
  explicit Init_SoundRequest_arg(::audio_common_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_arg2 arg(::audio_common_msgs::msg::SoundRequest::_arg_type arg)
  {
    msg_.arg = std::move(arg);
    return Init_SoundRequest_arg2(msg_);
  }

private:
  ::audio_common_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_volume
{
public:
  explicit Init_SoundRequest_volume(::audio_common_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_arg volume(::audio_common_msgs::msg::SoundRequest::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_SoundRequest_arg(msg_);
  }

private:
  ::audio_common_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_command
{
public:
  explicit Init_SoundRequest_command(::audio_common_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_volume command(::audio_common_msgs::msg::SoundRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SoundRequest_volume(msg_);
  }

private:
  ::audio_common_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_sound
{
public:
  Init_SoundRequest_sound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_command sound(::audio_common_msgs::msg::SoundRequest::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return Init_SoundRequest_command(msg_);
  }

private:
  ::audio_common_msgs::msg::SoundRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::SoundRequest>()
{
  return audio_common_msgs::msg::builder::Init_SoundRequest_sound();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_
