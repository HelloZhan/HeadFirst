#ifndef LG_H
#define LG_H
#include "TV.h"
class LG:public TV{
    virtual void on()override final;
    virtual void off()override final;
    virtual void tuneChannel(int channel)override final;
    virtual int getChannel()override final;
    virtual ~LG();
private:
    int channel=1;
};

#endif // LG_H
