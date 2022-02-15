#include "GenericRemote.h"

GenericRemote::GenericRemote(TVFactory *tvFactory):RemoteControl(tvFactory)
{

}

void GenericRemote::nextChannel()
{
    int channel=getChannel();
    setChannel(channel+1);
}

void GenericRemote::prevChannel()
{
    int channel=getChannel();
    setChannel(channel-1);
}

GenericRemote::~GenericRemote()
{

}
