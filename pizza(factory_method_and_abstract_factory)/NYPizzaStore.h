#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#pragma once
#include "PizzaStore.h"
#include "NYCheese.h"
#include "NYPepperoni.h"
#include "NYIngridientFactory.h"
class NYPizzaStore: public PizzaStore
{
public:
    NYPizzaStore();
    ~NYPizzaStore();

protected:
    Pizza* createPizza(std::string) override;
};

#endif