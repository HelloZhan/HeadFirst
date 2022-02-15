#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H
#include "Dough.h"
class ThinCrustDough:public Dough{
public:
    virtual string toString()override final{
        return "Thin Crust Dough";
    };
    virtual ~ThinCrustDough(){};
};

#endif // THINCRUSTDOUGH_H
