#ifndef TEA_H
#define TEA_H

#pragma once
#include "Beverage.h"
class Tea : public Beverage
{
public:
    Tea();
    ~Tea();
    void AddCondiment() override;
    void Brew() override;
private:

};

#endif