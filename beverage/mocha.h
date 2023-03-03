#ifndef MOCHA_H
#define MOCHA_H

#pragma once
#include "condiments.h"
#include "beverage.h"
class Mocha: public Condiments
{
public:
    Mocha(Beverage *);
    ~Mocha();
    double cost() override;
private:

};

#endif