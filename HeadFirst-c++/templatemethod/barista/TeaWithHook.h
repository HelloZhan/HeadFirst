#ifndef TEAWITHHOOK_H
#define TEAWITHHOOK_H
#include "CaffeineBeverageWithHook.h"
#include <string>
using std::string;
class TeaWithHook:public CaffeineBeverageWithHook{
public:
    virtual void brew()override final;
    virtual void addCondiments()override final;
    virtual bool customerWantsCondiments()override final;
private:
    string getUserInput();
};

#endif // TEAWITHHOOK_H
