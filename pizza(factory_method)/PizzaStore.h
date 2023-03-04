#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#pragma once
#include "Pizza.h"
#include <string>
class PizzaStore
{
public:
    PizzaStore();
    virtual ~PizzaStore() = 0;
    Pizza* OrderPizza(std::string);
protected:
    virtual Pizza *createPizza(std::string) = 0;
};

#endif