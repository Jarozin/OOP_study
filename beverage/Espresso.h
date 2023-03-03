#ifndef ESPRESSO_H
#define ESPRESSO_H

#pragma once
#include "beverage.h"
class Espresso: public Beverage
{
public:
    Espresso();
    ~Espresso();
    double cost() override;
private:

};

#endif