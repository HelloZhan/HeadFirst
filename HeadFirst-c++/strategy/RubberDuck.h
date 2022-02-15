#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H
#include "Duck.h"
class RubberDuck:public Duck{
public:
    RubberDuck();
    RubberDuck(FlyBehavior *f,QuackBehavior *q);
    virtual void display()override final;
    virtual ~RubberDuck();
};

#endif // RUBBERDUCK_H
