#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class ClamPizza:public Pizza{
public:
    ClamPizza(PizzaIngredientFactory *ingredientFactory);
    virtual void prepare()override final;
    virtual ~ClamPizza();
private:
    PizzaIngredientFactory *ingredientFactory;
};

#endif // CLAMPIZZA_H
