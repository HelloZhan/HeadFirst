#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class PizzaStore{
public:
    Pizza *orderPizza(string type);
    virtual ~PizzaStore();
protected:
    virtual Pizza *createPizza(string item)=0;

};

#endif // PIZZASTORE_H
