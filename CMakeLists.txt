cmake_minimum_required (VERSION 3.8.2)

message(STATUS "codecov test")
# comment
message(STATUS "CMAKE_CURRENT_SOURCE_DIR:${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_BINARY_DIR:${CMAKE_CURRENT_BINARY_DIR}")

find_package (Boost 1.59.0 REQUIRED COMPONENTS unit_test_framework)

include_directories(include)

enable_testing ()
add_subdirectory (test)
