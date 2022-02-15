#include "SpecialRemote.h"

SpecialRemote::SpecialRemote(TVFactory *tvFactory):RemoteControl(tvFactory)
{

}

void SpecialRemote::up()
{
    int channel=getChannel();
    setChannel(channel+1);
}

void SpecialRemote::down()
{
    int channel=getChannel();
    setChannel(channel-1);
}

SpecialRemote::~SpecialRemote()
{

}
