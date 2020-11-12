#include <gtest/gtest.h>
#include <shape/sphere.hpp>
#include <math.h>

using ::testing::TestWithParam;
using ::testing::Values;
using ::testing::Combine;

class SphereTest : public TestWithParam<::std::tuple<int>>
{

protected:
        void SetUp() override
        {
                int radius;
                ::std::tie(radius) = GetParam();
                m_sphere = new Sphere(radius);
        }

        Sphere *m_sphere;
        virtual ~SphereTest()
        {
                delete m_sphere;
        }
};

TEST(Example_test, Demonstrate)
{
        EXPECT_TRUE(true);
}

TEST_P(SphereTest, MeasuringVolume)
{
        int param;
        ::std::tie(param) = GetParam();

        float expected_vol = 4 * M_PI * pow(param, 3) / 3;
        float vol = m_sphere->measure();

        EXPECT_FLOAT_EQ(expected_vol, vol);
}

INSTANTIATE_TEST_SUITE_P(VariousRadiusParams, SphereTest, Combine(Values(1, 5, 1.2, 5.6)));