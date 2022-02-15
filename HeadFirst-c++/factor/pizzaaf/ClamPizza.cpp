#include "ClamPizza.h"

ClamPizza::ClamPizza(PizzaIngredientFactory *ingredientFactory)
{
    this->ingredientFactory=ingredientFactory;
}

void ClamPizza::prepare()
{
    cout<<"Preparing "+name<<endl;
    dough=ingredientFactory->createDough();
    sauce=ingredientFactory->createSauce();
    cheese=ingredientFactory->createCheese();
    clam=ingredientFactory->createClam();
}

ClamPizza::~ClamPizza()
{

}
