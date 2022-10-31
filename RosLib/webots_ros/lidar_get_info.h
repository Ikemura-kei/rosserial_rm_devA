#ifndef _ROS_SERVICE_lidar_get_info_h
#define _ROS_SERVICE_lidar_get_info_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char LIDAR_GET_INFO[] = "webots_ros/lidar_get_info";

  class lidar_get_infoRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    lidar_get_infoRequest():
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

    virtual const char * getType() override { return LIDAR_GET_INFO; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class lidar_get_infoResponse : public ros::Msg
  {
    public:
      typedef uint32_t _horizontalResolution_type;
      _horizontalResolution_type horizontalResolution;
      typedef uint32_t _numberOfLayers_type;
      _numberOfLayers_type numberOfLayers;
      typedef double _fov_type;
      _fov_type fov;
      typedef double _verticalFov_type;
      _verticalFov_type verticalFov;
      typedef double _minRange_type;
      _minRange_type minRange;
      typedef double _maxRange_type;
      _maxRange_type maxRange;

    lidar_get_infoResponse():
      horizontalResolution(0),
      numberOfLayers(0),
      fov(0),
      verticalFov(0),
      minRange(0),
      maxRange(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->horizontalResolution >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->horizontalResolution >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->horizontalResolution >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->horizontalResolution >> (8 * 3)) & 0xFF;
      offset += sizeof(this->horizontalResolution);
      *(outbuffer + offset + 0) = (this->numberOfLayers >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->numberOfLayers >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->numberOfLayers >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->numberOfLayers >> (8 * 3)) & 0xFF;
      offset += sizeof(this->numberOfLayers);
      union {
        double real;
        uint64_t base;
      } u_fov;
      u_fov.real = this->fov;
      *(outbuffer + offset + 0) = (u_fov.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fov.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fov.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fov.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fov.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fov.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fov.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fov.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fov);
      union {
        double real;
        uint64_t base;
      } u_verticalFov;
      u_verticalFov.real = this->verticalFov;
      *(outbuffer + offset + 0) = (u_verticalFov.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_verticalFov.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_verticalFov.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_verticalFov.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_verticalFov.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_verticalFov.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_verticalFov.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_verticalFov.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->verticalFov);
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
      this->horizontalResolution =  ((uint32_t) (*(inbuffer + offset)));
      this->horizontalResolution |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->horizontalResolution |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->horizontalResolution |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->horizontalResolution);
      this->numberOfLayers =  ((uint32_t) (*(inbuffer + offset)));
      this->numberOfLayers |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->numberOfLayers |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->numberOfLayers |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->numberOfLayers);
      union {
        double real;
        uint64_t base;
      } u_fov;
      u_fov.base = 0;
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fov.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fov = u_fov.real;
      offset += sizeof(this->fov);
      union {
        double real;
        uint64_t base;
      } u_verticalFov;
      u_verticalFov.base = 0;
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_verticalFov.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->verticalFov = u_verticalFov.real;
      offset += sizeof(this->verticalFov);
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

    virtual const char * getType() override { return LIDAR_GET_INFO; };
    virtual const char * getMD5() override { return "e3ce26475d0d5fee0e59e3479a798bf0"; };

  };

  class lidar_get_info {
    public:
    typedef lidar_get_infoRequest Request;
    typedef lidar_get_infoResponse Response;
  };

}
#endif
