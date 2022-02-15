#ifndef QUACK_H
#define QUACK_H
#include "QuackBehavior.h"
class Quack:public QuackBehavior{
    virtual void quack()override final;
    virtual ~Quack();
};

#endif // QUACK_H
