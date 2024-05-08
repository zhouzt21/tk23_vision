// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE__STRUCT_HPP_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'box'
#include "tinker_vision_msgs/msg/detail/bounding_box__struct.hpp"
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__msg__Face __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__msg__Face __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Face_
{
  using Type = Face_<ContainerAllocator>;

  explicit Face_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_init),
    centroid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->age = 0l;
      this->gender = 0l;
      this->clothes = "";
      this->hair = "";
    }
  }

  explicit Face_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_alloc, _init),
    centroid(_alloc, _init),
    clothes(_alloc),
    hair(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->age = 0l;
      this->gender = 0l;
      this->clothes = "";
      this->hair = "";
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _box_type =
    tinker_vision_msgs::msg::BoundingBox_<ContainerAllocator>;
  _box_type box;
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;
  using _age_type =
    int32_t;
  _age_type age;
  using _gender_type =
    int32_t;
  _gender_type gender;
  using _clothes_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _clothes_type clothes;
  using _hair_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hair_type hair;
  using _info_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__box(
    const tinker_vision_msgs::msg::BoundingBox_<ContainerAllocator> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__age(
    const int32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__gender(
    const int32_t & _arg)
  {
    this->gender = _arg;
    return *this;
  }
  Type & set__clothes(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->clothes = _arg;
    return *this;
  }
  Type & set__hair(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hair = _arg;
    return *this;
  }
  Type & set__info(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::msg::Face_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::msg::Face_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::Face_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::msg::Face_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__msg__Face
    std::shared_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__msg__Face
    std::shared_ptr<tinker_vision_msgs::msg::Face_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Face_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->box != other.box) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->gender != other.gender) {
      return false;
    }
    if (this->clothes != other.clothes) {
      return false;
    }
    if (this->hair != other.hair) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Face_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Face_

// alias to use template instance with default allocator
using Face =
  tinker_vision_msgs::msg::Face_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE__STRUCT_HPP_
