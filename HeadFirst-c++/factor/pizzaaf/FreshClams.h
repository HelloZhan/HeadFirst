#ifndef FRESHCLAMS_H
#define FRESHCLAMS_H
#include "Clams.h"
class FreshClams:public Clams{
public:
    virtual string toString()override final{
        return "Fresh Clams from Long Island Sound";
    };
    virtual ~FreshClams(){};
};

#endif // FRESHCLAMS_H
