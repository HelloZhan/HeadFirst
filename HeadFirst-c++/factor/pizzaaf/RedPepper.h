#ifndef REDPEPPER_H
#define REDPEPPER_H
#include "Veggies.h"
class RedPepper:public Veggies{
public:
    virtual string toString()override final{
        return "Red Pepper";
    };
    virtual ~RedPepper(){};
};

#endif // REDPEPPER_H
