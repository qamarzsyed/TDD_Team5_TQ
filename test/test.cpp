/**
 * @file test.cpp
 * @author Qamar Syed (qsyed@umd.edu) and Tanmay Haldankar (tanmayh@umd.edu)
 * @brief unit testing for Pid class
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <gtest/gtest.h>
#include "pid.h"

/**
 * @brief Instantiate a Pid controller and then run two compute tests on the new_velocity function
 * 
 */
Pid test_pid(1,1,1);


TEST(compute_test, case1) {
  EXPECT_EQ(test_pid.new_velocity(0, 0), 0);
}

TEST(compute_test, case2) {
  EXPECT_EQ(test_pid.new_velocity(1, 1), 1);
}
