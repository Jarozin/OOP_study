#include "PizzaStore.h"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

Pizza* PizzaStore::OrderPizza(std::string type)
{
    Pizza *pizza = createPizza(type);

    
    pizza->prepare();
    pizza->bake();

    return pizza;
}