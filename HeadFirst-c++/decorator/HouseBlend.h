#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Beverage.h"
class HouseBlend:public Beverage{
public:
    HouseBlend();
    virtual double cost()override final;
    virtual ~HouseBlend();
};

#endif // HOUSEBLEND_H
