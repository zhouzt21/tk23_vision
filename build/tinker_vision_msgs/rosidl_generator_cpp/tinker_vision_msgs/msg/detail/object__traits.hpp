// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tinker_vision_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tinker_vision_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroid'
// Member 'left_up'
// Member 'right_down'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tinker_vision_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: cls
  {
    out << "cls: ";
    rosidl_generator_traits::value_to_yaml(msg.cls, out);
    out << ", ";
  }

  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
    out << ", ";
  }

  // member: intersect
  {
    out << "intersect: ";
    rosidl_generator_traits::value_to_yaml(msg.intersect, out);
    out << ", ";
  }

  // member: left_up
  {
    out << "left_up: ";
    to_flow_style_yaml(msg.left_up, out);
    out << ", ";
  }

  // member: right_down
  {
    out << "right_down: ";
    to_flow_style_yaml(msg.right_down, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: cls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cls: ";
    rosidl_generator_traits::value_to_yaml(msg.cls, out);
    out << "\n";
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }

  // member: intersect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersect: ";
    rosidl_generator_traits::value_to_yaml(msg.intersect, out);
    out << "\n";
  }

  // member: left_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_up:\n";
    to_block_style_yaml(msg.left_up, out, indentation + 2);
  }

  // member: right_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_down:\n";
    to_block_style_yaml(msg.right_down, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const tinker_vision_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::msg::Object & msg)
{
  return tinker_vision_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::msg::Object>()
{
  return "tinker_vision_msgs::msg::Object";
}

template<>
inline const char * name<tinker_vision_msgs::msg::Object>()
{
  return "tinker_vision_msgs/msg/Object";
}

template<>
struct has_fixed_size<tinker_vision_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tinker_vision_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tinker_vision_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
