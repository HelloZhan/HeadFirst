#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class CheesePizza:public Pizza{
public:
    CheesePizza(PizzaIngredientFactory *ingredientFactory);
    virtual void prepare()override final;
    virtual ~CheesePizza();
private:
    PizzaIngredientFactory *ingredientFactory;
};

#endif // CHEESEPIZZA_H
