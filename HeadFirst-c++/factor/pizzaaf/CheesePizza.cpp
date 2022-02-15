#include "CheesePizza.h"

CheesePizza::CheesePizza(PizzaIngredientFactory *ingredientFactory)
{
    this->ingredientFactory=ingredientFactory;
}

void CheesePizza::prepare()
{
    cout<<"Preparing "+name<<endl;
    dough=ingredientFactory->createDough();
    sauce=ingredientFactory->createSauce();
    cheese=ingredientFactory->createCheese();
}

CheesePizza::~CheesePizza()
{

}
