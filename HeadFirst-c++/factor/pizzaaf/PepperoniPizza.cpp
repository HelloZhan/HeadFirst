#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *ingredientFactory)
{
    this->ingredientFactory=ingredientFactory;
}

void PepperoniPizza::prepare()
{
    cout<<"Preparing "+name<<endl;
    dough=ingredientFactory->createDough();
    sauce=ingredientFactory->createSauce();
    cheese=ingredientFactory->createCheese();
    veggies=ingredientFactory->createVeggies();
    pepperoni=ingredientFactory->createPepperoni();
}

PepperoniPizza::~PepperoniPizza()
{

}
