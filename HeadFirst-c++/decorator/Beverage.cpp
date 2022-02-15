#include "Beverage.h"

Beverage::Beverage()
{
    //cout<<"beverage"<<endl;
}

string Beverage::getDescription()
{
    return description;
}

Beverage::~Beverage()
{

}

void Beverage::setSize(Size size)
{
    this->size=size;
}

Size Beverage::getSize()
{
    return size;
}
