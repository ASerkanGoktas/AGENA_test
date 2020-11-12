#include <gtest/gtest.h>
#include <shape/triangle.hpp>
#include <math.h>

using ::testing::TestWithParam;
using ::testing::Values;
using ::testing::Combine;

class TriangleTest : public TestWithParam<::std::tuple<int, int>>
{

protected:
        void SetUp() override
        {
                int base, height;
                ::std::tie(base, height) = GetParam();
                m_triangle = new Triangle(base, height);
        }

        Triangle *m_triangle;
        void TearDown() override
        {
                delete m_triangle;
        }
};



TEST_P(TriangleTest, MeasuringVolume)
{
        int base, height;
        ::std::tie(base, height) = GetParam();

        float expected_vol = base * height * 0.5;
        float vol = m_triangle->measure();

        EXPECT_EQ(expected_vol, vol);
}

INSTANTIATE_TEST_SUITE_P(VariousHeightnBaseParams, TriangleTest, Combine(Values(4, 1, 3, 5), Values(1, 5, 1.2, 5.6)));