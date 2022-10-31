#ifndef _ROS_webots_ros_RadarTarget_h
#define _ROS_webots_ros_RadarTarget_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace webots_ros
{

  class RadarTarget : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _distance_type;
      _distance_type distance;
      typedef double _receivedPower_type;
      _receivedPower_type receivedPower;
      typedef double _speed_type;
      _speed_type speed;
      typedef double _azimuth_type;
      _azimuth_type azimuth;

    RadarTarget():
      header(),
      distance(0),
      receivedPower(0),
      speed(0),
      azimuth(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_distance;
      u_distance.real = this->distance;
      *(outbuffer + offset + 0) = (u_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_distance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_distance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_distance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_distance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->distance);
      union {
        double real;
        uint64_t base;
      } u_receivedPower;
      u_receivedPower.real = this->receivedPower;
      *(outbuffer + offset + 0) = (u_receivedPower.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_receivedPower.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_receivedPower.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_receivedPower.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_receivedPower.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_receivedPower.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_receivedPower.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_receivedPower.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->receivedPower);
      union {
        double real;
        uint64_t base;
      } u_speed;
      u_speed.real = this->speed;
      *(outbuffer + offset + 0) = (u_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->speed);
      union {
        double real;
        uint64_t base;
      } u_azimuth;
      u_azimuth.real = this->azimuth;
      *(outbuffer + offset + 0) = (u_azimuth.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_azimuth.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_azimuth.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_azimuth.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_azimuth.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_azimuth.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_azimuth.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_azimuth.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->azimuth);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_distance;
      u_distance.base = 0;
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->distance = u_distance.real;
      offset += sizeof(this->distance);
      union {
        double real;
        uint64_t base;
      } u_receivedPower;
      u_receivedPower.base = 0;
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_receivedPower.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->receivedPower = u_receivedPower.real;
      offset += sizeof(this->receivedPower);
      union {
        double real;
        uint64_t base;
      } u_speed;
      u_speed.base = 0;
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->speed = u_speed.real;
      offset += sizeof(this->speed);
      union {
        double real;
        uint64_t base;
      } u_azimuth;
      u_azimuth.base = 0;
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->azimuth = u_azimuth.real;
      offset += sizeof(this->azimuth);
     return offset;
    }

    virtual const char * getType() override { return "webots_ros/RadarTarget"; };
    virtual const char * getMD5() override { return "39dda2b01810c27987f6a767b1a78c1c"; };

  };

}
#endif
