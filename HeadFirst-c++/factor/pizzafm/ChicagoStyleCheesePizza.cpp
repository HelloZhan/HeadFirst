#include "ChicagoStyleCheesePizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut()
{
    cout<<"Cutting the pizza into square slices"<<endl;
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{

}
