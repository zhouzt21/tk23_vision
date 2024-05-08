// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE__TRAITS_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tinker_vision_msgs/msg/detail/face__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'box'
#include "tinker_vision_msgs/msg/detail/bounding_box__traits.hpp"
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tinker_vision_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Face & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: box
  {
    out << "box: ";
    to_flow_style_yaml(msg.box, out);
    out << ", ";
  }

  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: gender
  {
    out << "gender: ";
    rosidl_generator_traits::value_to_yaml(msg.gender, out);
    out << ", ";
  }

  // member: clothes
  {
    out << "clothes: ";
    rosidl_generator_traits::value_to_yaml(msg.clothes, out);
    out << ", ";
  }

  // member: hair
  {
    out << "hair: ";
    rosidl_generator_traits::value_to_yaml(msg.hair, out);
    out << ", ";
  }

  // member: info
  {
    if (msg.info.size() == 0) {
      out << "info: []";
    } else {
      out << "info: [";
      size_t pending_items = msg.info.size();
      for (auto item : msg.info) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Face & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box:\n";
    to_block_style_yaml(msg.box, out, indentation + 2);
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: gender
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gender: ";
    rosidl_generator_traits::value_to_yaml(msg.gender, out);
    out << "\n";
  }

  // member: clothes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clothes: ";
    rosidl_generator_traits::value_to_yaml(msg.clothes, out);
    out << "\n";
  }

  // member: hair
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hair: ";
    rosidl_generator_traits::value_to_yaml(msg.hair, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.info.size() == 0) {
      out << "info: []\n";
    } else {
      out << "info:\n";
      for (auto item : msg.info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Face & msg, bool use_flow_style = false)
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
  const tinker_vision_msgs::msg::Face & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::msg::Face & msg)
{
  return tinker_vision_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::msg::Face>()
{
  return "tinker_vision_msgs::msg::Face";
}

template<>
inline const char * name<tinker_vision_msgs::msg::Face>()
{
  return "tinker_vision_msgs/msg/Face";
}

template<>
struct has_fixed_size<tinker_vision_msgs::msg::Face>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tinker_vision_msgs::msg::Face>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tinker_vision_msgs::msg::Face>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE__TRAITS_HPP_
