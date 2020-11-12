#include <gtest/gtest.h>
#include <shape/shape_set.hpp>
#include <shape/rectangular.hpp>
#include <shape/sphere.hpp>
#include <shape/triangle.hpp>
#include <math.h>



TEST(ShapeSet, Dim2)
{       
        float val1[2] = {2.4, 6.4};
        float val2[2] = {5.2, 6.3};

        ShapeSet<2> set_2;
        Triangle tri(2, 3.2);
        Rectangular<2> rec1(val1);
        Rectangular<2> rec2(val2);

        set_2.add(tri);
        set_2.add(rec1);
        set_2.add(rec2);

        float expected = (2.4 * 6.4) + (5.2 * 6.3) + (2 * 3.2 * 0.5);
        float real = set_2.measure();

        EXPECT_FLOAT_EQ(expected, real);

}