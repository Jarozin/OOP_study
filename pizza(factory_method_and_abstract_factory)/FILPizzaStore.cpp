#include "FILPizzaStore.h"

FILPizzaStore::FILPizzaStore()
{

}

FILPizzaStore::~FILPizzaStore()
{

}

Pizza* FILPizzaStore::createPizza(std::string type)
{
    IngridientFactory *factory = new FILIngridientFactory();
    if (type == "Cheese")
        return new FILCheese(factory);
    else if (type == "Pepperoni")
        return new FILPepperoni(factory);
}