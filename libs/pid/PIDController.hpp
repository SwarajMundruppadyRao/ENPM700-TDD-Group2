#ifndef PIDCONTROLLER_H
#define PIDCONTROLLER_H

#pragma once
/**
 * @file PIDController.hpp
 * @brief Declaration of the PIDController class for velocity control.
 * 
 * This class implements a PID controller that computes a new velocity 
 * based on a target setpoint and the current actual velocity.
 * 
 * @author SWARAJ,DHAIRYA,HARSH,ABHISHEIK
 * @copyright MIT
 */
class PIDController {
private:
    double Kp;             ///< Proportional gain
    double Ki;             ///< Integral gain
    double Kd;             ///< Derivative gain
    double integral;       ///< Integral value
    double previousError;  ///< Previous error value

public:
    /**
     * @brief Constructor for the PIDController class.
     * 
     * Initializes the PID gains and sets the initial integral and previous error.
     * 
     * @param kp Proportional gain
     * @param ki Integral gain
     * @param kd Derivative gain
     */
    PIDController(double kp, double ki, double kd);

    /**
     * @brief Computes the new velocity based on the target setpoint and actual velocity.
     * 
     * This method calculates the control output using the PID formula.
     * 
     * @param setpoint The desired velocity
     * @param actual The current velocity
     * @return double The computed new velocity.
     */
    double compute(double setpoint, double actual){
        return 0.0;
    }
};

#endif // PIDCONTROLLER_H
