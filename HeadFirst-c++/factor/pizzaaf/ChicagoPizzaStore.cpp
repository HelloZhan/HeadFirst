#include "ChicagoPizzaStore.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
ChicagoPizzaStore::~ChicagoPizzaStore()
{

}

Pizza *ChicagoPizzaStore::createPizza(std::string item)
{
    Pizza *pizza = nullptr;
    PizzaIngredientFactory *ingredientFactory =
            new ChicagoPizzaIngredientFactory();

    if (item=="cheese") {

        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");

    } else if (item=="veggie") {

        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("Chicago Style Veggie Pizza");

    } else if (item=="clam") {

        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("Chicago Style Clam Pizza");

    } else if (item=="pepperoni") {

        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("Chicago Style Pepperoni Pizza");

    }
    return pizza;
}
