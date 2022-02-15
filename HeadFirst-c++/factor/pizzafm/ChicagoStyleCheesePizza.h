#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H
#include "Pizza.h"
class ChicagoStyleCheesePizza:public Pizza{
public:
    ChicagoStyleCheesePizza();
    void cut();
    virtual ~ChicagoStyleCheesePizza();
};

#endif // CHICAGOSTYLECHEESEPIZZA_H
