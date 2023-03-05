cmake_minimum_required(VERSION 3.1)

## Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})  # Var managed by CMake

## Add GTest required libraries to linker
link_libraries(${GTEST_LIBRARIES} gtest_main pthread)

## Set c++ 11 std
set(CMAKE_CXX_STANDARD 11)

## Include our source directories
set(CMAKE_INCLUDE_CURRENT_DIR True)

## Set gcov flags
set(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "-lgcov")

## Define executables for each test suite
set(SIMPLE "runSimpleTests")
add_executable(${SIMPLE} "test/src/simple_tests.cpp" "code/src/easy_math.cpp")

set(FIZZ_BUZZ "runFizzBuzzTests")
add_executable(${FIZZ_BUZZ} "test/src/fizzbuzz_tests.cpp" "code/src/fizz_buzz.cpp")

set(STRING_REVERSE "runStringReverse")
add_executable(${STRING_REVERSE} "test/src/string_reverse_tests.cpp" "code/src/string_reverse.cpp")

set(PARAM "runParamTests")
add_executable(${PARAM} "test/src/parametric_tests.cpp" "code/src/easy_math.cpp")
