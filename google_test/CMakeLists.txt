cmake_minimum_required(VERSION 3.20)
project(Google_test)

set(CMAKE_CXX_STANDARD 23)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(google_test_run googleTest.cpp ../vector_lib/src/vector.cpp ../vector_lib/src/vector.h)
target_link_libraries(google_test_run gtest_main)