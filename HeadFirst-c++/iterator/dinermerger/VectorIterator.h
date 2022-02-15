#ifndef VECTORITERATOR_H
#define VECTORITERATOR_H
#include <vector>
#include "Iterator.h"
#include "MenuItem.h"
using std::vector;
class VectorIterator:public Iterator{
public:
    VectorIterator(vector<MenuItem *>);
    virtual MenuItem *next()override final;
    virtual bool hasNext()override final;
    virtual ~VectorIterator();
private:
    vector<MenuItem *> items;
    int position=0;
};

#endif // VECTORITERATOR_H
