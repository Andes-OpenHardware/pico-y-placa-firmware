#ifdef UNIT_TEST

#include "unity.h"
#include "accelerometer/accelerometer.h"

void test_valid_accelerometer_pin_values(void) {
  Accelerometer* accelerometer = Accelerometer::Create(3, 4, 5);
  TEST_ASSERT_FALSE(accelerometer->is_empty());
  TEST_ASSERT_EQUAL(accelerometer->x(), 3);
  TEST_ASSERT_EQUAL(accelerometer->y(), 4);
  TEST_ASSERT_EQUAL(accelerometer->z(), 5);
}

void test_returns_empty_on_wrong_accelerometer_x_pin_value() {
  Accelerometer* accelerometer = Accelerometer::Create(6, 2, 0);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_on_negative_accelerometer_x_pin_value() {
  Accelerometer* accelerometer = Accelerometer::Create(-2, 0, 4);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_on_wrong_accelerometer_y_pin_value() {
  Accelerometer* accelerometer = Accelerometer::Create(5, 8, 0);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_on_negative_accelerometer_y_pin_value() {
  Accelerometer* accelerometer = Accelerometer::Create(4, -10, 2);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_on_wrong_accelerometer_z_pin_value() {
  Accelerometer* accelerometer = Accelerometer::Create(5, 3, 100);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_on_negative_accelerometer_z_pin_value() {
  Accelerometer* accelerometer = Accelerometer::Create(4, 0, -1);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_when_x_and_y_pins_are_the_same() {
  Accelerometer* accelerometer = Accelerometer::Create(1, 1, 0);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_when_y_and_z_pins_are_the_same() {
  Accelerometer* accelerometer = Accelerometer::Create(1, 4, 4);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void test_returns_empty_when_x_and_z_pins_are_the_same() {
  Accelerometer* accelerometer = Accelerometer::Create(3, 2, 3);
  TEST_ASSERT_TRUE(accelerometer->is_empty());
}

void run_tests() {
  UNITY_BEGIN();
  RUN_TEST(test_valid_accelerometer_pin_values);
  RUN_TEST(test_returns_empty_on_wrong_accelerometer_x_pin_value);
  RUN_TEST(test_returns_empty_on_negative_accelerometer_x_pin_value);
  RUN_TEST(test_returns_empty_on_wrong_accelerometer_y_pin_value);
  RUN_TEST(test_returns_empty_on_negative_accelerometer_y_pin_value);
  RUN_TEST(test_returns_empty_on_wrong_accelerometer_z_pin_value);
  RUN_TEST(test_returns_empty_on_negative_accelerometer_z_pin_value);
  RUN_TEST(test_returns_empty_when_x_and_y_pins_are_the_same);
  RUN_TEST(test_returns_empty_when_y_and_z_pins_are_the_same);
  RUN_TEST(test_returns_empty_when_x_and_z_pins_are_the_same);
  UNITY_END();
}

#ifdef ARDUINO

#include <Arduino.h>

void setup() {
  delay(2000);
  run_tests();
}

void loop() {
  //
}

#else

int main(int argc, char **argv) {
  run_tests();
  return 0;
}

#endif

#endif
