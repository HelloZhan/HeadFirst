#ifndef ONION_H
#define ONION_H
#include "Veggies.h"
class Onion:public Veggies{
public:
    virtual string toString()override final{
        return "Onion";
    };
    virtual ~Onion(){};
};

#endif // ONION_H
