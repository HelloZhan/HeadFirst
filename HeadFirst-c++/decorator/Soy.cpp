#include "Soy.h"

Soy::Soy(Beverage *beverage)
{
    this->beverage=beverage;
}

string Soy::getDescription()
{
    return beverage->getDescription() + ", Soy";
}

double Soy::cost()
{
    double cost=beverage->cost();
    if(beverage->getSize()==TALL){
        cost += 0.10;
    }else if(beverage->getSize()==GRANDE){
        cost += 0.15;
    }else if(beverage->getSize()==VENTI){
        cost += 0.20;
    }
    return cost;
}

Soy::~Soy()
{

}
