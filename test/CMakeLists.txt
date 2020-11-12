cmake_minimum_required(VERSION 3.17)

add_executable(ShapeSetTest ShapeSetTest.cpp)
add_executable(RectangularTest RectangularTest.cpp)
add_executable(TriangleTest TriangleTest.cpp)
add_executable(SphereTest SphereTest.cpp)

target_link_libraries(ShapeSetTest PUBLIC gtest_main Shape)
target_link_libraries(RectangularTest PUBLIC gtest_main Shape)
target_link_libraries(TriangleTest PUBLIC gtest_main Shape)
target_link_libraries(SphereTest PUBLIC gtest_main Shape)


add_test(
        NAME SphereTest
        COMMAND SphereTest
)

add_test(
        NAME TriangleTest
        COMMAND TriangleTest
)

add_test(
        NAME RectangularTest
        COMMAND RectangularTest
)

add_test(
        NAME ShapeSetTest
        COMMAND ShapeSetTest
)