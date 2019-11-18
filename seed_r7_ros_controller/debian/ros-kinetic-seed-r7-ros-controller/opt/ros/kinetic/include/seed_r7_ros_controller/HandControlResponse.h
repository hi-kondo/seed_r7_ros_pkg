// Generated by gencpp from file seed_r7_ros_controller/HandControlResponse.msg
// DO NOT EDIT!


#ifndef SEED_R7_ROS_CONTROLLER_MESSAGE_HANDCONTROLRESPONSE_H
#define SEED_R7_ROS_CONTROLLER_MESSAGE_HANDCONTROLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace seed_r7_ros_controller
{
template <class ContainerAllocator>
struct HandControlResponse_
{
  typedef HandControlResponse_<ContainerAllocator> Type;

  HandControlResponse_()
    : result()  {
    }
  HandControlResponse_(const ContainerAllocator& _alloc)
    : result(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> const> ConstPtr;

}; // struct HandControlResponse_

typedef ::seed_r7_ros_controller::HandControlResponse_<std::allocator<void> > HandControlResponse;

typedef boost::shared_ptr< ::seed_r7_ros_controller::HandControlResponse > HandControlResponsePtr;
typedef boost::shared_ptr< ::seed_r7_ros_controller::HandControlResponse const> HandControlResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace seed_r7_ros_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c22f2a1ed8654a0b365f1bb3f7ff2c0f";
  }

  static const char* value(const ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc22f2a1ed8654a0bULL;
  static const uint64_t static_value2 = 0x365f1bb3f7ff2c0fULL;
};

template<class ContainerAllocator>
struct DataType< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "seed_r7_ros_controller/HandControlResponse";
  }

  static const char* value(const ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string result\n\
\n\
";
  }

  static const char* value(const ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HandControlResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::seed_r7_ros_controller::HandControlResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEED_R7_ROS_CONTROLLER_MESSAGE_HANDCONTROLRESPONSE_H
