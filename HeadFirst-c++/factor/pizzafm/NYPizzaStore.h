#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "PizzaStore.h"
class NYPizzaStore:public PizzaStore{
public:
    virtual Pizza *createPizza(string item)override final;
    virtual ~NYPizzaStore();
};

#endif // NYPIZZASTORE_H
