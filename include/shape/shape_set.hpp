#include <shape/shape.hpp>
#include <vector>

template <int dim>
class ShapeSet : public Shape<dim>
{
public:
        void add(Shape<dim> &shape)
        {
                m_shapes.push_back(&shape);
        }
        float measure()
        {
                float result = 0.0f;
                for (Shape<dim>* shape : m_shapes)
                {
                        result = result + shape->measure();
                }

                return result;
        }

private:
        std::vector<Shape<dim>*> m_shapes;
};