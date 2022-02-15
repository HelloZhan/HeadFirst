#include "NYPizzaIngredientFactory.h"

Dough *NYPizzaIngredientFactory::createDough()
{
    return new ThinCrustDough();
}

Sauce *NYPizzaIngredientFactory::createSauce()
{
    return new MarinaraSauce();
}

Cheese *NYPizzaIngredientFactory::createCheese()
{
    return new ReggianoCheese();
}

vector<Veggies *> NYPizzaIngredientFactory::createVeggies()
{
    vector<Veggies *>veggies;
    veggies.push_back(new Garlic());
    veggies.push_back(new Onion());
    veggies.push_back(new Mushroom());
    veggies.push_back(new RedPepper());
    return veggies;
}

Pepperoni *NYPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni();
}

Clams *NYPizzaIngredientFactory::createClam()
{
    return new FreshClams();
}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{

}
