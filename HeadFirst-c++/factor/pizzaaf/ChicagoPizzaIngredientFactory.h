#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H
#include "PizzaIngredientFactory.h"
class ChicagoPizzaIngredientFactory:public PizzaIngredientFactory{
public:
    virtual Dough *createDough()override final;
    virtual Sauce *createSauce()override final;
    virtual Cheese *createCheese()override final;
    virtual vector<Veggies*> createVeggies()override final;
    virtual Pepperoni *createPepperoni()override final;
    virtual Clams *createClam()override final;
    virtual ~ChicagoPizzaIngredientFactory();
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H
