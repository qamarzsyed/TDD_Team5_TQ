/**
 * @file pid.h
 * @author Qamar Syed (qsyed@umd.edu) and Tanmay Haldankar (tanmayh@umd.edu)
 * @brief class declaration for pid class
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

/**
 * @brief Pid class declaration
 * 
 */
class Pid {
private:
    float kp_;
    float ki_;
    float kd_;
public:
    Pid(float kp, float ki, float kd);
    float new_velocity(float target, float actual_velocity);
};