#ifndef DUCK_H
#define DUCK_H
#include <iostream>
using std::cout;
using std::endl;
class Duck{
public:
    virtual void quack()=0;
    virtual void fly(){cout<<"Duck fly"<<endl;};
    virtual ~Duck(){};
};
#endif // DUCK_H
