#ifndef WINNERSTATE_H
#define WINNERSTATE_H
#include "State.h"
class GumballMachine;
class WinnerState:public State{
public:
    WinnerState(GumballMachine *gumballMachine);
    virtual void insertQuarter()override final;
    virtual void ejectQuarter()override final;
    virtual void turnCrank()override final;
    virtual void dispense()override final;
    virtual void refill()override final;
    virtual string toString()override final;
    virtual ~WinnerState();
private:
    GumballMachine *gumballMachine;
};

#endif // WINNERSTATE_H
