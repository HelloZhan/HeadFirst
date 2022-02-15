#include "Milk.h"

Milk::Milk(Beverage *beverage)
{
    this->beverage=beverage;
}

string Milk::getDescription()
{
    return beverage->getDescription() + ", Milk";
}

double Milk::cost()
{
    return 0.10+beverage->cost();
}

Milk::~Milk()
{

}
