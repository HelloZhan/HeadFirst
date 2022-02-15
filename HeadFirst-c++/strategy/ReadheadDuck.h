#ifndef READHEADDUCK_H
#define READHEADDUCK_H
#include "Duck.h"
class ReadheadDuck:public Duck{
public:
    ReadheadDuck();
    virtual void display()override final;
    virtual ~ReadheadDuck();
};

#endif // READHEADDUCK_H
