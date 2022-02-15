#ifndef GENERICREMOTE_H
#define GENERICREMOTE_H
#include "RemoteControl.h"
class GenericRemote:public RemoteControl{
public:
    GenericRemote(TVFactory *tvFactory);
    void nextChannel();
    void prevChannel();
    virtual ~GenericRemote();
};

#endif // GENERICREMOTE_H
