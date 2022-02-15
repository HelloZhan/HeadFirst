#ifndef FLYNOWAY_H
#define FLYNOWAY_H
#include "FlyBehavior.h"
class FlyNoWay:public FlyBehavior{
public:
    virtual void fly()override final;
    virtual ~FlyNoWay();
};

#endif // FLYNOWAY_H
