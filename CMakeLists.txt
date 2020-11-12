cmake_minimum_required(VERSION 3.17)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(agena VERSION 1.0.0)

enable_testing()

add_library(
        Shape STATIC
        src/sphere.cpp
        src/triangle.cpp
        include/shape/rectangular.hpp
        include/shape/shape_set.hpp
        include/shape/shape.hpp
        include/shape/sphere.hpp
        include/shape/triangle.hpp
)

target_include_directories(Shape PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(googletest)
add_subdirectory(test)