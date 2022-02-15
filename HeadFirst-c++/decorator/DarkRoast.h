#ifndef DARKROAST_H
#define DARKROAST_H
#include "Beverage.h"
class DarkRoast:public Beverage{
public:
    DarkRoast();
    virtual double cost()override final;
    ~DarkRoast();
};

#endif // DARKROAST_H
