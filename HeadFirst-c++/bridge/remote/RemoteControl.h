#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include "TV.h"
#include "TVFactory.h"
class RemoteControl{
public:
    RemoteControl(TVFactory *tvFactory);
    virtual void on();
    virtual void off();
    virtual void setChannel(int channel);
    virtual int getChannel();
    virtual void setTV(string type);
    virtual ~RemoteControl();
private:
    TV *tv;
    TVFactory *tvFactory;
};

#endif // REMOTECONTROL_H
