#include "PIDController.hpp"

// Constructor implementation
PIDController::PIDController(double kp, double ki, double kd)
    : Kp(kp), Ki(ki), Kd(kd), integral(0.0), previousError(0.0) {}

// Implementation of the compute method
double PIDController::compute(double setpoint, double actual) {
    // Calculate the error
    double error = setpoint - actual;

    // Proportional term
    double proportional = Kp * error;

    // Integral term (accumulate the integral)
    integral += error;
    double integralTerm = Ki * integral;

    // Derivative term (difference between current error and previous error)
    double derivative = error - previousError;
    double derivativeTerm = Kd * derivative;

    // Update previousError with the current error for the next iteration
    previousError = error;

    // Compute the control output (new velocity)
    double output = proportional + integralTerm + derivativeTerm;

    return output; // Return the calculated new velocity
}
