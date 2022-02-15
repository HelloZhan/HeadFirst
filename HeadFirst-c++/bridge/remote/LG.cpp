#include "LG.h"

void LG::on()
{
    cout<<"Turning on the LG TV"<<endl;
}

void LG::off()
{
    cout<<"Turning off the LG TV"<<endl;
}

void LG::tuneChannel(int channel)
{
    this->channel=channel;
    cout<<"Set the LG TV Channel to " + std::to_string(this->channel)<<endl;
}

int LG::getChannel()
{
    return channel;
}

LG::~LG()
{

}
