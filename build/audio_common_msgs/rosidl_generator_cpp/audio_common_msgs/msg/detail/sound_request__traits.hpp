// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/msg/detail/sound_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SoundRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: sound
  {
    out << "sound: ";
    rosidl_generator_traits::value_to_yaml(msg.sound, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << ", ";
  }

  // member: arg
  {
    out << "arg: ";
    rosidl_generator_traits::value_to_yaml(msg.arg, out);
    out << ", ";
  }

  // member: arg2
  {
    out << "arg2: ";
    rosidl_generator_traits::value_to_yaml(msg.arg2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound: ";
    rosidl_generator_traits::value_to_yaml(msg.sound, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << "\n";
  }

  // member: arg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arg: ";
    rosidl_generator_traits::value_to_yaml(msg.arg, out);
    out << "\n";
  }

  // member: arg2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arg2: ";
    rosidl_generator_traits::value_to_yaml(msg.arg2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::msg::SoundRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::msg::SoundRequest & msg)
{
  return audio_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::msg::SoundRequest>()
{
  return "audio_common_msgs::msg::SoundRequest";
}

template<>
inline const char * name<audio_common_msgs::msg::SoundRequest>()
{
  return "audio_common_msgs/msg/SoundRequest";
}

template<>
struct has_fixed_size<audio_common_msgs::msg::SoundRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_common_msgs::msg::SoundRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_common_msgs::msg::SoundRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__TRAITS_HPP_
