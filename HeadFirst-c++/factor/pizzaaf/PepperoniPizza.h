#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class PepperoniPizza:public Pizza{
public:
    PepperoniPizza(PizzaIngredientFactory *ingredientFactory);
    virtual void prepare()override final;
    virtual ~PepperoniPizza();
private:
    PizzaIngredientFactory *ingredientFactory;
};

#endif // PEPPERONIPIZZA_H
