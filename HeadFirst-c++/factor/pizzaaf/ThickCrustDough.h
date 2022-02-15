#ifndef THICKCRUSTDOUGH_H
#define THICKCRUSTDOUGH_H
#include "Dough.h"
class ThickCrustDough:public Dough{
public:
    virtual string toString()override final{
        return "ThickCrust style extra thick crust dough";
    };
    virtual ~ThickCrustDough(){};
};

#endif // THICKCRUSTDOUGH_H
