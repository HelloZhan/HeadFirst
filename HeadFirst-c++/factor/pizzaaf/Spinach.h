#ifndef SPINACH_H
#define SPINACH_H
#include "Veggies.h"
class Spinach:public Veggies{
public:
    virtual string toString()override final{
        return "Spinach";
    };
    virtual ~Spinach(){};
};

#endif // SPINACH_H
