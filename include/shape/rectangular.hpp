#ifndef RECTANGULAR_DEFINED
#define RECTANGULAR_DEFINED

#include <shape/shape.hpp>

template <int dim>
class Rectangular : public Shape<dim>
{
public:
        Rectangular(int sizes[])
        {
                m_sizes = new int[dim];
                for (int i = 0; i < dim; i++)
                {
                        m_sizes[i] = sizes[i];
                }
        }
        ~Rectangular()
        {
                delete m_sizes;
        }
        float measure()
        {
                float result = 1;
                for (int i = 0; i < dim; i++)
                {
                        result = result * m_sizes[i];
                }

                return result;
        }

private:
        int *m_sizes;
};

#endif