// Generated by gencpp from file lsd_slam_viewer/keyframeMsg.msg
// DO NOT EDIT!


#ifndef LSD_SLAM_VIEWER_MESSAGE_KEYFRAMEMSG_H
#define LSD_SLAM_VIEWER_MESSAGE_KEYFRAMEMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lsd_slam_viewer
{
template <class ContainerAllocator>
struct keyframeMsg_
{
  typedef keyframeMsg_<ContainerAllocator> Type;

  keyframeMsg_()
    : id(0)
    , time(0.0)
    , isKeyframe(false)
    , camToWorld()
    , fx(0.0)
    , fy(0.0)
    , cx(0.0)
    , cy(0.0)
    , height(0)
    , width(0)
    , pointcloud()  {
      camToWorld.assign(0.0);
  }
  keyframeMsg_(const ContainerAllocator& _alloc)
    : id(0)
    , time(0.0)
    , isKeyframe(false)
    , camToWorld()
    , fx(0.0)
    , fy(0.0)
    , cx(0.0)
    , cy(0.0)
    , height(0)
    , width(0)
    , pointcloud(_alloc)  {
  (void)_alloc;
      camToWorld.assign(0.0);
  }



   typedef int32_t _id_type;
  _id_type id;

   typedef double _time_type;
  _time_type time;

   typedef uint8_t _isKeyframe_type;
  _isKeyframe_type isKeyframe;

   typedef boost::array<float, 7>  _camToWorld_type;
  _camToWorld_type camToWorld;

   typedef float _fx_type;
  _fx_type fx;

   typedef float _fy_type;
  _fy_type fy;

   typedef float _cx_type;
  _cx_type cx;

   typedef float _cy_type;
  _cy_type cy;

   typedef uint32_t _height_type;
  _height_type height;

   typedef uint32_t _width_type;
  _width_type width;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _pointcloud_type;
  _pointcloud_type pointcloud;




  typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> const> ConstPtr;

}; // struct keyframeMsg_

typedef ::lsd_slam_viewer::keyframeMsg_<std::allocator<void> > keyframeMsg;

typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeMsg > keyframeMsgPtr;
typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeMsg const> keyframeMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lsd_slam_viewer

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'lsd_slam_viewer': ['/home/david/catkin_ws/src/lsd_slam/lsd_slam_viewer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "42d4108dbb7d0e5d166eb68dd4054826";
  }

  static const char* value(const ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x42d4108dbb7d0e5dULL;
  static const uint64_t static_value2 = 0x166eb68dd4054826ULL;
};

template<class ContainerAllocator>
struct DataType< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lsd_slam_viewer/keyframeMsg";
  }

  static const char* value(const ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n\
float64 time\n\
bool isKeyframe\n\
\n\
# camToWorld as serialization of sophus sim(3).\n\
# may change with keyframeGraph-updates.\n\
float32[7] camToWorld \n\
\n\
\n\
# camera parameter (fx fy cx cy), width, height\n\
# will never change, but required for display.\n\
float32 fx\n\
float32 fy\n\
float32 cx\n\
float32 cy\n\
uint32 height\n\
uint32 width\n\
\n\
\n\
# data as InputPointDense (float idepth, float idepth_var, uchar color[4]), width x height\n\
# may be empty, in that case no associated pointcloud is ever shown.\n\
uint8[] pointcloud\n\
";
  }

  static const char* value(const ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.time);
      stream.next(m.isKeyframe);
      stream.next(m.camToWorld);
      stream.next(m.fx);
      stream.next(m.fy);
      stream.next(m.cx);
      stream.next(m.cy);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.pointcloud);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct keyframeMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lsd_slam_viewer::keyframeMsg_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "isKeyframe: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isKeyframe);
    s << indent << "camToWorld[]" << std::endl;
    for (size_t i = 0; i < v.camToWorld.size(); ++i)
    {
      s << indent << "  camToWorld[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.camToWorld[i]);
    }
    s << indent << "fx: ";
    Printer<float>::stream(s, indent + "  ", v.fx);
    s << indent << "fy: ";
    Printer<float>::stream(s, indent + "  ", v.fy);
    s << indent << "cx: ";
    Printer<float>::stream(s, indent + "  ", v.cx);
    s << indent << "cy: ";
    Printer<float>::stream(s, indent + "  ", v.cy);
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "pointcloud[]" << std::endl;
    for (size_t i = 0; i < v.pointcloud.size(); ++i)
    {
      s << indent << "  pointcloud[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.pointcloud[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSD_SLAM_VIEWER_MESSAGE_KEYFRAMEMSG_H