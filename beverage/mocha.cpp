#include "mocha.h"

Mocha::Mocha(Beverage *orig_beverage) : Condiments(orig_beverage)
{
    description = original_beverage->getDescription() + ", mocha";
}

Mocha::~Mocha()
{

}

double Mocha::cost()
{
    return 1.99 + original_beverage -> cost();
}