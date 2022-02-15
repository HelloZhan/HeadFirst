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
    State *getWinnerState();
    string toString();
    ~GumballMachine();
private:
    State *state=soldOutState;
    int count=0;
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *winnerState;
};

#endif // GUMBALLMACHINE_H
