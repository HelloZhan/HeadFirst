#ifndef TEA_H
#define TEA_H
#include "CaffeineBeverage.h"
class Tea:public CaffeineBeverage{
public:
    virtual void brew()override final;
    virtual void addCondiments()override final;
    virtual ~Tea();
};

#endif // TEA_H
