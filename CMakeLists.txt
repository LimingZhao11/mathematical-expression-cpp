cmake_minimum_required(VERSION 3.23)
project(mathematical_expression_cpp)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(
        mathematical_expression_cpp SHARED src/core/Mathematical_Expression.cpp include/Mathematical_Expression.h)
