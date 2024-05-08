// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tinker_vision_msgs:srv/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__TRAITS_HPP_
#define TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tinker_vision_msgs/srv/detail/object_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tinker_vision_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObjectDetection_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDetection_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetection_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tinker_vision_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tinker_vision_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tinker_vision_msgs::srv::ObjectDetection_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::srv::ObjectDetection_Request & msg)
{
  return tinker_vision_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::srv::ObjectDetection_Request>()
{
  return "tinker_vision_msgs::srv::ObjectDetection_Request";
}

template<>
inline const char * name<tinker_vision_msgs::srv::ObjectDetection_Request>()
{
  return "tinker_vision_msgs/srv/ObjectDetection_Request";
}

template<>
struct has_fixed_size<tinker_vision_msgs::srv::ObjectDetection_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tinker_vision_msgs::srv::ObjectDetection_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tinker_vision_msgs::srv::ObjectDetection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects'
#include "tinker_vision_msgs/msg/detail/object__traits.hpp"

namespace tinker_vision_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObjectDetection_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: person_id
  {
    out << "person_id: ";
    rosidl_generator_traits::value_to_yaml(msg.person_id, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
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
  const ObjectDetection_Response & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: person_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "person_id: ";
    rosidl_generator_traits::value_to_yaml(msg.person_id, out);
    out << "\n";
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetection_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tinker_vision_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tinker_vision_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tinker_vision_msgs::srv::ObjectDetection_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::srv::ObjectDetection_Response & msg)
{
  return tinker_vision_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::srv::ObjectDetection_Response>()
{
  return "tinker_vision_msgs::srv::ObjectDetection_Response";
}

template<>
inline const char * name<tinker_vision_msgs::srv::ObjectDetection_Response>()
{
  return "tinker_vision_msgs/srv/ObjectDetection_Response";
}

template<>
struct has_fixed_size<tinker_vision_msgs::srv::ObjectDetection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tinker_vision_msgs::srv::ObjectDetection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tinker_vision_msgs::srv::ObjectDetection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tinker_vision_msgs::srv::ObjectDetection>()
{
  return "tinker_vision_msgs::srv::ObjectDetection";
}

template<>
inline const char * name<tinker_vision_msgs::srv::ObjectDetection>()
{
  return "tinker_vision_msgs/srv/ObjectDetection";
}

template<>
struct has_fixed_size<tinker_vision_msgs::srv::ObjectDetection>
  : std::integral_constant<
    bool,
    has_fixed_size<tinker_vision_msgs::srv::ObjectDetection_Request>::value &&
    has_fixed_size<tinker_vision_msgs::srv::ObjectDetection_Response>::value
  >
{
};

template<>
struct has_bounded_size<tinker_vision_msgs::srv::ObjectDetection>
  : std::integral_constant<
    bool,
    has_bounded_size<tinker_vision_msgs::srv::ObjectDetection_Request>::value &&
    has_bounded_size<tinker_vision_msgs::srv::ObjectDetection_Response>::value
  >
{
};

template<>
struct is_service<tinker_vision_msgs::srv::ObjectDetection>
  : std::true_type
{
};

template<>
struct is_service_request<tinker_vision_msgs::srv::ObjectDetection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tinker_vision_msgs::srv::ObjectDetection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__TRAITS_HPP_
