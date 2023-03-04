#include "Pizza.h"

Pizza::Pizza(IngridientFactory *ingridient_factory)
{
    pizza_name = "Default";
    this->ingridient_factory = ingridient_factory;
}

Pizza::~Pizza()
{

}

int Pizza::prepare()
{
    std::cout << pizza_name << " is being prepared" << std::endl;
    ingridient = ingridient_factory->createIngridient();
    return 0;
}