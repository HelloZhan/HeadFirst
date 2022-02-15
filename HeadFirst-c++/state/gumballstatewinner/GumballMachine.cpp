#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "WinnerState.h"
GumballMachine::GumballMachine(int numberGumballs)
{
    soldOutState=new SoldOutState(this);
    noQuarterState=new NoQuarterState(this);
    hasQuarterState=new HasQuarterState(this);
    soldState=new SoldState(this);
    winnerState=new WinnerState(this);
    this->count=numberGumballs;
    if(numberGumballs>0){
        state=noQuarterState;
    }
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    state->turnCrank();
    state->dispense();
}

void GumballMachine::releaseBall()
{
    cout<<"A gumball comes rolling out the slot..."<<endl;
    if(count>0){
        count--;
    }
}

int GumballMachine::getCount()
{
    return count;
}

void GumballMachine::refill(int count)
{
    this->count+=count;
    cout<<"The gumball machine was just refilled; its new count is: " + std::to_string(count)<<endl;
    state->refill();
}

void GumballMachine::setState(State *state)
{
    this->state=state;
}

State *GumballMachine::getState()
{
    return state;
}

State *GumballMachine::getSoldOutState()
{
    return soldOutState;
}

State *GumballMachine::getNoQuarterState()
{
    return noQuarterState;
}

State *GumballMachine::getHasQuarterState()
{
    return hasQuarterState;
}

State *GumballMachine::getSoldState()
{
    return soldState;
}

State *GumballMachine::getWinnerState()
{
    return winnerState;
}

string GumballMachine::toString()
{
    string result ="";
    result.append("\nMighty Gumball, Inc.");
    result.append("\nJava-enabled Standing Gumball Model #2004");
    result.append("\nInventory: " + std::to_string(count) + " gumball");
    if (count != 1) {
        result.append("s");
    }
    result.append("\n");
    result.append("Machine is " + state->toString() + "\n");
    return result;
}

GumballMachine::~GumballMachine()
{
    delete soldOutState;
    delete noQuarterState;
    delete hasQuarterState;
    delete soldState;
    delete winnerState;
}
