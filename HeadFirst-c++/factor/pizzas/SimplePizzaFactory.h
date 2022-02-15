#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H
#include "Pizza.h"
class SimplePizzaFactory{
public:
    Pizza *createPizza(string type);
};

#endif // SIMPLEPIZZAFACTORY_H
