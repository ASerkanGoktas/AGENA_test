#include <gtest/gtest.h>
#include <shape/rectangular.hpp>
#include <math.h>

using ::testing::Values;
using ::testing::Combine;

TEST(Rectangular, SqureMeasuring)
{
        float vals[2] = {2, 3};

        Rectangular<2> m_square(vals);
        float expected = 2 * 3;
        float real = m_square.measure();
        EXPECT_FLOAT_EQ(expected, real);
}


class RectangularDim3 : public ::testing::TestWithParam<::std::tuple<float, float, float>>
{
protected:
        void SetUp() override
        {
                float first, second, third;
                ::std::tie(first, second, third) = GetParam();

                float v[3] = {first, second, third};
                m_dim3 = new Rectangular<3>(v);

                
        }

        Rectangular<3> *m_dim3;
        void TearDown() override
        {
                delete m_dim3;
        }
};

TEST_P(RectangularDim3, Dim3Measuring)
{
        float first, second, third;
        ::std::tie(first, second, third) = GetParam();

        float expected = first * second * third;
        float real = m_dim3->measure();

        EXPECT_FLOAT_EQ(expected, real);
}

INSTANTIATE_TEST_SUITE_P(VariousParameters, RectangularDim3, Combine(Values(6, 2, 5.25, 71.2), Values(5.1, 7.4, 5.9, 36.142), Values(14, 24.2, 52.241, 65.341)));