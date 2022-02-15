#ifndef FROZENCLAMS_H
#define FROZENCLAMS_H
#include "Clams.h"
class FrozenClams:public Clams{
public:
    virtual string toString()override final{
        return "Frozen Clams from Chesapeake Bay";
    };
    virtual ~FrozenClams(){};
};

#endif // FROZENCLAMS_H
