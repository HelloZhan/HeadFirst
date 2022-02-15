#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H
#include "Turkey.h"
#include "Duck.h"
class TurkeyAdapter:public Duck{
public:
    TurkeyAdapter(Turkey *turkey);
    virtual void quack()override final;
    virtual void fly()override final;
    virtual ~TurkeyAdapter();
private:
    Turkey *turkey;
};

#endif // TURKEYADAPTER_H
