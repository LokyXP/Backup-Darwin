// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/NeckPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__NeckPosition __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__NeckPosition __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NeckPosition_
{
  using Type = NeckPosition_<ContainerAllocator>;

  explicit NeckPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->position19 = 2048l;
      this->position20 = 2048l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->position19 = 0l;
      this->position20 = 0l;
    }
  }

  explicit NeckPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->position19 = 2048l;
      this->position20 = 2048l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->position19 = 0l;
      this->position20 = 0l;
    }
  }

  // field types and members
  using _position19_type =
    int32_t;
  _position19_type position19;
  using _position20_type =
    int32_t;
  _position20_type position20;

  // setters for named parameter idiom
  Type & set__position19(
    const int32_t & _arg)
  {
    this->position19 = _arg;
    return *this;
  }
  Type & set__position20(
    const int32_t & _arg)
  {
    this->position20 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::NeckPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::NeckPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::NeckPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::NeckPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__NeckPosition
    std::shared_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__NeckPosition
    std::shared_ptr<custom_interfaces::msg::NeckPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NeckPosition_ & other) const
  {
    if (this->position19 != other.position19) {
      return false;
    }
    if (this->position20 != other.position20) {
      return false;
    }
    return true;
  }
  bool operator!=(const NeckPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NeckPosition_

// alias to use template instance with default allocator
using NeckPosition =
  custom_interfaces::msg::NeckPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__STRUCT_HPP_
