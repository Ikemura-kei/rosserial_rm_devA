#ifndef _ROS_SERVICE_camera_get_zoom_info_h
#define _ROS_SERVICE_camera_get_zoom_info_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char CAMERA_GET_ZOOM_INFO[] = "webots_ros/camera_get_zoom_info";

  class camera_get_zoom_infoRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    camera_get_zoom_infoRequest():
      ask(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->ask >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ask);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->ask =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->ask);
     return offset;
    }

    virtual const char * getType() override { return CAMERA_GET_ZOOM_INFO; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class camera_get_zoom_infoResponse : public ros::Msg
  {
    public:
      typedef double _minFov_type;
      _minFov_type minFov;
      typedef double _maxFov_type;
      _maxFov_type maxFov;

    camera_get_zoom_infoResponse():
      minFov(0),
      maxFov(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_minFov;
      u_minFov.real = this->minFov;
      *(outbuffer + offset + 0) = (u_minFov.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_minFov.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_minFov.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_minFov.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_minFov.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_minFov.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_minFov.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_minFov.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->minFov);
      union {
        double real;
        uint64_t base;
      } u_maxFov;
      u_maxFov.real = this->maxFov;
      *(outbuffer + offset + 0) = (u_maxFov.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxFov.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxFov.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxFov.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_maxFov.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_maxFov.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_maxFov.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_maxFov.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->maxFov);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_minFov;
      u_minFov.base = 0;
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_minFov.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->minFov = u_minFov.real;
      offset += sizeof(this->minFov);
      union {
        double real;
        uint64_t base;
      } u_maxFov;
      u_maxFov.base = 0;
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_maxFov.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->maxFov = u_maxFov.real;
      offset += sizeof(this->maxFov);
     return offset;
    }

    virtual const char * getType() override { return CAMERA_GET_ZOOM_INFO; };
    virtual const char * getMD5() override { return "09ec32bcace1e2e7e22f392cd9bb4659"; };

  };

  class camera_get_zoom_info {
    public:
    typedef camera_get_zoom_infoRequest Request;
    typedef camera_get_zoom_infoResponse Response;
  };

}
#endif
