# cpp-boilerplate-v2

# C++ Boilerplate v2 Badges
![CICD Workflow status](https://github.com/SwarajMundruppadyRao/ENPM700-TDD-Group2/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) 


[![codecov](https://codecov.io/gh/SwarajMundruppadyRao/ENPM700-TDD-Group2/graph/badge.svg?token=bwMBuaCiUs)](https://codecov.io/gh/SwarajMundruppadyRao/ENPM700-TDD-Group2)

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)


## Overview

ENPM700 Software Development for Robotics, Test Driven Development exercise. Task is to implement a PID controller for a new mobile robot product development

Driver : Swaraj Mundruppady Rao 
Navigator : Harsh Senjaliya 


## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Run tests:
  cd build/; ctest; cd -
  # or if you have newer cmake
  ctest --test-dir build/
# Build docs:
  cmake --build build/ --target docs
  # open a web browser to browse the doc
  open docs/html/index.html
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```

## Building for code coverage

```bash
# if you don't have gcovr or lcov installed, do:
  sudo apt-get install gcovr lcov
# Set the build type to Debug and WANT_COVERAGE=ON
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Now, do a clean compile, run unit test, and generate the covereage report
  cmake --build build/ --clean-first --target all test_coverage
# open a web browser to browse the test coverage report
  open build/test_coverage/index.html
