#ifndef NYCHEESE_H
#define NYCHEESE_H

#pragma once
#include "Pizza.h"

class NYCheese : public Pizza
{
public:
    NYCheese(IngridientFactory *ingridient_factory);
    ~NYCheese();
    int bake() override;

private:

};

#endif