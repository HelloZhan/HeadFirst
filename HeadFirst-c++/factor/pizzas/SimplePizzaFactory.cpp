#include "SimplePizzaFactory.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"
Pizza *SimplePizzaFactory::createPizza(std::string type)
{
    Pizza *pizza=NULL;

    if(type=="cheese"){
        pizza = new CheesePizza();
    }else if(type=="pepperoni"){
        pizza = new PepperoniPizza();
    }else if(type=="clam"){
        pizza = new ClamPizza();
    }else if(type=="veggie"){
        pizza = new VeggiePizza();
    }
    return pizza;
}
