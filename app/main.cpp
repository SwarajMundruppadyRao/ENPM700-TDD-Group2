#include <iostream>
#include "PIDController.hpp"

int main() {
    // Create a PID controller object with sample Kp, Ki, Kd values
    PIDController pid(0.1, 0.01, 0.05);

    // Sample setpoint (desired velocity) and actual velocity
    double setpoint = 100.0;   // Desired velocity
    double actual = 90.0;      // Current velocity

    // Compute the new velocity using the PID controller
    double new_velocity = pid.compute(setpoint, actual);

    // Print the result
    std::cout << "New computed velocity: " << new_velocity << std::endl;

    return 0;
}
