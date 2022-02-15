#include "WinnerState.h"
#include "GumballMachine.h"

WinnerState::WinnerState(GumballMachine *gumballMachine)
{
    this->gumballMachine=gumballMachine;
}

void WinnerState::insertQuarter()
{
    cout<<"Please wait, we're already giving you a Gumball"<<endl;
}

void WinnerState::ejectQuarter()
{
    cout<<"Please wait, we're already giving you a Gumball"<<endl;
}

void WinnerState::turnCrank()
{
    cout<<"Turning again doesn't get you another gumball!"<<endl;
}

void WinnerState::dispense()
{
    gumballMachine->releaseBall();
    if (gumballMachine->getCount() == 0) {
        gumballMachine->setState(gumballMachine->getSoldOutState());
    } else {
        gumballMachine->releaseBall();
        cout<<"YOU'RE A WINNER! You got two gumballs for your quarter"<<endl;
        if (gumballMachine->getCount() > 0) {
            gumballMachine->setState(gumballMachine->getNoQuarterState());
        } else {
            cout<<"Oops, out of gumballs!"<<endl;
            gumballMachine->setState(gumballMachine->getSoldOutState());
        }
    }
}

void WinnerState::refill()
{

}

string WinnerState::toString()
{
    return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
}

WinnerState::~WinnerState()
{

}
