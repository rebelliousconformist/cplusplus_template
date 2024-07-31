cmake_minimum_required(VERSION 3.0.0)
project(summation VERSION 0.1.0)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# include(CTest)
enable_testing()

#googletest 

add_executable(
  hello_test
  test/hello_test.cc
)
target_link_libraries(
  hello_test
  gtest_main
  meaner
)

include(GoogleTest)
gtest_discover_tests(hello_test)

# example library
add_library(meaner meaner.cpp)

# testing binary
add_executable(cpp_test test/test.cpp)
target_link_libraries(cpp_test PRIVATE meaner)

# define tests
add_test(
  NAME cpp_test
  COMMAND $<TARGET_FILE:cpp_test>
  )

add_executable(summation main.cpp )
target_link_libraries(summation PRIVATE meaner)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
