#ifndef TV_H
#define TV_H
#include <iostream>
using std::cout;
using std::endl;
class TV{
public:
    virtual void on()=0;
    virtual void off()=0;
    virtual void tuneChannel(int channel)=0;
    virtual int getChannel()=0;
    virtual ~TV(){};
};

#endif // TV_H
