#include "FILCheese.h"

FILCheese::FILCheese(IngridientFactory *ingridient_factory) : Pizza(ingridient_factory)
{
    pizza_name = "FIL Cheese";
}

FILCheese::~FILCheese()
{

}

int FILCheese::bake()
{
    return 0;
}