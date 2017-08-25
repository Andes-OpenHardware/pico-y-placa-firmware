#ifndef __ACCELEROMETER
#define __ACCELEROMETER

class Accelerometer {
  private:
    struct Axis {
      short x;
      short y;
      short z;
    };
    bool is_empty_;
    Axis axis_;
    Accelerometer(short x, short y, short z);
    Accelerometer(bool is_empty);
  public:
    bool is_empty(void);
    static Accelerometer* Create(short x, short y, short z);
};

#endif
