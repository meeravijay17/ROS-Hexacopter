// Generated by gencpp from file mavros/WaypointList.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_WAYPOINTLIST_H
#define MAVROS_MESSAGE_WAYPOINTLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mavros/Waypoint.h>

namespace mavros
{
template <class ContainerAllocator>
struct WaypointList_
{
  typedef WaypointList_<ContainerAllocator> Type;

  WaypointList_()
    : waypoints()  {
    }
  WaypointList_(const ContainerAllocator& _alloc)
    : waypoints(_alloc)  {
    }



   typedef std::vector< ::mavros::Waypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mavros::Waypoint_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;




  typedef boost::shared_ptr< ::mavros::WaypointList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros::WaypointList_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointList_

typedef ::mavros::WaypointList_<std::allocator<void> > WaypointList;

typedef boost::shared_ptr< ::mavros::WaypointList > WaypointListPtr;
typedef boost::shared_ptr< ::mavros::WaypointList const> WaypointListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros::WaypointList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros::WaypointList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mavros': ['/home/mahesh/catkin_ws/src/mavros/mavros/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros::WaypointList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros::WaypointList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::WaypointList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::WaypointList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::WaypointList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::WaypointList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros::WaypointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2a7f3a6be7e0cbb0a52883d59e82ee9";
  }

  static const char* value(const ::mavros::WaypointList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2a7f3a6be7e0cbbULL;
  static const uint64_t static_value2 = 0x0a52883d59e82ee9ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros::WaypointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/WaypointList";
  }

  static const char* value(const ::mavros::WaypointList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros::WaypointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/Waypoint[] waypoints\n\
\n\
================================================================================\n\
MSG: mavros/Waypoint\n\
# Waypoint.msg\n\
#\n\
# ROS representation of MAVLink MISSION_ITEM\n\
# See mavlink documentation\n\
\n\
\n\
\n\
# see enum MAV_FRAME\n\
uint8 frame\n\
uint8 FRAME_GLOBAL = 0\n\
uint8 FRAME_LOCAL_NED = 1\n\
uint8 FRAME_MISSION = 2\n\
uint8 FRAME_GLOBAL_REL_ALT = 3\n\
uint8 FRAME_LOCAL_ENU = 4\n\
\n\
# see enum MAV_CMD and CommandCode.msg\n\
uint16 command\n\
\n\
bool is_current\n\
bool autocontinue\n\
# meaning of this params described in enum MAV_CMD\n\
float32 param1\n\
float32 param2\n\
float32 param3\n\
float32 param4\n\
float64 x_lat\n\
float64 y_long\n\
float64 z_alt\n\
";
  }

  static const char* value(const ::mavros::WaypointList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros::WaypointList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct WaypointList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros::WaypointList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros::WaypointList_<ContainerAllocator>& v)
  {
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mavros::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MESSAGE_WAYPOINTLIST_H
