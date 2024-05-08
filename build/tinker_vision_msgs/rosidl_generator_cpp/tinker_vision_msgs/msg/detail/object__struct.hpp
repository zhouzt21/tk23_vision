// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_vision_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroid'
// Member 'left_up'
// Member 'right_down'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__msg__Object __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_init),
    left_up(_init),
    right_down(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conf = 0.0f;
      this->id = 0;
      this->cls = "";
      this->intersect = false;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cls(_alloc),
    centroid(_alloc, _init),
    left_up(_alloc, _init),
    right_down(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conf = 0.0f;
      this->id = 0;
      this->cls = "";
      this->intersect = false;
    }
  }

  // field types and members
  using _conf_type =
    float;
  _conf_type conf;
  using _id_type =
    int16_t;
  _id_type id;
  using _cls_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cls_type cls;
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;
  using _intersect_type =
    bool;
  _intersect_type intersect;
  using _left_up_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _left_up_type left_up;
  using _right_down_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _right_down_type right_down;

  // setters for named parameter idiom
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__cls(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cls = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__intersect(
    const bool & _arg)
  {
    this->intersect = _arg;
    return *this;
  }
  Type & set__left_up(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->left_up = _arg;
    return *this;
  }
  Type & set__right_down(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->right_down = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__msg__Object
    std::shared_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__msg__Object
    std::shared_ptr<tinker_vision_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->conf != other.conf) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->cls != other.cls) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->intersect != other.intersect) {
      return false;
    }
    if (this->left_up != other.left_up) {
      return false;
    }
    if (this->right_down != other.right_down) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  tinker_vision_msgs::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
