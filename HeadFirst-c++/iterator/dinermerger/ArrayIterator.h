#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H
#include "Iterator.h"
#include "MenuItem.h"
class ArrayIterator:public Iterator{
public:
    ArrayIterator(MenuItem items[],int size);
    virtual MenuItem *next()override final;
    virtual bool hasNext()override final;
    virtual ~ArrayIterator();
private:
    MenuItem *items;
    int position=0;
    int size=0;
};

#endif // ARRAYITERATOR_H
