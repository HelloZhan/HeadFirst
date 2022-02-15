#include "ChicagoStylePepperoniPizza.h"

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
    name = "Chicago Style Pepperoni Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
    toppings.push_back("Black Olives");
    toppings.push_back("Spinach");
    toppings.push_back("Eggplant");
    toppings.push_back("Sliced Pepperoni");
}

void ChicagoStylePepperoniPizza::cut()
{
    cout<<"Cutting the pizza into square slices"<<endl;
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{

}
