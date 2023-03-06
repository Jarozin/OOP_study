#ifndef COFFEE_H
#define COFFEE_H

#pragma once
#include "Tea.h"
class Coffee : public Beverage
{
public:
    Coffee();
    ~Coffee();
    void Brew() override;
private:

};

#endif