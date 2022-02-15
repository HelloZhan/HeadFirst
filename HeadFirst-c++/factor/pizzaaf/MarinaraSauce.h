#ifndef MARINARASAUCE_H
#define MARINARASAUCE_H
#include "Sauce.h"
class MarinaraSauce:public Sauce{
public:
    virtual string toString()override final{
        return "Marinara Sauce";
    };
    virtual ~MarinaraSauce(){};
};

#endif // MARINARASAUCE_H
