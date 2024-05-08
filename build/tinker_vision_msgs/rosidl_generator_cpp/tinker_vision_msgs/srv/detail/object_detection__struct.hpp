// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_vision_msgs:srv/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__STRUCT_HPP_
#define TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Request __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Request __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection_Request_
{
  using Type = ObjectDetection_Request_<ContainerAllocator>;

  explicit ObjectDetection_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
    }
  }

  explicit ObjectDetection_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
    }
  }

  // field types and members
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Request
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Request
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection_Request_

// alias to use template instance with default allocator
using ObjectDetection_Request =
  tinker_vision_msgs::srv::ObjectDetection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tinker_vision_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'objects'
#include "tinker_vision_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Response __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Response __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection_Response_
{
  using Type = ObjectDetection_Response_<ContainerAllocator>;

  explicit ObjectDetection_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
      this->person_id = 0l;
    }
  }

  explicit ObjectDetection_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
      this->person_id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    int32_t;
  _status_type status;
  using _person_id_type =
    int32_t;
  _person_id_type person_id;
  using _objects_type =
    std::vector<tinker_vision_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tinker_vision_msgs::msg::Object_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__person_id(
    const int32_t & _arg)
  {
    this->person_id = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<tinker_vision_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tinker_vision_msgs::msg::Object_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Response
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__srv__ObjectDetection_Response
    std::shared_ptr<tinker_vision_msgs::srv::ObjectDetection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->person_id != other.person_id) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection_Response_

// alias to use template instance with default allocator
using ObjectDetection_Response =
  tinker_vision_msgs::srv::ObjectDetection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tinker_vision_msgs

namespace tinker_vision_msgs
{

namespace srv
{

struct ObjectDetection
{
  using Request = tinker_vision_msgs::srv::ObjectDetection_Request;
  using Response = tinker_vision_msgs::srv::ObjectDetection_Response;
};

}  // namespace srv

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__STRUCT_HPP_
