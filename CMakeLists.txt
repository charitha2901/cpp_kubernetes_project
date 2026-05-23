cmake_minimum_required(VERSION 3.10)

project(CppKubernetesProject)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(app main.cpp)

add_executable(unit_tests tests/test_main.cpp)

target_link_libraries(unit_tests gtest_main)

include(GoogleTest)

gtest_discover_tests(unit_tests)