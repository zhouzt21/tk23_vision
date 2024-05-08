// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tinker_vision_msgs:srv/FaceRegister.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__TRAITS_HPP_
#define TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tinker_vision_msgs/srv/detail/face_register__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tinker_vision_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceRegister_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceRegister_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceRegister_Request & msg, bool use_flow_style = false)
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
  const tinker_vision_msgs::srv::FaceRegister_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::srv::FaceRegister_Request & msg)
{
  return tinker_vision_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::srv::FaceRegister_Request>()
{
  return "tinker_vision_msgs::srv::FaceRegister_Request";
}

template<>
inline const char * name<tinker_vision_msgs::srv::FaceRegister_Request>()
{
  return "tinker_vision_msgs/srv/FaceRegister_Request";
}

template<>
struct has_fixed_size<tinker_vision_msgs::srv::FaceRegister_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tinker_vision_msgs::srv::FaceRegister_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tinker_vision_msgs::srv::FaceRegister_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tinker_vision_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceRegister_Response & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: id
  {
    if (msg.id.size() == 0) {
      out << "id: []";
    } else {
      out << "id: [";
      size_t pending_items = msg.id.size();
      for (auto item : msg.id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceRegister_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id.size() == 0) {
      out << "id: []\n";
    } else {
      out << "id:\n";
      for (auto item : msg.id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceRegister_Response & msg, bool use_flow_style = false)
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
  const tinker_vision_msgs::srv::FaceRegister_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_vision_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_vision_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tinker_vision_msgs::srv::FaceRegister_Response & msg)
{
  return tinker_vision_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_vision_msgs::srv::FaceRegister_Response>()
{
  return "tinker_vision_msgs::srv::FaceRegister_Response";
}

template<>
inline const char * name<tinker_vision_msgs::srv::FaceRegister_Response>()
{
  return "tinker_vision_msgs/srv/FaceRegister_Response";
}

template<>
struct has_fixed_size<tinker_vision_msgs::srv::FaceRegister_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tinker_vision_msgs::srv::FaceRegister_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tinker_vision_msgs::srv::FaceRegister_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tinker_vision_msgs::srv::FaceRegister>()
{
  return "tinker_vision_msgs::srv::FaceRegister";
}

template<>
inline const char * name<tinker_vision_msgs::srv::FaceRegister>()
{
  return "tinker_vision_msgs/srv/FaceRegister";
}

template<>
struct has_fixed_size<tinker_vision_msgs::srv::FaceRegister>
  : std::integral_constant<
    bool,
    has_fixed_size<tinker_vision_msgs::srv::FaceRegister_Request>::value &&
    has_fixed_size<tinker_vision_msgs::srv::FaceRegister_Response>::value
  >
{
};

template<>
struct has_bounded_size<tinker_vision_msgs::srv::FaceRegister>
  : std::integral_constant<
    bool,
    has_bounded_size<tinker_vision_msgs::srv::FaceRegister_Request>::value &&
    has_bounded_size<tinker_vision_msgs::srv::FaceRegister_Response>::value
  >
{
};

template<>
struct is_service<tinker_vision_msgs::srv::FaceRegister>
  : std::true_type
{
};

template<>
struct is_service_request<tinker_vision_msgs::srv::FaceRegister_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tinker_vision_msgs::srv::FaceRegister_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__TRAITS_HPP_
