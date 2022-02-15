#ifndef COFFEE_H
#define COFFEE_H
#include "CaffeineBeverage.h"
class Coffee:public CaffeineBeverage{
public:
    virtual void brew()override final;
    virtual void addCondiments()override final;
    virtual ~Coffee();
};

#endif // COFFEE_H
