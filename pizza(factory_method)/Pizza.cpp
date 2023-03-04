#include "Pizza.h"

Pizza::Pizza()
{
    pizza_name = "Default";
}

Pizza::~Pizza()
{

}

int Pizza::prepare()
{
    std::cout << pizza_name << " is being prepared" << std::endl;
    return 0;
}