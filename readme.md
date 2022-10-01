## Team Driven Development for Team 5
Part 1 done by Tanmay Haldankar (Navigator) and Qamar Syed (Driver)

## Overview

Partner programming to make a PID controller, employ git/github, and googletest

## Standard install via command-line
```
git clone --recursive https://github.com/qamarzsyed/TDD_Team5_TQ
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
