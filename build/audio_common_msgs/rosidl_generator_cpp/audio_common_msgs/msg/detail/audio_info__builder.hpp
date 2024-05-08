// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/msg/detail/audio_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioInfo_coding_format
{
public:
  explicit Init_AudioInfo_coding_format(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::AudioInfo coding_format(::audio_common_msgs::msg::AudioInfo::_coding_format_type arg)
  {
    msg_.coding_format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_bitrate
{
public:
  explicit Init_AudioInfo_bitrate(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_coding_format bitrate(::audio_common_msgs::msg::AudioInfo::_bitrate_type arg)
  {
    msg_.bitrate = std::move(arg);
    return Init_AudioInfo_coding_format(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_sample_format
{
public:
  explicit Init_AudioInfo_sample_format(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_bitrate sample_format(::audio_common_msgs::msg::AudioInfo::_sample_format_type arg)
  {
    msg_.sample_format = std::move(arg);
    return Init_AudioInfo_bitrate(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_sample_rate
{
public:
  explicit Init_AudioInfo_sample_rate(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_sample_format sample_rate(::audio_common_msgs::msg::AudioInfo::_sample_rate_type arg)
  {
    msg_.sample_rate = std::move(arg);
    return Init_AudioInfo_sample_format(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_channels
{
public:
  Init_AudioInfo_channels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioInfo_sample_rate channels(::audio_common_msgs::msg::AudioInfo::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_AudioInfo_sample_rate(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::AudioInfo>()
{
  return audio_common_msgs::msg::builder::Init_AudioInfo_channels();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_
