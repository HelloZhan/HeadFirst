#include "Pizza.h"
#include <iostream>
using std::cout;
using std::endl;
string Pizza::getName()
{
    return name;
}

void Pizza::prepare()
{
    cout<<"Preparing "+name<<endl;
    cout<<"Tossing dough..."<<endl;
    cout<<"Adding sauce..."<<endl;
    cout<<"Adding toppings: "<<endl;
    for(auto topping:toppings){
        cout<<"   " + topping<<endl;
    }
}

void Pizza::bake()
{
    cout<<"Bake for 25 minutes at 350"<<endl;
}

void Pizza::cut()
{
    cout<<"Cut the pizza into diagonal slices"<<endl;
}

void Pizza::box()
{
    cout<<"Place pizza in official PizzaStore box"<<endl;
}

string Pizza::toString()
{
    string display="";
    display+="---- " + name + " ----\n";
    display+=dough + "\n";
    display+=sauce + "\n";
    for(auto topping:toppings){
        display+=topping+"\n";
    }
    return display;
}

Pizza::~Pizza()
{

}
