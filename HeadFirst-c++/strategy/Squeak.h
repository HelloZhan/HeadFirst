#ifndef SQUEAK_H
#define SQUEAK_H
#include "QuackBehavior.h"
class Squeak:public QuackBehavior{
public:
    virtual void quack()override final;
    virtual ~Squeak();
};

#endif // SQUEAK_H
