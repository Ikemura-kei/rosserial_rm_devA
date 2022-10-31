#ifndef _ROS_SERVICE_range_finder_get_info_h
#define _ROS_SERVICE_range_finder_get_info_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char RANGE_FINDER_GET_INFO[] = "webots_ros/range_finder_get_info";

  class range_finder_get_infoRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    range_finder_get_infoRequest():
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

    virtual const char * getType() override { return RANGE_FINDER_GET_INFO; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class range_finder_get_infoResponse : public ros::Msg
  {
    public:
      typedef uint32_t _width_type;
      _width_type width;
      typedef uint32_t _height_type;
      _height_type height;
      typedef double _Fov_type;
      _Fov_type Fov;
      typedef double _minRange_type;
      _minRange_type minRange;
      typedef double _maxRange_type;
      _maxRange_type maxRange;

    range_finder_get_infoResponse():
      width(0),
      height(0),
      Fov(0),
      minRange(0),
      maxRange(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->width >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->width >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->width >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->width >> (8 * 3)) & 0xFF;
      offset += sizeof(this->width);
      *(outbuffer + offset + 0) = (this->height >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->height >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->height >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->height >> (8 * 3)) & 0xFF;
      offset += sizeof(this->height);
      union {
        double real;
        uint64_t base;
      } u_Fov;
      u_Fov.real = this->Fov;
      *(outbuffer + offset + 0) = (u_Fov.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Fov.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Fov.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Fov.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Fov.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Fov.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Fov.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Fov.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Fov);
      union {
        double real;
        uint64_t base;
      } u_minRange;
      u_minRange.real = this->minRange;
      *(outbuffer + offset + 0) = (u_minRange.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_minRange.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_minRange.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_minRange.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_minRange.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_minRange.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_minRange.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_minRange.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->minRange);
      union {
        double real;
        uint64_t base;
      } u_maxRange;
      u_maxRange.real = this->maxRange;
      *(outbuffer + offset + 0) = (u_maxRange.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxRange.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxRange.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxRange.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_maxRange.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_maxRange.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_maxRange.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_maxRange.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->maxRange);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->width =  ((uint32_t) (*(inbuffer + offset)));
      this->width |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->width |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->width |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->width);
      this->height =  ((uint32_t) (*(inbuffer + offset)));
      this->height |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->height |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->height |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->height);
      union {
        double real;
        uint64_t base;
      } u_Fov;
      u_Fov.base = 0;
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Fov.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Fov = u_Fov.real;
      offset += sizeof(this->Fov);
      union {
        double real;
        uint64_t base;
      } u_minRange;
      u_minRange.base = 0;
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_minRange.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->minRange = u_minRange.real;
      offset += sizeof(this->minRange);
      union {
        double real;
        uint64_t base;
      } u_maxRange;
      u_maxRange.base = 0;
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_maxRange.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->maxRange = u_maxRange.real;
      offset += sizeof(this->maxRange);
     return offset;
    }

    virtual const char * getType() override { return RANGE_FINDER_GET_INFO; };
    virtual const char * getMD5() override { return "ba45c4359ffe949874e90cf1daa6659f"; };

  };

  class range_finder_get_info {
    public:
    typedef range_finder_get_infoRequest Request;
    typedef range_finder_get_infoResponse Response;
  };

}
#endif
