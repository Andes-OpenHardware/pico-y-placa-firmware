#if defined(ARDUINO) && defined(UNIT_TEST)

#include <Arduino.h>
#include "unity.h"
#include "accelerometer/accelerometer.h"

void setup() {
  delay(2000);
  UNITY_BEGIN();

  UNITY_END();
}

void loop() {
  //
}

#endif
