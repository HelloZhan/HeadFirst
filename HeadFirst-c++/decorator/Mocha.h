#ifndef MOCHA_H
#define MOCHA_H
#include "CondimentDecorator.h"
class Mocha:public CondimentDecorator{
public:
    Mocha(Beverage *beverage);
    virtual string getDescription()override final;
    virtual double cost()override final;
    virtual ~Mocha();
};

#endif // MOCHA_H
