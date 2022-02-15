#include "GumballMachine.h"

GumballMachine::GumballMachine(int count)
{
    this->count=count;
    if(count>0){
        state=NO_QUARTER;
    }
}

void GumballMachine::insertQuarter()
{
    if (state == HAS_QUARTER) {
        cout<<"You can't insert another quarter"<<endl;
    } else if (state == NO_QUARTER) {
        state = HAS_QUARTER;
        cout<<"You inserted a quarter"<<endl;
    } else if (state == SOLD_OUT) {
        cout<<"You can't insert a quarter, the machine is sold out"<<endl;
    } else if (state == SOLD) {
        cout<<"Please wait, we're already giving you a gumball"<<endl;
    }
}

void GumballMachine::ejectQuarter()
{
    if (state == HAS_QUARTER) {
        cout<<"Quarter returned"<<endl;
        state = NO_QUARTER;
    } else if (state == NO_QUARTER) {
        cout<<"You haven't inserted a quarter"<<endl;
    } else if (state == SOLD) {
        cout<<"Sorry, you already turned the crank"<<endl;
    } else if (state == SOLD_OUT) {
        cout<<"You can't eject, you haven't inserted a quarter yet"<<endl;
    }
}

void GumballMachine::turnCrank()
{
    if (state == SOLD) {
        cout<<"Turning twice doesn't get you another gumball!"<<endl;
    } else if (state == NO_QUARTER) {
        cout<<"You turned but there's no quarter"<<endl;
    } else if (state == SOLD_OUT) {
        cout<<"You turned, but there are no gumballs"<<endl;
    } else if (state == HAS_QUARTER) {
        cout<<"You turned..."<<endl;
        state = SOLD;
        dispense();
    }
}

void GumballMachine::dispense()
{
    if (state == SOLD) {
        cout<<"A gumball comes rolling out the slot"<<endl;
        count = count - 1;
        if (count == 0) {
            cout<<"Oops, out of gumballs!"<<endl;
            state = SOLD_OUT;
        } else {
            state = NO_QUARTER;
        }
    } else if (state == NO_QUARTER) {
        cout<<"You need to pay first"<<endl;
    } else if (state == SOLD_OUT) {
        cout<<"No gumball dispensed"<<endl;
    } else if (state == HAS_QUARTER) {
        cout<<"No gumball dispensed"<<endl;
    }
}

void GumballMachine::refill(int numGumBalls)
{
    this->count = numGumBalls;
    state = NO_QUARTER;
}

string GumballMachine::toString()
{
    string result="";
    result.append("\nMighty Gumball, Inc.");
    result.append("\nJava-enabled Standing Gumball Model #2004\n");
    result.append("Inventory: " + std::to_string(count) + " gumball");
    if (count != 1) {
        result.append("s");
    }
    result.append("\nMachine is ");
    if (state == SOLD_OUT) {
        result.append("sold out");
    } else if (state == NO_QUARTER) {
        result.append("waiting for quarter");
    } else if (state == HAS_QUARTER) {
        result.append("waiting for turn of crank");
    } else if (state == SOLD) {
        result.append("delivering a gumball");
    }
    result.append("\n");
    return result;
}
