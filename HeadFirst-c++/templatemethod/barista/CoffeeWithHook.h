#ifndef COFFEEWITHHOOK_H
#define COFFEEWITHHOOK_H
#include "CaffeineBeverageWithHook.h"
#include <string>
using std::string;
class CoffeeWithHook:public CaffeineBeverageWithHook{
public:
    virtual void brew()override final;
    virtual void addCondiments()override final;
    virtual bool customerWantsCondiments()override final;
private:
    string getUserInput();
};

#endif // COFFEEWITHHOOK_H
