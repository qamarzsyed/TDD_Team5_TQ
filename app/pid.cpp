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
#include <iostream>
#include <cmath>
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
 * @param actual_velocity float value for current velocity
 * @return float with new velocity
 */
float Pid::new_velocity(float target, float actual_velocity){
    

    float new_velocity_;
   //  double prev_output = actual_velocity; // Output from the pid controller
    int i =0;
    int iterations=200;
    float prev_error=0;
    float dT=0.1;
    //double new_velocity_;
   // while (i<iterations){

        //prev_output = compute_pid(target_setpoint, prev_output);
        //cout<<"OUTPUT : "<<prev_output<<endl;
      //  i++;
    //}
   // return prev_output;
    while (i<iterations){
    float error = target-actual_velocity;
    std::cout<<"\nThe error at iteration : "<<i+1<<"is "<<error;
    float P = kp_*error;
    float I = ki_*(error+prev_error)*dT;
    float D = kd_*(error-prev_error)/dT;
    new_velocity_ = (P+I+D)+actual_velocity;
    actual_velocity=new_velocity_;
    prev_error = error;
    std::cout<<"\nThe velocity in the iteration : "<<i+1<<" is : "<<round(new_velocity_);
    i++;
    }
    return round(new_velocity_);
}

