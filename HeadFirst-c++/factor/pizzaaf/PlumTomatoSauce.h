#ifndef PLUMTOMATOSAUCE_H
#define PLUMTOMATOSAUCE_H
#include "Sauce.h"
class PlumTomatoSauce:public Sauce{
public:
    virtual string toString()override final{
        return "Tomato sauce with plum tomatoes";
    };
    virtual ~PlumTomatoSauce(){};
};

#endif // PLUMTOMATOSAUCE_H
