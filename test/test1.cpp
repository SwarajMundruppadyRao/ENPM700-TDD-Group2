#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test to verify that the compute method returns 0.0 (stub).
 */
TEST(PIDControllerTest, ComputeMethodShouldReturnZeroInitially) {
    // Initialize the PIDController with arbitrary gains
    PIDController pid(1.0, 0.5, 0.1);

    // Call the compute method with an arbitrary setpoint and actual value
    double result = pid.compute(5.0, 2.0);

    // Test if the method returns the expected stub value of 0.0
    EXPECT_EQ(result, 1.0);
}
