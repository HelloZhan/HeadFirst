#include "RemoteControl.h"

RemoteControl::RemoteControl(TVFactory *tvFactory)
{
    this->tvFactory=tvFactory;
}

void RemoteControl::on()
{
    tv->on();
}

void RemoteControl::off()
{
    tv->off();
}

void RemoteControl::setChannel(int channel)
{
    tv->tuneChannel(channel);
}

int RemoteControl::getChannel()
{
    return tv->getChannel();
}

void RemoteControl::setTV(std::string type)
{
    tv=tvFactory->getTV(type);
}

RemoteControl::~RemoteControl()
{

}
