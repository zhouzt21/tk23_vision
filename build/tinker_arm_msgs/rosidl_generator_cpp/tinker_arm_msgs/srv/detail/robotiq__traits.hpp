// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tinker_arm_msgs:srv/Robotiq.idl
// generated code does not contain a copyright notice

#ifndef TINKER_ARM_MSGS__SRV__DETAIL__ROBOTIQ__TRAITS_HPP_
#define TINKER_ARM_MSGS__SRV__DETAIL__ROBOTIQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tinker_arm_msgs/srv/detail/robotiq__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tinker_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Robotiq_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq_Request & msg, bool use_flow_style = false)
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

}  // namespace tinker_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tinker_arm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tinker_arm_msgs::srv::Robotiq_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tinker_arm_msgs::srv::Robotiq_Request & msg)
{
  return tinker_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_arm_msgs::srv::Robotiq_Request>()
{
  return "tinker_arm_msgs::srv::Robotiq_Request";
}

template<>
inline const char * name<tinker_arm_msgs::srv::Robotiq_Request>()
{
  return "tinker_arm_msgs/srv/Robotiq_Request";
}

template<>
struct has_fixed_size<tinker_arm_msgs::srv::Robotiq_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tinker_arm_msgs::srv::Robotiq_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tinker_arm_msgs::srv::Robotiq_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tinker_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Robotiq_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq_Response & msg, bool use_flow_style = false)
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

}  // namespace tinker_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tinker_arm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tinker_arm_msgs::srv::Robotiq_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tinker_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tinker_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tinker_arm_msgs::srv::Robotiq_Response & msg)
{
  return tinker_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tinker_arm_msgs::srv::Robotiq_Response>()
{
  return "tinker_arm_msgs::srv::Robotiq_Response";
}

template<>
inline const char * name<tinker_arm_msgs::srv::Robotiq_Response>()
{
  return "tinker_arm_msgs/srv/Robotiq_Response";
}

template<>
struct has_fixed_size<tinker_arm_msgs::srv::Robotiq_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tinker_arm_msgs::srv::Robotiq_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tinker_arm_msgs::srv::Robotiq_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tinker_arm_msgs::srv::Robotiq>()
{
  return "tinker_arm_msgs::srv::Robotiq";
}

template<>
inline const char * name<tinker_arm_msgs::srv::Robotiq>()
{
  return "tinker_arm_msgs/srv/Robotiq";
}

template<>
struct has_fixed_size<tinker_arm_msgs::srv::Robotiq>
  : std::integral_constant<
    bool,
    has_fixed_size<tinker_arm_msgs::srv::Robotiq_Request>::value &&
    has_fixed_size<tinker_arm_msgs::srv::Robotiq_Response>::value
  >
{
};

template<>
struct has_bounded_size<tinker_arm_msgs::srv::Robotiq>
  : std::integral_constant<
    bool,
    has_bounded_size<tinker_arm_msgs::srv::Robotiq_Request>::value &&
    has_bounded_size<tinker_arm_msgs::srv::Robotiq_Response>::value
  >
{
};

template<>
struct is_service<tinker_arm_msgs::srv::Robotiq>
  : std::true_type
{
};

template<>
struct is_service_request<tinker_arm_msgs::srv::Robotiq_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tinker_arm_msgs::srv::Robotiq_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TINKER_ARM_MSGS__SRV__DETAIL__ROBOTIQ__TRAITS_HPP_
