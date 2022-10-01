/**
 * @file pid.cpp
 * @author Qamar Syed (qsyed@umd.edu) and Tanmay Haldankar (tanmayh@umd.edu)
 * @brief function declarations for PID class
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "pid.h"
using namespace std;

/**
 * @brief Construct a new Pid:: Pid object
 * 
 * @param kp float proportional value for PID
 * @param ki float integral value for PID
 * @param kd float derivate value for PID
 */
Pid::Pid(float kp, float ki, float kd){
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
}

/**
 * @brief use PID controller to generate a new velocity given target and current
 * 
 * @param target float value for target setpoint
 * @param velocity float value for current velocity
 * @return float with new velocity
 */
float Pid::new_velocity(float target, float velocity){
    float new_velocity = 5;
    return new_velocity;
}

