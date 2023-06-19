# This line declares the minimum version of CMake that the buildsystem should require.
# CMake versions prior to 3.10 won't be able to interpret this file.
cmake_minimum_required(VERSION 3.10)

# This sets the name of the project to "LibraryManagementSystem".
# This will also set variables like "LibraryManagementSystem_SOURCE_DIR" and "LibraryManagementSystem_BINARY_DIR".
project(LibraryManagementSystem)

# This sets the C++ standard to C++17 and makes it a requirement.
# This means that if the compiler doesn't support C++17, it will throw an error.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# This line tells CMake to add the "include" directory to the list of directories
# where it should look for header files.
include_directories(include)

# This command creates a variable "SOURCES" that includes the names of all .cpp files
# found in the "src" directory. This uses a glob pattern to search for files.
file(GLOB SOURCES "src/*.cpp")

# This command tells CMake to generate an executable called "LibraryManagementSystem"
# using the source files specified in the "SOURCES" variable.
add_executable(${PROJECT_NAME} ${SOURCES})

# # Find the GTest package
# find_package(GTest REQUIRED)

# # Add include directories for GTest
# include_directories(${GTEST_INCLUDE_DIRS})

# # Create a test executable
# set(TEST_EXECUTABLE_NAME ${PROJECT_NAME}Tests)
# add_executable(${TEST_EXECUTABLE_NAME} tests/book_tests.cpp)

# # Link the GTest libraries, pthread library
# target_link_libraries(${TEST_EXECUTABLE_NAME} ${GTEST_LIBRARIES} pthread)

# # Enable testing and add the test
# enable_testing()
# add_test(NAME ${TEST_EXECUTABLE_NAME} COMMAND ${TEST_EXECUTABLE_NAME})
