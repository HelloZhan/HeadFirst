#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H
#include "State.h"
class GumballMachine;
class SoldOutState:public State{
public:
    SoldOutState(GumballMachine *gumballMachine);
    virtual void insertQuarter()override final;
    virtual void ejectQuarter()override final;
    virtual void turnCrank()override final;
    virtual void dispense()override final;
    virtual void refill()override final;
    virtual string toString()override final;
    virtual ~SoldOutState();
private:
    GumballMachine *gumballMachine;
};

#endif // SOLDOUTSTATE_H
