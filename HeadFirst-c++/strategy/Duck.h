#ifndef DUCK_H
#define DUCK_H
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class Duck{
public:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

    Duck();
    void swim();
    virtual void display()=0;
    void performQuack();
    void performFly();
    void setFlyBehavior(FlyBehavior *f);
    void setQuackBehavior(QuackBehavior *q);

    virtual ~Duck();
};

#endif // DUCK_H
