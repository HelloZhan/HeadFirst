#ifndef MUSHROOM_H
#define MUSHROOM_H
#include "Veggies.h"
class Mushroom:public Veggies{
public:
    virtual string toString()override final{
        return "Mushrooms";
    };
    virtual ~Mushroom(){};
};

#endif // MUSHROOM_H
