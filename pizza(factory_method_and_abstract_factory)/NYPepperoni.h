#ifndef NYPEPPERONI_H
#define NYPEPPERONI_H

#pragma once
#include "Pizza.h"
class NYPepperoni : public Pizza
{
public:
    NYPepperoni(IngridientFactory *ingridient_factory);
    ~NYPepperoni();
    int bake() override;
private:

};

#endif