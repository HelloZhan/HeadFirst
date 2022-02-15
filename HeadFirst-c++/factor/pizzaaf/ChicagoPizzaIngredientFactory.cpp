#include "ChicagoPizzaIngredientFactory.h"

Dough *ChicagoPizzaIngredientFactory::createDough()
{
    return new ThickCrustDough();
}

Sauce *ChicagoPizzaIngredientFactory::createSauce()
{
    return new PlumTomatoSauce();
}

Cheese *ChicagoPizzaIngredientFactory::createCheese()
{
    return new MozzarellaCheese();
}

vector<Veggies *> ChicagoPizzaIngredientFactory::createVeggies()
{
    vector<Veggies *>veggies;
    veggies.push_back(new BlackOlives());
    veggies.push_back(new Spinach());
    veggies.push_back(new Eggplant());
    return veggies;
}

Pepperoni *ChicagoPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni();
}

Clams *ChicagoPizzaIngredientFactory::createClam()
{
    return new FrozenClams();
}

ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{

}
