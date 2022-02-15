#ifndef SPECIALREMOTE_H
#define SPECIALREMOTE_H
#include "RemoteControl.h"
class SpecialRemote:public RemoteControl{
public:
    SpecialRemote(TVFactory *tvFactory);
    void up();
    void down();
    virtual ~SpecialRemote();
};

#endif // SPECIALREMOTE_H
