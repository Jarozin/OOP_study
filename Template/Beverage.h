#ifndef BEVERAGE_H
#define BEVERAGE_H

#pragma once
#include <iostream>
class Beverage
{
public:
    Beverage();
    ~Beverage();
    void Prepare();
    void BoilWater();
    virtual void Brew();
    virtual void AddCondiment();
    void PourInCup();
private:

};

#endif