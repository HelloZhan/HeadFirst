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
}

void Pizza::bake()
{
    cout<<"Baking " + name<<endl;
}

void Pizza::cut()
{
    cout<<"Cutting " + name<<endl;
}

void Pizza::box()
{
    cout<<"Boxing " + name<<endl;
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
