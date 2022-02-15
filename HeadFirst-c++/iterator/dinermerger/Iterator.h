#ifndef ITERATOR_H
#define ITERATOR_H
#include "MenuItem.h"
class Iterator{
public:
    virtual bool hasNext()=0;
    virtual MenuItem *next()=0;
    virtual ~Iterator(){};
};

#endif // ITERATOR_H
