#include "PizzaStore.h"
#include <iostream>
using std::cout;
using std::endl;
Pizza *PizzaStore::orderPizza(std::string type)
{
    Pizza *pizza=createPizza(type);
    cout<<"--- Making a " + pizza->getName() + " ---"<<endl;
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

PizzaStore::~PizzaStore()
{

}
