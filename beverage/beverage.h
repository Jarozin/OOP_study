#ifndef BEVERAGE_H
#define BEVERAGE_H

#pragma once
#include <string>
class Beverage
{
public:
    Beverage();
    virtual ~Beverage() = 0;
    std::string getDescription();
    virtual double cost() = 0;
protected:
    std::string description;

};

#endif