// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_arm_msgs:srv/URControlService.idl
// generated code does not contain a copyright notice

#ifndef TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__STRUCT_HPP_
#define TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tinker_arm_msgs__srv__URControlService_Request __attribute__((deprecated))
#else
# define DEPRECATED__tinker_arm_msgs__srv__URControlService_Request __declspec(deprecated)
#endif

namespace tinker_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct URControlService_Request_
{
  using Type = URControlService_Request_<ContainerAllocator>;

  explicit URControlService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    (void)_init;
  }

  explicit URControlService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_arm_msgs__srv__URControlService_Request
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_arm_msgs__srv__URControlService_Request
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const URControlService_Request_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const URControlService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct URControlService_Request_

// alias to use template instance with default allocator
using URControlService_Request =
  tinker_arm_msgs::srv::URControlService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tinker_arm_msgs


#ifndef _WIN32
# define DEPRECATED__tinker_arm_msgs__srv__URControlService_Response __attribute__((deprecated))
#else
# define DEPRECATED__tinker_arm_msgs__srv__URControlService_Response __declspec(deprecated)
#endif

namespace tinker_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct URControlService_Response_
{
  using Type = URControlService_Response_<ContainerAllocator>;

  explicit URControlService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit URControlService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_arm_msgs__srv__URControlService_Response
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_arm_msgs__srv__URControlService_Response
    std::shared_ptr<tinker_arm_msgs::srv::URControlService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const URControlService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const URControlService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct URControlService_Response_

// alias to use template instance with default allocator
using URControlService_Response =
  tinker_arm_msgs::srv::URControlService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tinker_arm_msgs

namespace tinker_arm_msgs
{

namespace srv
{

struct URControlService
{
  using Request = tinker_arm_msgs::srv::URControlService_Request;
  using Response = tinker_arm_msgs::srv::URControlService_Response;
};

}  // namespace srv

}  // namespace tinker_arm_msgs

#endif  // TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__STRUCT_HPP_
