#include "Light.h"
#include <iostream>
using std::cout;
using std::endl;
Light::Light(std::string location)
{
    this->location=location;
}

void Light::on()
{
    level = 100;
    cout<<"Light is on"<<endl;
}

void Light::off()
{
    level=0;
    cout<<"Light is off"<<endl;
}

void Light::dim(int level)
{
    this->level=level;
    if(level==0){
        off();
    }else{
        cout<<"Light is dimmed to " << level << "%"<<endl;
    }
}

int Light::getLevel()
{
    return level;
}
