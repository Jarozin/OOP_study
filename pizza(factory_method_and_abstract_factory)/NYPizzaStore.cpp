#include "NYPizzaStore.h"

NYPizzaStore::NYPizzaStore()
{
}

NYPizzaStore::~NYPizzaStore()
{

}

Pizza* NYPizzaStore::createPizza(std::string type)
{
    IngridientFactory *factory = new NYIngridientFactory();
    if (type == "Cheese")
        return new NYCheese(factory);
    else if(type == "Pepperoni")
        return new NYPepperoni(factory);
}