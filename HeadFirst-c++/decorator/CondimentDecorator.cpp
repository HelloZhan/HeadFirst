#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator()
{

}

CondimentDecorator::~CondimentDecorator()
{
    delete beverage;
}

Size CondimentDecorator::getSize()
{
    return beverage->getSize();
}
