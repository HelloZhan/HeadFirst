#include <iostream>
#include "GumballMachine.h"
using namespace std;

int main()
{
    GumballMachine *gumballMachine = new GumballMachine(2);

    cout<<gumballMachine->toString()<<endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout<<gumballMachine->toString()<<endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    gumballMachine->refill(5);
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout<<gumballMachine->toString()<<endl;
    return 0;
}
