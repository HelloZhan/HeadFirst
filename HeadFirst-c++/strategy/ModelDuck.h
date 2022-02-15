#ifndef MODELDUCK_H
#define MODELDUCK_H
#include "Duck.h"
class ModelDuck:public Duck{
public:
    ModelDuck();
    virtual void display()override final;
    virtual ~ModelDuck();
};

#endif // MODELDUCK_H
