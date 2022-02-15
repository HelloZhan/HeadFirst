#include <iostream>
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"
#include "Pizza.h"
using namespace std;

int main()
{
    SimplePizzaFactory *factory=new SimplePizzaFactory;
    PizzaStore *store=new PizzaStore(factory);

    Pizza *pizza=store->orderPizza("cheese");
    cout<<"We ordered a " + pizza->getName() + "\n"<<endl;
    cout<<pizza->toString()<<endl;

    pizza=store->orderPizza("veggie");
    cout<<"We ordered a " + pizza->getName() + "\n"<<endl;
    cout<<pizza->toString()<<endl;
    return 0;
}
