#ifndef FILPEPPERONI_H
#define FILPEPPERONI_H

#pragma once
#include "Pizza.h"

class FILPepperoni : public Pizza
{
public:
    FILPepperoni(IngridientFactory *ingridient_factory);
    ~FILPepperoni();
    int bake() override;

private:

};

#endif