#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "SimplePizzaFactory.h"
class PizzaStore{
public:
    SimplePizzaFactory *factory;
    PizzaStore(SimplePizzaFactory *factory);
    Pizza *orderPizza(string type);
};

#endif // PIZZASTORE_H
