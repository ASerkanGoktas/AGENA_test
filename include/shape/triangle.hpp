#include <shape/shape.hpp>


class Triangle : public Shape<2>
{
        public:
                Triangle(float base, float height);
                float measure();
        private:
                float m_base;
                float m_height;
};