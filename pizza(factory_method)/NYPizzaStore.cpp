#include "NYPizzaStore.h"

NYPizzaStore::NYPizzaStore()
{
}

NYPizzaStore::~NYPizzaStore()
{

}

Pizza* NYPizzaStore::createPizza(std::string type)
{
    if (type == "Cheese")
        return new NYCheese();
    else if(type == "Pepperoni")
        return new NYPepperoni();
}