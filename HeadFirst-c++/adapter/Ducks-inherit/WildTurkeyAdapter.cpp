#include "WildTurkeyAdapter.h"

WildTurkeyAdapter::WildTurkeyAdapter():Duck(),WildTurkey()
{

}

void WildTurkeyAdapter::fly()
{
    WildTurkey::fly();
}

void WildTurkeyAdapter::quack()
{
    WildTurkey::gobble();
}

WildTurkeyAdapter::~WildTurkeyAdapter()
{

}
