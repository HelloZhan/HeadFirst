#ifndef WILDTURKEY_H
#define WILDTURKEY_H
#include "Turkey.h"
class WildTurkey:public Turkey{
public:
    virtual void gobble()override final;
    virtual void fly()override final;
    virtual ~WildTurkey();
};

#endif // WILDTURKEY_H
