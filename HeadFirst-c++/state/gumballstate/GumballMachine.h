#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include "State.h"
#include <string>
using std::string;
class GumballMachine{
public:
    GumballMachine(int numberGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void releaseBall();
    int getCount();
    void refill(int count);
    void setState(State *state);
    State *getState();
    State *getSoldOutState();
    State *getNoQuarterState();
    State *getHasQuarterState();
    State *getSoldState();
    string toString();
    ~GumballMachine();
private:
    State *state;
    int count=0;
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
};

#endif // GUMBALLMACHINE_H
