#include "NYCheese.h"

NYCheese::NYCheese(IngridientFactory *ingridient_factory) : Pizza(ingridient_factory)
{
    pizza_name = "NY Cheese";
}

NYCheese::~NYCheese()
{

}

int NYCheese::bake()
{
    return 0;
}