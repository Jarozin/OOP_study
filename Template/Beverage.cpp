#include "Beverage.h"

Beverage::Beverage()
{

}

Beverage::~Beverage()
{

}

void Beverage::Prepare()
{
    BoilWater();
    Brew();
    AddCondiment();
    PourInCup();
}

void Beverage::BoilWater()
{
    std::cout << "Boil water" << std::endl;
}

void Beverage::Brew()
{
    
}

void Beverage::AddCondiment()
{
    
}

void Beverage::PourInCup()
{
    std::cout << "Pouring in a cup" << std::endl;
}