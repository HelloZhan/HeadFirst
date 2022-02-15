#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Clams.h"
#include "AllIngredients.h"
#include <vector>
using std::vector;
class PizzaIngredientFactory{
public:
    virtual Dough *createDough()=0;
    virtual Sauce *createSauce()=0;
    virtual Cheese *createCheese()=0;
    virtual vector<Veggies*> createVeggies()=0;
    virtual Pepperoni *createPepperoni()=0;
    virtual Clams *createClam()=0;
    virtual ~PizzaIngredientFactory(){};
};

#endif // PIZZAINGREDIENTFACTORY_H
