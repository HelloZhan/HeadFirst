#include "CeilingFan.h"
#include <iostream>
using std::cout;
using std::endl;
CeilingFan::CeilingFan(std::string location)
{
    this->location=location;
    speed=OFF;
}

void CeilingFan::high()
{
    speed = HIGH;
    cout<<location + " ceiling fan is on high"<<endl;
}

void CeilingFan::medium()
{
    speed = MEDIUM;
    cout<<location + " ceiling fan is on medium"<<endl;
}

void CeilingFan::low()
{
    speed = LOW;
    cout<<location + " ceiling fan is on low"<<endl;
}

void CeilingFan::off()
{
    speed = OFF;
    cout<<location + " ceiling fan is off"<<endl;
}

int CeilingFan::getSpeed()
{
    return speed;
}
