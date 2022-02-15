#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"
Pizza *ChicagoPizzaStore::createPizza(std::string item)
{
    if (item=="cheese") {
        return new ChicagoStyleCheesePizza();
    } else if (item=="veggie") {
        return new ChicagoStyleVeggiePizza();
    } else if (item=="clam") {
        return new ChicagoStyleClamPizza();
    } else if (item=="pepperoni") {
        return new ChicagoStylePepperoniPizza();
    } else return NULL;
}

ChicagoPizzaStore::~ChicagoPizzaStore()
{

}
