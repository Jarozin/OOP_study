#ifndef MILKSHAKE_H
#define MILKSHAKE_H

#pragma once
#include "beverage.h"
class Milkshake: public Beverage
{
public:
    Milkshake();
    ~Milkshake();
    double cost() override;
private:

};

#endif