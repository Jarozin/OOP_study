#ifndef FILCHEESE_H
#define FILCHEESE_H

#pragma once
#include "Pizza.h"

class FILCheese : public Pizza
{
public:
    FILCheese(IngridientFactory *ingridient_factory);
    ~FILCheese();
    int bake() override;

private:

};

#endif