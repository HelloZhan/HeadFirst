#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"
Pizza *NYPizzaStore::createPizza(std::string item)
{
    if (item=="cheese") {
        return new NYStyleCheesePizza();
    } else if (item=="veggie") {
        return new NYStyleVeggiePizza();
    } else if (item=="clam") {
        return new NYStyleClamPizza();
    } else if (item=="pepperoni") {
        return new NYStylePepperoniPizza();
    } else return NULL;
}

NYPizzaStore::~NYPizzaStore()
{

}
