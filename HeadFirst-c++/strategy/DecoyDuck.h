#ifndef DECOYDUCK_H
#define DECOYDUCK_H
#include "Duck.h"
class DecoyDuck:public Duck{
public:
    DecoyDuck();
    virtual void display()override final;
    virtual ~DecoyDuck();
};

#endif // DECOYDUCK_H
