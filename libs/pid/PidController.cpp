// Copyright [2024] <TDD Group 2>
// Description: Implementation of the PIDController class.
#include <PIDController.hpp>

// Constructor to initialize the PID gains and internal variables
PIDController::PIDController(double kp, double ki, double kd)
    : Kp(kp), Ki(ki), Kd(kd), integral(0), previousError(0) {}

// Method to compute the new velocity using the PID control formula
double PIDController::compute(double setpoint, double actual) {
  // Calculate the error
  double error = setpoint - actual;

  // Calculate the proportional term
  double proportionalTerm = Kp * error;

  // Update the integral and calculate the integral term
  integral += error;
  double integralTerm = Ki * integral;

  // Calculate the derivative term
  double derivative = error - previousError;
  double derivativeTerm = Kd * derivative;

  // Update the previous error for the next iteration
  previousError = error;

  // Compute the final output
  double output = proportionalTerm + integralTerm + derivativeTerm;

  return output;
}
