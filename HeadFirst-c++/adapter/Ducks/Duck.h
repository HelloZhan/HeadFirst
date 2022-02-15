#ifndef DUCK_H
#define DUCK_H
#include <iostream>
using std::cout;
using std::endl;
class Duck{
public:
    virtual void quack()=0;
    virtual void fly()=0;
    virtual ~Duck(){};
};

#endif // DUCK_H
