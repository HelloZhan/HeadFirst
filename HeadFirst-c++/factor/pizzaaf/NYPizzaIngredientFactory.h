#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H
#include "PizzaIngredientFactory.h"
class NYPizzaIngredientFactory:public PizzaIngredientFactory{
public:
    virtual Dough *createDough()override final;
    virtual Sauce *createSauce()override final;
    virtual Cheese *createCheese()override final;
    virtual vector<Veggies*> createVeggies()override final;
    virtual Pepperoni *createPepperoni()override final;
    virtual Clams *createClam()override final;
    virtual ~NYPizzaIngredientFactory();
};

#endif // NYPIZZAINGREDIENTFACTORY_H
