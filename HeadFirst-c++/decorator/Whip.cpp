#include "Whip.h"

Whip::Whip(Beverage *beverage)
{
    this->beverage=beverage;
}

string Whip::getDescription()
{
    return beverage->getDescription() + ", Whip";
}

double Whip::cost()
{
    return 0.10 + beverage->cost();
}

Whip::~Whip()
{

}
