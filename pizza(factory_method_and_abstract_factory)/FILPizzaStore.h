#ifndef FILPIZZASTORE_H
#define FILPIZZASTORE_H

#pragma once
#include "PizzaStore.h"
#include "FILCheese.h"
#include "FILPepperoni.h"
#include "FILIngridientFactory.h"
class FILPizzaStore : public PizzaStore
{
public:
    FILPizzaStore();
    ~FILPizzaStore();

private:
    Pizza* createPizza(std::string) override;
};

#endif