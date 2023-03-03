#ifndef WHIP_H
#define WHIP_H

#pragma once
#include "condiments.h"
#include "beverage.h"
class Whip : public Condiments
{
public:
    Whip(Beverage *);
    ~Whip();
    double cost() override;
private:

};

#endif