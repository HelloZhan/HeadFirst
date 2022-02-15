#include "ArrayIterator.h"

ArrayIterator::ArrayIterator(MenuItem items[], int size)
{
    this->items=items;
    this->size=size;
}

MenuItem *ArrayIterator::next()
{
    return &items[position++];
}

bool ArrayIterator::hasNext()
{
    if(position>=size)return false;
    else return true;
}

ArrayIterator::~ArrayIterator()
{

}
