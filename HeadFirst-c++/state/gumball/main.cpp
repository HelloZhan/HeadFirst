#include <iostream>
#include "GumballMachine.h"
using namespace std;

int main()
{
    GumballMachine *gumballMachine = new GumballMachine(5);

    cout<<gumballMachine->toString()<<endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout<<gumballMachine->toString()<<endl;

    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->turnCrank();

    cout<<gumballMachine->toString()<<endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->ejectQuarter();

    cout<<gumballMachine->toString()<<endl;

    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout<<gumballMachine->toString()<<endl;
    return 0;
}
