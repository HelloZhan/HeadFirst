#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
enum{SOLD_OUT,NO_QUARTER,HAS_QUARTER,SOLD};
class GumballMachine{
public:
    GumballMachine(int count);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void refill(int numGumBalls);
    string toString();
private:
    int state=SOLD_OUT;
    int count=0;
};

#endif // GUMBALLMACHINE_H
