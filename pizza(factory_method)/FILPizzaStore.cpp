#include "FILPizzaStore.h"

FILPizzaStore::FILPizzaStore()
{

}

FILPizzaStore::~FILPizzaStore()
{

}

Pizza* FILPizzaStore::createPizza(std::string)
{
    if (type == "Cheese")
        return new FILCheese();
    else if(type == "Pepperoni")
        return new FILPepperoni();
}