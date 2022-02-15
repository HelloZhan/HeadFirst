#ifndef SOLDSTATE_H
#define SOLDSTATE_H
#include "State.h"
class GumballMachine;
class SoldState:public State{
public:
    SoldState(GumballMachine *gumballMachine);
    virtual void insertQuarter()override final;
    virtual void ejectQuarter()override final;
    virtual void turnCrank()override final;
    virtual void dispense()override final;
    virtual void refill()override final;
    virtual string toString()override final;
    virtual ~SoldState();
private:
    GumballMachine *gumballMachine;
};

#endif // SOLDSTATE_H
