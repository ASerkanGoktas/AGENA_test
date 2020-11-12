#ifndef RECTANGULAR_DEFINED
#define RECTANGULAR_DEFINED

#include <shape/shape.hpp>

template <int dim>
class Rectangular : public Shape<dim>
{
public:
        Rectangular(float sizes[])
        {
                m_sizes = new float[dim];
                for (int i = 0; i < dim; i++)
                {
                        float t = sizes[i];
                        m_sizes[i] = t;
                }
        }
        ~Rectangular()
        {
                delete m_sizes;
        }
        float measure()
        {
                float result = 1.0;
                for (int i = 0; i < dim; i++)
                {       
                        result = result * m_sizes[i];
                }

                return result;
        }

protected:
        float *m_sizes;
};

#endif