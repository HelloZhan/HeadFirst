#include "VeggiePizza.h"

VeggiePizza::VeggiePizza(PizzaIngredientFactory *ingredientFactory)
{
    this->ingredientFactory=ingredientFactory;
}

void VeggiePizza::prepare()
{
    cout<<"Preparing "+name<<endl;
    dough=ingredientFactory->createDough();
    sauce=ingredientFactory->createSauce();
    cheese=ingredientFactory->createCheese();
    veggies=ingredientFactory->createVeggies();
}

VeggiePizza::~VeggiePizza()
{

}
