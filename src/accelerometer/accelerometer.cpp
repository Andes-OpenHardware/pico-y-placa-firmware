#include "accelerometer.h"

Accelerometer::Accelerometer(short x, short y, short z) {
  axis_.x = x;
  axis_.y = y;
  axis_.z = z;
  is_empty_ = false;
}

Accelerometer::Accelerometer(bool is_empty): is_empty_(is_empty) {
  //
}

Accelerometer* Accelerometer::Create(short x, short y, short z) {
  bool are_different = x != y && y != z && x != z;
  bool is_x_pin_valid = x >= 0 && x <= 5;
  bool is_y_pin_valid = y >= 0 && y <= 5;
  bool is_z_pin_valid = z >= 0 && z <= 5;

  if(are_different && is_x_pin_valid && is_y_pin_valid && is_z_pin_valid) {
    return new Accelerometer(x, y, z);
  }
  return new Accelerometer(true);
}

bool Accelerometer::is_empty(void) {
  return is_empty_;
}
