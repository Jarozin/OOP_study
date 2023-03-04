#ifndef PIZZA_H
#define PIZZA_H

#pragma once
#include <string>
#include <iostream>
#include "Ingridient.h"
#include "IngridientFactory.h"
class Pizza
{
public:
    Pizza(IngridientFactory *ingridient_factory);
    virtual ~Pizza() = 0;
    int prepare();//буду использовать этот метод для печати
    virtual int bake() = 0;
protected:
    std::string pizza_name;
    Ingridient *ingridient;
    IngridientFactory *ingridient_factory;
};

#endif