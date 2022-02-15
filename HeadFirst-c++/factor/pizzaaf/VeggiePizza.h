#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class VeggiePizza:public Pizza{
public:
    VeggiePizza(PizzaIngredientFactory *ingredientFactory);
    virtual void prepare()override final;
    virtual ~VeggiePizza();
private:
    PizzaIngredientFactory *ingredientFactory;
};

#endif // VEGGIEPIZZA_H
