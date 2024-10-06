#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test to verify that the PIDController object initializes without issues.
 */
TEST(PIDControllerTest, ConstructorShouldInitializeWithoutErrors) {
    // Create a PIDController object with valid parameters
    PIDController pid(1.0, 0.5, 0.1);

    // Ensure that the constructor doesn't throw any exceptions
    ASSERT_NO_THROW(PIDController(1.0, 0.5, 0.1));
}
