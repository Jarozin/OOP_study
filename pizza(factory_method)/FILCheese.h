#ifndef FILCHEESE_H
#define FILCHEESE_H

#pragma once
#include "Pizza.h"

class FILCheese : public Pizza
{
public:
    FILCheese();
    ~FILCheese();
    int bake() override;

private:

};

#endif