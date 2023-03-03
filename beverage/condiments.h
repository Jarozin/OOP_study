#ifndef CONDIMENTS_H
#define CONDIMENTS_H

#pragma once
#include "beverage.h"
class Condiments : public  Beverage
{
public:
    Condiments(Beverage *);
    virtual ~Condiments() = 0;
protected:
    Beverage *original_beverage;
};

#endif