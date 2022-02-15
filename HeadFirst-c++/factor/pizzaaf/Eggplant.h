#ifndef EGGPLANT_H
#define EGGPLANT_H
#include "Veggies.h"
class Eggplant:public Veggies{
public:
    virtual string toString()override final{
        return "Eggplant";
    };
    virtual ~Eggplant(){};
};

#endif // EGGPLANT_H
