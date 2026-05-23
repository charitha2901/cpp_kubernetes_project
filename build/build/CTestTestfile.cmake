# CMake generated Testfile for 
# Source directory: D:/C++_Kubernetes_Project/C++_Kubernetes
# Build directory: D:/C++_Kubernetes_Project/C++_Kubernetes/build/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(CalculatorTests "D:/C++_Kubernetes_Project/C++_Kubernetes/build/build/Debug/runTests.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;21;add_test;D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(CalculatorTests "D:/C++_Kubernetes_Project/C++_Kubernetes/build/build/Release/runTests.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;21;add_test;D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(CalculatorTests "D:/C++_Kubernetes_Project/C++_Kubernetes/build/build/MinSizeRel/runTests.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;21;add_test;D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(CalculatorTests "D:/C++_Kubernetes_Project/C++_Kubernetes/build/build/RelWithDebInfo/runTests.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;21;add_test;D:/C++_Kubernetes_Project/C++_Kubernetes/CMakeLists.txt;0;")
else()
  add_test(CalculatorTests NOT_AVAILABLE)
endif()
