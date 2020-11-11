#include <shape/triangle.hpp>

Triangle::Triangle(float base, float height)
{
        m_base = base;
        m_height = height;
}

float Triangle::measure()
{
        return (0.5 * m_base * m_height);
}