#ifndef CHICAGOSTYLEPEPPERONIPIZZA_H
#define CHICAGOSTYLEPEPPERONIPIZZA_H
#include "Pizza.h"
class ChicagoStylePepperoniPizza:public Pizza{
public:
    ChicagoStylePepperoniPizza();
    void cut();
    virtual ~ChicagoStylePepperoniPizza();
};

#endif // CHICAGOSTYLEPEPPERONIPIZZA_H
