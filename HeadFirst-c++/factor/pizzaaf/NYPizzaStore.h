#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "PizzaStore.h"
class NYPizzaStore:public PizzaStore{
public:
   virtual ~NYPizzaStore();
protected:
   virtual Pizza *createPizza(string item)override final;
};

#endif // NYPIZZASTORE_H
