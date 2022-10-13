// Generated by gencpp from file lightrover_ros/Wrc201MsgResponse.msg
// DO NOT EDIT!


#ifndef LIGHTROVER_ROS_MESSAGE_WRC201MSGRESPONSE_H
#define LIGHTROVER_ROS_MESSAGE_WRC201MSGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lightrover_ros
{
template <class ContainerAllocator>
struct Wrc201MsgResponse_
{
  typedef Wrc201MsgResponse_<ContainerAllocator> Type;

  Wrc201MsgResponse_()
    : readData(0)  {
    }
  Wrc201MsgResponse_(const ContainerAllocator& _alloc)
    : readData(0)  {
  (void)_alloc;
    }



   typedef int64_t _readData_type;
  _readData_type readData;





  typedef boost::shared_ptr< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Wrc201MsgResponse_

typedef ::lightrover_ros::Wrc201MsgResponse_<std::allocator<void> > Wrc201MsgResponse;

typedef boost::shared_ptr< ::lightrover_ros::Wrc201MsgResponse > Wrc201MsgResponsePtr;
typedef boost::shared_ptr< ::lightrover_ros::Wrc201MsgResponse const> Wrc201MsgResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator1> & lhs, const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator2> & rhs)
{
  return lhs.readData == rhs.readData;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator1> & lhs, const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lightrover_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a9bb19b99dd5cd1f25961fbb1821b83";
  }

  static const char* value(const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a9bb19b99dd5cd1ULL;
  static const uint64_t static_value2 = 0xf25961fbb1821b83ULL;
};

template<class ContainerAllocator>
struct DataType< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lightrover_ros/Wrc201MsgResponse";
  }

  static const char* value(const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 readData\n"
"\n"
;
  }

  static const char* value(const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.readData);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Wrc201MsgResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lightrover_ros::Wrc201MsgResponse_<ContainerAllocator>& v)
  {
    s << indent << "readData: ";
    Printer<int64_t>::stream(s, indent + "  ", v.readData);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIGHTROVER_ROS_MESSAGE_WRC201MSGRESPONSE_H