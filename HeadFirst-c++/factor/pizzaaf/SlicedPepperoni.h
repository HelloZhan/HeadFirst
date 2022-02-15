#ifndef SLICEDPEPPERONI_H
#define SLICEDPEPPERONI_H
#include "Pepperoni.h"
class SlicedPepperoni:public Pepperoni{
public:
    virtual string toString()override final{
        return "Sliced Pepperoni";
    };
    virtual ~SlicedPepperoni(){};
};

#endif // SLICEDPEPPERONI_H
