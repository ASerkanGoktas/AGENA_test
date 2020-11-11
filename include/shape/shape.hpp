#ifndef SHAPE_DEFINED
#define SHAPE_DEFINED

template <int dim>
class Shape
{
        public:
                virtual float measure() = 0;
                virtual ~Shape(){};
};

#endif