/**
 * @file main.cpp
 * @author Qamar Syed (qsyed@umd.edu) and Tanmay Haldankar (tanmayh@umd.edu)
 * @brief Main function for PID controller implementation for TDD
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <lib.hpp>
#include "pid.h"
using namespace std;

int main()
{
    Pid test_pid(0.1,0.1,0.01);
    float vel = test_pid.new_velocity(100,0);
    cout << "\nThe final velocity reached is :"<<vel << endl;

    return 0;
}
