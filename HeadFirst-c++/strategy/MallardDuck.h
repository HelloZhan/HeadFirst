#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include "Duck.h"
class MallardDuck:public Duck{
public:
    MallardDuck();
    virtual void display()override final;
    virtual ~MallardDuck();
};

#endif // MALLARDDUCK_H
