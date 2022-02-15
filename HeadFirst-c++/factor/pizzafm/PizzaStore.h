#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "Pizza.h"
class PizzaStore{
public:
    virtual Pizza *createPizza(string item)=0;
    Pizza *orderPizza(string type);
    virtual ~PizzaStore();
};
#endif // PIZZASTORE_H
