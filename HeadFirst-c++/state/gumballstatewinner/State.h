#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
class State{
public:
    virtual void insertQuarter()=0;
    virtual void ejectQuarter()=0;
    virtual void turnCrank()=0;
    virtual void dispense()=0;
    virtual void refill()=0;
    virtual string toString()=0;
    virtual ~State(){};
};

#endif // STATE_H
