#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "Beverage.h"
class Espresso:public Beverage{
public:
    Espresso();
    virtual double cost()override final;
    virtual ~Espresso();
};

#endif // ESPRESSO_H
