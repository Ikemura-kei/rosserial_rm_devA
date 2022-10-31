#ifndef _ROS_SERVICE_camera_get_focus_info_h
#define _ROS_SERVICE_camera_get_focus_info_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char CAMERA_GET_FOCUS_INFO[] = "webots_ros/camera_get_focus_info";

  class camera_get_focus_infoRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    camera_get_focus_infoRequest():
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

    virtual const char * getType() override { return CAMERA_GET_FOCUS_INFO; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class camera_get_focus_infoResponse : public ros::Msg
  {
    public:
      typedef double _focalLength_type;
      _focalLength_type focalLength;
      typedef double _focalDistance_type;
      _focalDistance_type focalDistance;
      typedef double _maxFocalDistance_type;
      _maxFocalDistance_type maxFocalDistance;
      typedef double _minFocalDistance_type;
      _minFocalDistance_type minFocalDistance;

    camera_get_focus_infoResponse():
      focalLength(0),
      focalDistance(0),
      maxFocalDistance(0),
      minFocalDistance(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_focalLength;
      u_focalLength.real = this->focalLength;
      *(outbuffer + offset + 0) = (u_focalLength.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_focalLength.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_focalLength.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_focalLength.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_focalLength.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_focalLength.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_focalLength.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_focalLength.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->focalLength);
      union {
        double real;
        uint64_t base;
      } u_focalDistance;
      u_focalDistance.real = this->focalDistance;
      *(outbuffer + offset + 0) = (u_focalDistance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_focalDistance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_focalDistance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_focalDistance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_focalDistance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_focalDistance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_focalDistance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_focalDistance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->focalDistance);
      union {
        double real;
        uint64_t base;
      } u_maxFocalDistance;
      u_maxFocalDistance.real = this->maxFocalDistance;
      *(outbuffer + offset + 0) = (u_maxFocalDistance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxFocalDistance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxFocalDistance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxFocalDistance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_maxFocalDistance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_maxFocalDistance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_maxFocalDistance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_maxFocalDistance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->maxFocalDistance);
      union {
        double real;
        uint64_t base;
      } u_minFocalDistance;
      u_minFocalDistance.real = this->minFocalDistance;
      *(outbuffer + offset + 0) = (u_minFocalDistance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_minFocalDistance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_minFocalDistance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_minFocalDistance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_minFocalDistance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_minFocalDistance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_minFocalDistance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_minFocalDistance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->minFocalDistance);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_focalLength;
      u_focalLength.base = 0;
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_focalLength.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->focalLength = u_focalLength.real;
      offset += sizeof(this->focalLength);
      union {
        double real;
        uint64_t base;
      } u_focalDistance;
      u_focalDistance.base = 0;
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_focalDistance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->focalDistance = u_focalDistance.real;
      offset += sizeof(this->focalDistance);
      union {
        double real;
        uint64_t base;
      } u_maxFocalDistance;
      u_maxFocalDistance.base = 0;
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_maxFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->maxFocalDistance = u_maxFocalDistance.real;
      offset += sizeof(this->maxFocalDistance);
      union {
        double real;
        uint64_t base;
      } u_minFocalDistance;
      u_minFocalDistance.base = 0;
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_minFocalDistance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->minFocalDistance = u_minFocalDistance.real;
      offset += sizeof(this->minFocalDistance);
     return offset;
    }

    virtual const char * getType() override { return CAMERA_GET_FOCUS_INFO; };
    virtual const char * getMD5() override { return "8cabd8a61992c5b3e4e9d182bb2380ac"; };

  };

  class camera_get_focus_info {
    public:
    typedef camera_get_focus_infoRequest Request;
    typedef camera_get_focus_infoResponse Response;
  };

}
#endif
