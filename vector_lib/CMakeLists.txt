add_library(vector
        src/vector.cpp
        src/vector.h)

target_include_directories(vector PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")