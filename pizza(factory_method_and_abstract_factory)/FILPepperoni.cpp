#include "FILPepperoni.h"

FILPepperoni::FILPepperoni(IngridientFactory *ingridient_factory) : Pizza(ingridient_factory)
{
    pizza_name = "FIL Pepperoni";
}

FILPepperoni::~FILPepperoni()
{

}

int FILPepperoni::bake()
{
    return 0;
}