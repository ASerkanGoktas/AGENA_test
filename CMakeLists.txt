cmake_minimum_required(VERSION 3.17)
project(agena VERSION 1.0.0)


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