#ifndef DUCKADAPTER_H
#define DUCKADAPTER_H
#include "Turkey.h"
#include "Duck.h"
class DuckAdapter:public Turkey{
public:
    DuckAdapter(Duck *duck);
    virtual void gobble()override final;
    virtual void fly()override final;
    virtual ~DuckAdapter();
private:
    Duck *duck;
};

#endif // DUCKADAPTER_H
