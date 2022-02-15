#ifndef BLACKOLIVES_H
#define BLACKOLIVES_H
#include "Veggies.h"
class BlackOlives:public Veggies{
public:
    virtual string toString()override final{
        return "Black Olives";
    };
    virtual ~BlackOlives(){};
};

#endif // BLACKOLIVES_H
