#ifndef WHIP_H
#define WHIP_H
#include "CondimentDecorator.h"
class Whip:public CondimentDecorator{
public:
    Whip(Beverage *beverage);
    virtual string getDescription()override final;
    virtual double cost()override final;
    virtual ~Whip();
};

#endif // WHIP_H
