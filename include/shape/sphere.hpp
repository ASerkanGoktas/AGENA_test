#include <shape/shape.hpp>

class Sphere : public Shape<3>
{
        public:
                Sphere(int radius);
                float measure();
        private:
                int m_radius;
};