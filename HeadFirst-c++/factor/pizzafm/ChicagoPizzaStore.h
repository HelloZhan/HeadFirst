#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H
#include "PizzaStore.h"
class ChicagoPizzaStore:public PizzaStore{
public:
    virtual Pizza *createPizza(string item)override final;
    virtual ~ChicagoPizzaStore();
};

#endif // CHICAGOPIZZASTORE_H
