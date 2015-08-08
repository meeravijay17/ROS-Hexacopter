// Generated by gencpp from file mavros/CommandTriggerControlResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_COMMANDTRIGGERCONTROLRESPONSE_H
#define MAVROS_MESSAGE_COMMANDTRIGGERCONTROLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros
{
template <class ContainerAllocator>
struct CommandTriggerControlResponse_
{
  typedef CommandTriggerControlResponse_<ContainerAllocator> Type;

  CommandTriggerControlResponse_()
    : success(false)
    , result(0)  {
    }
  CommandTriggerControlResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , result(0)  {
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef uint8_t _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CommandTriggerControlResponse_

typedef ::mavros::CommandTriggerControlResponse_<std::allocator<void> > CommandTriggerControlResponse;

typedef boost::shared_ptr< ::mavros::CommandTriggerControlResponse > CommandTriggerControlResponsePtr;
typedef boost::shared_ptr< ::mavros::CommandTriggerControlResponse const> CommandTriggerControlResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros::CommandTriggerControlResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mavros': ['/home/mahesh/catkin_ws/src/mavros/mavros/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1cd894375e4e3d2861d2222772894fdb";
  }

  static const char* value(const ::mavros::CommandTriggerControlResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1cd894375e4e3d28ULL;
  static const uint64_t static_value2 = 0x61d2222772894fdbULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/CommandTriggerControlResponse";
  }

  static const char* value(const ::mavros::CommandTriggerControlResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
uint8 result\n\
\n\
";
  }

  static const char* value(const ::mavros::CommandTriggerControlResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CommandTriggerControlResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros::CommandTriggerControlResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros::CommandTriggerControlResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MESSAGE_COMMANDTRIGGERCONTROLRESPONSE_H
