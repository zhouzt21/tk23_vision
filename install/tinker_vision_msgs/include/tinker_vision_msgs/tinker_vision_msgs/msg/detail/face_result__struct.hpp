// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_vision_msgs:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__STRUCT_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'faces'
#include "tinker_vision_msgs/msg/detail/face__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__msg__FaceResult __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__msg__FaceResult __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceResult_
{
  using Type = FaceResult_<ContainerAllocator>;

  explicit FaceResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->fail_info = "";
    }
  }

  explicit FaceResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fail_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->fail_info = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _faces_type =
    std::vector<tinker_vision_msgs::msg::Face_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tinker_vision_msgs::msg::Face_<ContainerAllocator>>>;
  _faces_type faces;
  using _success_type =
    bool;
  _success_type success;
  using _fail_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fail_info_type fail_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__faces(
    const std::vector<tinker_vision_msgs::msg::Face_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tinker_vision_msgs::msg::Face_<ContainerAllocator>>> & _arg)
  {
    this->faces = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__fail_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fail_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::msg::FaceResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::msg::FaceResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::FaceResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::FaceResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__msg__FaceResult
    std::shared_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__msg__FaceResult
    std::shared_ptr<tinker_vision_msgs::msg::FaceResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->faces != other.faces) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->fail_info != other.fail_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceResult_

// alias to use template instance with default allocator
using FaceResult =
  tinker_vision_msgs::msg::FaceResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__STRUCT_HPP_
