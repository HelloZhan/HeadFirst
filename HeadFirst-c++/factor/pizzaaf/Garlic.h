#ifndef GARLIC_H
#define GARLIC_H
#include "Veggies.h"
class Garlic:public Veggies{
public:
    virtual string toString()override final{
        return "Garlic";
    };
    virtual ~Garlic(){};
};

#endif // GARLIC_H
