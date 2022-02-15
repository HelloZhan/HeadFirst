#include "Sony.h"

void Sony::on()
{
    cout<<"Turning on the Sony TV"<<endl;
}

void Sony::off()
{
    cout<<"Turning off the Sony TV"<<endl;
}

void Sony::tuneChannel(int channel)
{
    this->station=channel;
    cout<<"Set the Sony TV station to " + std::to_string(this->station)<<endl;
}

int Sony::getChannel()
{
    return station;
}

Sony::~Sony()
{

}
