#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include "FlyBehavior.h"
class FlyWithWings:public FlyBehavior{
public:
    virtual void fly()override final;
    virtual ~FlyWithWings();
};

#endif // FLYWITHWINGS_H
