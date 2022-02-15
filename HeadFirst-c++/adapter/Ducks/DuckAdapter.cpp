#include "DuckAdapter.h"
#include <random>
DuckAdapter::DuckAdapter(Duck *duck)
{
    this->duck=duck;
}

void DuckAdapter::gobble()
{
    duck->quack();
}

void DuckAdapter::fly()
{
    int randomi=rand()%2;
    if(randomi)duck->fly();
}

DuckAdapter::~DuckAdapter()
{
    delete duck;
}
