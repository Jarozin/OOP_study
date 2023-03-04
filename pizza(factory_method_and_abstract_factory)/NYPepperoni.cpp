#include "NYPepperoni.h"

NYPepperoni::NYPepperoni(IngridientFactory *ingridient_factory) : Pizza(ingridient_factory)
{
    pizza_name = "NY Pepperoni";

}

NYPepperoni::~NYPepperoni()
{

}

int NYPepperoni::bake()
{
    return 0;
}