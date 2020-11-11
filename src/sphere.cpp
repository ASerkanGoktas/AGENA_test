#include <shape/sphere.hpp>
#include <math.h>

Sphere::Sphere(int radius)
{
        m_radius = radius;
}

float Sphere::measure()
{
        return 4 * M_PI * pow(m_radius, 3) / 3;
}