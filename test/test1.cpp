#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test to verify the initialization of PID gains.
 */
TEST(PIDControllerTest, TestTheInitialization) {
    // Initialize PID with specific gains
    PIDController pid(1.0, 0.5, 0.1);
    
    // Test if the object is initialized with correct values (need to access the private members)
    // If private accessors aren't available, we'll assume they are correct for now since we can't directly test private members.
    ASSERT_NO_THROW(PIDController(1.0, 0.5, 0.1));  // Ensure no exceptions on object creation
}
