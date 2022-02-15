#ifndef MOZZARELLACHEESE_H
#define MOZZARELLACHEESE_H
#include "Cheese.h"
class MozzarellaCheese:public Cheese{
public:
    virtual string toString()override final{
        return "Shredded Mozzarella";
    };
    virtual ~MozzarellaCheese(){};
};

#endif // MOZZARELLACHEESE_H
