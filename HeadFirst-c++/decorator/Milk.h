#ifndef MILK_H
#define MILK_H
#include "CondimentDecorator.h"
class Milk:public CondimentDecorator{
public:
    Milk(Beverage *beverage);
    virtual string getDescription()override final;
    virtual double cost()override final;
    virtual ~Milk();
};

#endif // MILK_H
