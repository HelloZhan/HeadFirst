#include "SoldOutState.h"
#include "GumballMachine.h"

SoldOutState::SoldOutState(GumballMachine *gumballMachine)
{
    this->gumballMachine=gumballMachine;
}

void SoldOutState::insertQuarter()
{
    cout<<"You can't insert a quarter, the machine is sold out"<<endl;
}

void SoldOutState::ejectQuarter()
{
    cout<<"You can't eject, you haven't inserted a quarter yet"<<endl;
}

void SoldOutState::turnCrank()
{
    cout<<"You turned, but there are no gumballs"<<endl;
}

void SoldOutState::dispense()
{
    cout<<"No gumball dispensed"<<endl;
}

void SoldOutState::refill()
{
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

string SoldOutState::toString()
{
    return "sold out";
}

SoldOutState::~SoldOutState()
{

}
