cmake_minimum_required(VERSION 3.17)

#add_executable(ShapeSetTest ShapeSetTest.cpp)
#add_executable(RectangularTest RectangularTest.cpp)
#add_executable(TriangleTest TriangleTest.cpp)
#add_executable(SphereTest SphereTest.cpp)


add_executable(mainTest main.cpp ShapeSetTest.cpp RectangularTest.cpp TriangleTest.cpp SphereTest.cpp)
target_link_libraries(mainTest PUBLIC gtest_main Shape)
#target_link_libraries(ShapeSetTest PUBLIC gtest_main Shape)
#target_link_libraries(RectangularTest PUBLIC gtest_main Shape)
#target_link_libraries(TriangleTest PUBLIC gtest_main Shape)
#target_link_libraries(SphereTest PUBLIC gtest_main Shape)

add_test(
        NAME mainTest
        COMMAND mainTest
)

#add_test(
#        NAME SphereTest
#        COMMAND SphereTest
#)

#add_test(
#        NAME TriangleTest
#        COMMAND TriangleTest
#)

# add_test(
#         NAME RectangularTest
#         COMMAND RectangularTest
# )

# add_test(
#         NAME ShapeSetTest
#         COMMAND ShapeSetTest
# )

add_custom_target(gcov
    COMMAND mkdir -p coverage
    COMMAND ${CMAKE_MAKE_PROGRAM} test
    COMMAND cp ./test/CMakeFiles/mainTest.dir/*.gc* ./coverage
    COMMAND cp ../test/main.cpp ./coverage
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

add_custom_command(TARGET gcov
    COMMAND echo "=================== GCOV ===================="
    COMMAND gcov -b mainTest.cpp
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/coverage
    )

add_dependencies(gcov mainTest)
