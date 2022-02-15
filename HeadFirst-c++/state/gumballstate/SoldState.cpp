#include "SoldState.h"
#include "GumballMachine.h"

SoldState::SoldState(GumballMachine *gumballMachine)
{
    this->gumballMachine=gumballMachine;
}

void SoldState::insertQuarter()
{
    cout<<"Please wait, we're already giving you a gumball"<<endl;
}

void SoldState::ejectQuarter()
{
    cout<<"Sorry, you already turned the crank"<<endl;
}

void SoldState::turnCrank()
{
    cout<<"Turning twice doesn't get you another gumball!"<<endl;
}

void SoldState::dispense()
{
    gumballMachine->releaseBall();
    if (gumballMachine->getCount() > 0) {
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    } else {
        cout<<"Oops, out of gumballs!"<<endl;
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}

void SoldState::refill()
{

}

string SoldState::toString()
{
    return "dispensing a gumball";
}

SoldState::~SoldState()
{

}
