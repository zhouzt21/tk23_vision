// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tinker_vision_msgs:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__TRAITS_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tinker_vision_msgs/msg/detail/face_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'faces'
#include "tinker_vision_msgs/msg/detail/face__traits.hpp"

namespace tinker_vision_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaceResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: faces
  {
    if (msg.faces.size() == 0) {
      out << "faces: []";
    } else {
      out << "faces: [";
      size_t pending_items = msg.faces.size();
      for (auto item : msg.faces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: fail_info
  {
    out << "fail_info: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: faces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faces.size() == 0) {
      out << "faces: []\n";
    } else {
      out << "faces:\n";
      for (auto item : msg.faces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: fail_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_info: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceResult & msg, bool use_flow_style = false)
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

}  // namespace tinker_vision_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tinker_vision_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tinker_vision_msgs::msg::FaceResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::msg::FaceResult & msg)
{
  return tinker_vision_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::msg::FaceResult>()
{
  return "tinker_vision_msgs::msg::FaceResult";
}

template<>
inline const char * name<tinker_vision_msgs::msg::FaceResult>()
{
  return "tinker_vision_msgs/msg/FaceResult";
}

template<>
struct has_fixed_size<tinker_vision_msgs::msg::FaceResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tinker_vision_msgs::msg::FaceResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tinker_vision_msgs::msg::FaceResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__TRAITS_HPP_
