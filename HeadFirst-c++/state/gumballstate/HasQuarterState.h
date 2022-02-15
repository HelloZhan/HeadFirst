#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H
#include "State.h"
class GumballMachine;
class HasQuarterState:public State{
public:
    HasQuarterState(GumballMachine *gumballMachine);
    virtual void insertQuarter()override final;
    virtual void ejectQuarter()override final;
    virtual void turnCrank()override final;
    virtual void dispense()override final;
    virtual void refill()override final;
    virtual string toString()override final;
    virtual ~HasQuarterState();
private:
    GumballMachine *gumballMachine;
};

#endif // HASQUARTERSTATE_H
