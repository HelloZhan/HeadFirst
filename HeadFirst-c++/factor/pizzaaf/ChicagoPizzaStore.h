#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H
#include "PizzaStore.h"
class ChicagoPizzaStore:public PizzaStore{
public:
    virtual ~ChicagoPizzaStore();
protected:
    virtual Pizza *createPizza(string item)override final;

};

#endif // CHICAGOPIZZASTORE_H
