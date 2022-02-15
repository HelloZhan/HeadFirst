#include "Mocha.h"

Mocha::Mocha(Beverage *beverage)
{
    this->beverage=beverage;
}

string Mocha::getDescription()
{
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost()
{
    return 0.20 + beverage->cost();
}

Mocha::~Mocha()
{

}
