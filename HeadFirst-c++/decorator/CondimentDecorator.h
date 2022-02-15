#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "Beverage.h"
class CondimentDecorator:public Beverage{
public:
    CondimentDecorator();
    virtual string getDescription()=0;
    virtual ~CondimentDecorator();
    Beverage *beverage;
    Size getSize();
};

#endif // CONDIMENTDECORATOR_H
