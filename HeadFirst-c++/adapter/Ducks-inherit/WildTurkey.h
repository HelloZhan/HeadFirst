#ifndef WILDTURKEY_H
#define WILDTURKEY_H
#include "Turkey.h"
class WildTurkey:public virtual Turkey{
public:
    virtual void gobble()override final;
    virtual void fly()override;
    virtual ~WildTurkey();
};
#endif // WILDTURKEY_H
