#ifndef SONY_H
#define SONY_H
#include "TV.h"
class Sony:public TV{
public:
    virtual void on()override final;
    virtual void off()override final;
    virtual void tuneChannel(int channel)override final;
    virtual int getChannel()override final;
    virtual ~Sony();
private:
    int station=0;
};

#endif // SONY_H
