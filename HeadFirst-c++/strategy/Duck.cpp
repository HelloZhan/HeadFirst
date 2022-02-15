#include "Duck.h"
#include <iostream>
using std::cout;
using std::endl;
Duck::Duck()
{
    cout<<"function Duck"<<endl;
}

void Duck::swim()
{
    cout<<"All ducks float, even decoys!"<<endl;
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::setFlyBehavior(FlyBehavior *f)
{
    flyBehavior=f;
}

void Duck::setQuackBehavior(QuackBehavior *q)
{
    quackBehavior=q;
}

Duck::~Duck()
{
    cout<<"function ~Duck"<<endl;
    delete flyBehavior;
    delete quackBehavior;
}
