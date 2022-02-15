#ifndef WILDTURKEYADAPTER_H
#define WILDTURKEYADAPTER_H
#include "Duck.h"
#include "WildTurkey.h"
class WildTurkeyAdapter:public Duck,public WildTurkey{
public:
    WildTurkeyAdapter();
    virtual void fly()override final;
    virtual void quack()override final;
    virtual ~WildTurkeyAdapter();
};
#endif // WILDTURKEYADAPTER_H
