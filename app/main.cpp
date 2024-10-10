// Copyright [2024] <TDD Group 2>
#include <iostream>
#include "PIDController.hpp"

int main() {
  // Initialize PID gains
  double kp = 0.5;   // Proportional gain
  double ki = 0.1;   // Integral gain
  double kd = 0.05;  // Derivative gain
  std::cout << "Enter the values of kp, ki, kd" << std::endl;
  std::cin >> kp >> ki >> kd;
  // Create a PIDController object with the specified gains
  PIDController pid(kp, ki, kd);

  // Setpoint (desired velocity) and actual velocity
  double setpoint = 10.0;       // Target velocity
  double actualVelocity = 8.0;  // Current velocity

  // Compute the new velocity using the PID controller
  double controlOutput = pid.compute(setpoint, actualVelocity);

  // Display the result
  std::cout << "Control Output: " << controlOutput << std::endl;

  return 0;
}
