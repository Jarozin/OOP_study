#include <iostream>
#include "FILPizzaStore.h"
#include "NYPizzaStore.h"
int main()
{
    FILPizzaStore fil;
    NYPizzaStore ny;
    fil.OrderPizza("Cheese");
    ny.OrderPizza("Pepperoni");
    fil.OrderPizza("Pepperoni");
    return 0;
}