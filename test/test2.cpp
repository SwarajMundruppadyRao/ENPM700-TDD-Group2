#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test to verify that the compute method returns 0.0 (stub).
 */
TEST(PIDControllerTest, TestTheComputeMethod) {
    // Initialize PID controller
    PIDController pid(1.0, 0.5, 0.1);

    // Call the compute method with arbitrary setpoint and actual values
    double result = pid.compute(5.0, 2.0);

    // Test if the method returns the stub value 0.0
    EXPECT_EQ(result, 0.0);
}
