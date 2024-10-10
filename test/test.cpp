// Copyright [2024] <TDD Group 2>
#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test to verify that the PIDController object initializes without
 * issues.
 */
TEST(PIDControllerTest, ConstructorShouldInitializeWithoutErrors) {
  // Ensure that the constructor doesn't throw any exceptions
  ASSERT_NO_THROW(PIDController(1.0, 0.5, 0.1));
}

/**
 * @brief Test to verify the compute method's output when only the proportional
 * term is active.
 */
TEST(PIDControllerTest, ProportionalControlTest) {
  // Initialize the PIDController with Kp = 2.0, Ki = 0.0, Kd = 0.0
  // (proportional-only controller)
  PIDController pid(2.0, 0.0, 0.0);

  // Set the setpoint to 10 and actual value to 7, expecting an error of 3
  double result = pid.compute(10.0, 7.0);

  // The expected output should be Kp * error = 2.0 * 3.0 = 6.0
  EXPECT_EQ(result, 6.0);
}

/**
 * @brief Test to verify the compute method's output when only the integral term
 * is active.
 */
TEST(PIDControllerTest, IntegralControlTest) {
  // Initialize the PIDController with Kp = 0.0, Ki = 1.0, Kd = 0.0
  // (integral-only controller)
  PIDController pid(0.0, 1.0, 0.0);

  // Call the compute method twice to build up the integral term
  pid.compute(5.0, 3.0);                  // error = 2
  double result = pid.compute(5.0, 3.0);  // cumulative error = 4

  // The expected output should be Ki * integral = 1.0 * 4.0 = 4.0
  EXPECT_EQ(result, 4.0);
}

/**
 * @brief Test to verify the compute method's output when only the derivative
 * term is active.
 */
TEST(PIDControllerTest, DerivativeControlTest) {
  // Initialize the PIDController with Kp = 0.0, Ki = 0.0, Kd = 0.5
  // (derivative-only controller)
  PIDController pid(0.0, 0.0, 0.5);

  // Perform two compute calls with different errors to calculate the derivative
  // term
  pid.compute(10.0, 8.0);                  // error = 2
  double result = pid.compute(10.0, 7.0);  // error = 3, derivative = 3 - 2 = 1

  // The expected output should be Kd * derivative = 0.5 * 1.0 = 0.5
  EXPECT_EQ(result, 0.5);
}

/**
 * @brief Test to verify that the compute method correctly combines the PID
 * terms.
 */
TEST(PIDControllerTest, FullPIDControlTest) {
  // Initialize the PIDController with Kp = 1.0, Ki = 0.5, Kd = 0.1
  PIDController pid(1.0, 0.5, 0.1);

  // Perform multiple compute calls to accumulate the integral and calculate the
  // derivative
  pid.compute(10.0, 8.0);  // error = 2
  double result =
      pid.compute(10.0, 7.0);  // error = 3, integral = 5, derivative = 1

  // Expected output: (Kp * error) + (Ki * integral) + (Kd * derivative)
  // Expected output: (1.0 * 3) + (0.5 * 5) + (0.1 * 1) = 3 + 2.5 + 0.1 = 5.6
  EXPECT_NEAR(result, 5.6,
              1e-6);  // Use EXPECT_NEAR for floating-point comparisons
}
