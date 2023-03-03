#include "Whip.h"

Whip::Whip(Beverage *orig_beverage) : Condiments(orig_beverage)
{
    description = original_beverage->getDescription() + ", whip";
}

Whip::~Whip()
{

}

double Whip::cost()
{
    return 3 + original_beverage -> cost();
}