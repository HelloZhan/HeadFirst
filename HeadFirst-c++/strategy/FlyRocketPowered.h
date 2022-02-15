#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H
#include "FlyBehavior.h"
class FlyRocketPowered:public FlyBehavior{
public:
    virtual void fly()override final;
    virtual ~FlyRocketPowered();
};

#endif // FLYROCKETPOWERED_H
