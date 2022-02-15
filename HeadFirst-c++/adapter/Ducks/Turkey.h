#ifndef TURKEY_H
#define TURKEY_H
#include <iostream>
using std::cout;
using std::endl;
class Turkey{
public:
    virtual void gobble()=0;
    virtual void fly()=0;
    virtual ~Turkey(){};
};

#endif // TURKEY_H
