// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tinker_vision_msgs:srv/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__BUILDER_HPP_
#define TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tinker_vision_msgs/srv/detail/object_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tinker_vision_msgs
{

namespace srv
{

namespace builder
{

class Init_ObjectDetection_Request_mode
{
public:
  Init_ObjectDetection_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tinker_vision_msgs::srv::ObjectDetection_Request mode(::tinker_vision_msgs::srv::ObjectDetection_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::srv::ObjectDetection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::srv::ObjectDetection_Request>()
{
  return tinker_vision_msgs::srv::builder::Init_ObjectDetection_Request_mode();
}

}  // namespace tinker_vision_msgs


namespace tinker_vision_msgs
{

namespace srv
{

namespace builder
{

class Init_ObjectDetection_Response_objects
{
public:
  explicit Init_ObjectDetection_Response_objects(::tinker_vision_msgs::srv::ObjectDetection_Response & msg)
  : msg_(msg)
  {}
  ::tinker_vision_msgs::srv::ObjectDetection_Response objects(::tinker_vision_msgs::srv::ObjectDetection_Response::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tinker_vision_msgs::srv::ObjectDetection_Response msg_;
};

class Init_ObjectDetection_Response_person_id
{
public:
  explicit Init_ObjectDetection_Response_person_id(::tinker_vision_msgs::srv::ObjectDetection_Response & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection_Response_objects person_id(::tinker_vision_msgs::srv::ObjectDetection_Response::_person_id_type arg)
  {
    msg_.person_id = std::move(arg);
    return Init_ObjectDetection_Response_objects(msg_);
  }

private:
  ::tinker_vision_msgs::srv::ObjectDetection_Response msg_;
};

class Init_ObjectDetection_Response_status
{
public:
  explicit Init_ObjectDetection_Response_status(::tinker_vision_msgs::srv::ObjectDetection_Response & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection_Response_person_id status(::tinker_vision_msgs::srv::ObjectDetection_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ObjectDetection_Response_person_id(msg_);
  }

private:
  ::tinker_vision_msgs::srv::ObjectDetection_Response msg_;
};

class Init_ObjectDetection_Response_header
{
public:
  Init_ObjectDetection_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetection_Response_status header(::tinker_vision_msgs::srv::ObjectDetection_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDetection_Response_status(msg_);
  }

private:
  ::tinker_vision_msgs::srv::ObjectDetection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tinker_vision_msgs::srv::ObjectDetection_Response>()
{
  return tinker_vision_msgs::srv::builder::Init_ObjectDetection_Response_header();
}

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__BUILDER_HPP_
