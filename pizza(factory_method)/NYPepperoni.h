#ifndef NYPEPPERONI_H
#define NYPEPPERONI_H

#pragma once
#include "Pizza.h"
class NYPepperoni : public Pizza
{
public:
    NYPepperoni();
    ~NYPepperoni();
    int bake() override;
private:

};

#endif