#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include "Duck.h"
class MallardDuck:public Duck{
public:
    virtual void quack()override final;
    virtual void fly()override final;
    virtual ~MallardDuck();
};

#endif // MALLARDDUCK_H
