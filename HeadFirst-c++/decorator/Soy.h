#ifndef SOY_H
#define SOY_H
#include "CondimentDecorator.h"
class Soy:public CondimentDecorator{
public:
    Soy(Beverage *beverage);
    virtual string getDescription()override final;
    virtual double cost()override final;
    virtual ~Soy();
};

#endif // SOY_H
