#include "TheaterLights.h"

TheaterLights::TheaterLights(std::string description)
{
    this->description=description;
}

void TheaterLights::on()
{
    cout<<description + " on"<<endl;
}

void TheaterLights::off()
{
    cout<<description + " off"<<endl;
}

void TheaterLights::dim(int level)
{
    cout<<description + " dimming to " + std::to_string(level)  + "%"<<endl;
}

string TheaterLights::toString()
{
    return description;
}
