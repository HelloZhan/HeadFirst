#include "Pizza.h"
#include <iostream>
using std::cout;
using std::endl;
string Pizza::getName()
{
    return name;
}

Pizza::Pizza()
{
    name="";
    dough=nullptr;
    sauce=nullptr;
    vector<Veggies*> veggies;
    cheese=nullptr;
    pepperoni=nullptr;
    clam=nullptr;
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

void Pizza::setName(std::string name)
{
    this->name=name;
}

string Pizza::toString()
{
    string display="";
    display+="---- " + name + " ----\n";
    if(dough!=nullptr){
        display+=dough->toString()+"\n";
    }
    if(sauce!=nullptr){
        display+=sauce->toString()+"\n";
    }
    if(cheese!=nullptr){
        display+=cheese->toString()+"\n";
    }
    if(veggies.size()!=0){
        for(auto it:veggies){
            display+=it->toString()+", ";
        }
        display+="\n";
    }
    if(clam!=nullptr){
        display+=clam->toString()+"\n";
    }
    if(pepperoni!=nullptr){
        display+=pepperoni->toString()+"\n";
    }
    return display;
}

Pizza::~Pizza()
{

}
