#include "FILPizzaStore.h"

FILPizzaStore::FILPizzaStore()
{

}

FILPizzaStore::~FILPizzaStore()
{

}

Pizza* FILPizzaStore::createPizza(std::string type)
{
    if (type == "Cheese")
        return new FILCheese();
    else if (type == "Pepperoni")
        return new FILPepperoni();
}