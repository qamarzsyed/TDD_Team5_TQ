/**
 * @file main.cpp
 * @author
 * Qamar Syed (qsyed@umd.edu)
 * Tanmay Haldankar (tanmayh@umd.edu)
 * Yashveer Jain (yashveer@umd.edu)
 * Vignesh Ravichandran Radhakrishnan (rr94@umd.edu)
 * @brief Main function for PID controller implementation for TDD
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022 https://github.com/yashveer-umd/TDD_Team5_TQ.git
 *
 */

#include <iostream>
#include <lib.hpp>

#include "pid.h"
using std::cout;
using std::endl;

int main() {
  Pid test_pid(0.1, 0.1, 0.01);
  float vel = test_pid.new_velocity(100, 0);
  cout << "\nThe final velocity reached is :" << vel << endl;

  return 0;
}
