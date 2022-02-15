#ifndef MUTEQUACK_H
#define MUTEQUACK_H
#include "QuackBehavior.h"
class MuteQuack:public QuackBehavior{
public:
    virtual void quack()override final;
    virtual ~MuteQuack();
};

#endif // MUTEQUACK_H
