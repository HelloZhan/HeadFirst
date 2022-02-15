#include "Tent.h"

Tent::Tent()
{
    this->name="Tent";
}

Tent::Tent(std::string name)
{
    this->name=name;
}

void Tent::setSiteNumber(int n)
{
    this->siteNumber=n;
}

int Tent::getSiteNumber()
{
    return siteNumber;
}

string Tent::getLocation()
{
    if(siteNumber==0)return "";
    else return "Site number " + std::to_string(this->siteNumber);
}

Tent::~Tent()
{

}
