#include "VectorIterator.h"

VectorIterator::VectorIterator(vector<MenuItem *> items)
{
    this->items=items;
}

MenuItem *VectorIterator::next()
{
    return items[position++];
}

bool VectorIterator::hasNext()
{
    if(position>=int(items.size())){
        return false;
    }else{
        return true;
    }
}

VectorIterator::~VectorIterator()
{

}
