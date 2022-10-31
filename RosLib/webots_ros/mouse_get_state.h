#ifndef _ROS_SERVICE_mouse_get_state_h
#define _ROS_SERVICE_mouse_get_state_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char MOUSE_GET_STATE[] = "webots_ros/mouse_get_state";

  class mouse_get_stateRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    mouse_get_stateRequest():
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

    virtual const char * getType() override { return MOUSE_GET_STATE; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class mouse_get_stateResponse : public ros::Msg
  {
    public:
      typedef uint8_t _left_type;
      _left_type left;
      typedef uint8_t _middle_type;
      _middle_type middle;
      typedef uint8_t _right_type;
      _right_type right;
      typedef double _u_type;
      _u_type u;
      typedef double _v_type;
      _v_type v;
      typedef double _x_type;
      _x_type x;
      typedef double _y_type;
      _y_type y;
      typedef double _z_type;
      _z_type z;

    mouse_get_stateResponse():
      left(0),
      middle(0),
      right(0),
      u(0),
      v(0),
      x(0),
      y(0),
      z(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->left >> (8 * 0)) & 0xFF;
      offset += sizeof(this->left);
      *(outbuffer + offset + 0) = (this->middle >> (8 * 0)) & 0xFF;
      offset += sizeof(this->middle);
      *(outbuffer + offset + 0) = (this->right >> (8 * 0)) & 0xFF;
      offset += sizeof(this->right);
      union {
        double real;
        uint64_t base;
      } u_u;
      u_u.real = this->u;
      *(outbuffer + offset + 0) = (u_u.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_u.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_u.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_u.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_u.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_u.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_u.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_u.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->u);
      union {
        double real;
        uint64_t base;
      } u_v;
      u_v.real = this->v;
      *(outbuffer + offset + 0) = (u_v.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_v.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_v.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_v.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_v.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_v.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_v.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_v.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->v);
      union {
        double real;
        uint64_t base;
      } u_x;
      u_x.real = this->x;
      *(outbuffer + offset + 0) = (u_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->x);
      union {
        double real;
        uint64_t base;
      } u_y;
      u_y.real = this->y;
      *(outbuffer + offset + 0) = (u_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->y);
      union {
        double real;
        uint64_t base;
      } u_z;
      u_z.real = this->z;
      *(outbuffer + offset + 0) = (u_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->left =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->left);
      this->middle =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->middle);
      this->right =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->right);
      union {
        double real;
        uint64_t base;
      } u_u;
      u_u.base = 0;
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_u.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->u = u_u.real;
      offset += sizeof(this->u);
      union {
        double real;
        uint64_t base;
      } u_v;
      u_v.base = 0;
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_v.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->v = u_v.real;
      offset += sizeof(this->v);
      union {
        double real;
        uint64_t base;
      } u_x;
      u_x.base = 0;
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->x = u_x.real;
      offset += sizeof(this->x);
      union {
        double real;
        uint64_t base;
      } u_y;
      u_y.base = 0;
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->y = u_y.real;
      offset += sizeof(this->y);
      union {
        double real;
        uint64_t base;
      } u_z;
      u_z.base = 0;
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->z = u_z.real;
      offset += sizeof(this->z);
     return offset;
    }

    virtual const char * getType() override { return MOUSE_GET_STATE; };
    virtual const char * getMD5() override { return "17a814b3dc69927476b5cde7968ba299"; };

  };

  class mouse_get_state {
    public:
    typedef mouse_get_stateRequest Request;
    typedef mouse_get_stateResponse Response;
  };

}
#endif
