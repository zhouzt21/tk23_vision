// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_vision_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__STRUCT_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__STRUCT_HPP_

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
// Member 'objects'
#include "tinker_vision_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__msg__Objects __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__msg__Objects __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Objects_
{
  using Type = Objects_<ContainerAllocator>;

  explicit Objects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  explicit Objects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    int32_t;
  _status_type status;
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
  Type & set__objects(
    const std::vector<tinker_vision_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tinker_vision_msgs::msg::Object_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::msg::Objects_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::msg::Objects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::Objects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::Objects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__msg__Objects
    std::shared_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__msg__Objects
    std::shared_ptr<tinker_vision_msgs::msg::Objects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Objects_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Objects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Objects_

// alias to use template instance with default allocator
using Objects =
  tinker_vision_msgs::msg::Objects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__STRUCT_HPP_
