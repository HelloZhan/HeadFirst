#ifndef CAFFEINEBEVERAGEWITHHOOK_H
#define CAFFEINEBEVERAGEWITHHOOK_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class CaffeineBeverageWithHook{
public:
    void prepareRecipe();
    virtual void brew()=0;
    virtual void addCondiments()=0;
    void boilWater();
    void pourInCup();
    virtual bool customerWantsCondiments();
    virtual ~CaffeineBeverageWithHook();
};

#endif // CAFFEINEBEVERAGEWITHHOOK_H
