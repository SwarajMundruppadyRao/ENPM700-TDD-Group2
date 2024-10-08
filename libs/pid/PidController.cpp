// PIDController.cpp
#include "PIDController.hpp"

PIDController::PIDController(double kp, double ki, double kd)
    : Kp(kp), Ki(ki), Kd(kd), integral(0.0), previousError(0.0) {}

// Implementation of the compute method
double PIDController::compute(double setpoint, double actual) {
    // Calculate the error
    double error = setpoint - actual;

    // Proportional term
    double proportional = Kp * error;

    // Integral term
    integral += error; // Accumulate the integral
    double integralTerm = Ki * integral;

    // Derivative term
    double derivative = error - previousError; // Change in error
    double derivativeTerm = Kd * derivative;

    // Update the previous error
    previousError = error;

    // Compute the new velocity (control output)
    double output = proportional + integralTerm + derivativeTerm;

    return output; // Return the computed control output (new velocity)
}
