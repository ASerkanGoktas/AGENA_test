#include <gtest/gtest.h>
#include <shape/sphere.hpp>
#include <math.h>

class SphereTest : public testing::Test
{

        

        public:
                Sphere* m_sphere;
                SphereTest()
                {
                        m_sphere = new Sphere(2);
                }

                ~SphereTest()
                {
                        delete m_sphere;
                }
};

TEST(Example_test, Demonstrate)
{
        EXPECT_TRUE(true);
}

TEST_F(SphereTest, Testing_sphere)
{
        float res = 4 * M_PI * pow(2, 3) / 3;
        float res2 = m_sphere->measure();
        EXPECT_EQ(res, res2);
}