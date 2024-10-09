#include "PIDController.hpp"

// Constructor implementation
PIDController::PIDController(double kp, double ki, double kd)
    : Kp(kp), Ki(ki), Kd(kd), integral(0.0), previousError(0.0) {}

// Computes the new velocity based on the target setpoint and actual velocity
double PIDController::compute(double setpoint, double actual) {
    // Calculate error
    double error = setpoint - actual;

    // Calculate integral
    integral += error;

    // Calculate derivative
    double derivative = error - previousError;

    // Compute new velocity using PID formula
    double output = Kp * error + Ki * integral + Kd * derivative;

    // Update previous error
    previousError = error;

    return output; // Return the computed new velocity
}
