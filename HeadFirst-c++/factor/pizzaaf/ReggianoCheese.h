#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H
#include "Cheese.h"
class ReggianoCheese:public Cheese{
public:
    virtual string toString()override final{
        return "Reggiano Cheese";
    };
    virtual ~ReggianoCheese(){};
};

#endif // REGGIANOCHEESE_H
