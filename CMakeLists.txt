cmake_minimum_required(VERSION 3.10)

project(CalculatorProject)

set(CMAKE_CXX_STANDARD 17)

add_library(calculator src/calculator.cpp)

add_executable(app main.cpp)

target_link_libraries(app calculator)

enable_testing()

find_package(GTest REQUIRED)

add_executable(runTests tests/test_calculator.cpp)

target_link_libraries(runTests calculator GTest::GTest GTest::Main)

add_test(NAME CalculatorTests COMMAND runTests)