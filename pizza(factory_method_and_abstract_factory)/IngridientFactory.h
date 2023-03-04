#ifndef INGRIDIENTFACTORY_H
#define INGRIDIENTFACTORY_H

#pragma once
#include "Ingridient.h"
class IngridientFactory
{
public:
    IngridientFactory();
    virtual ~IngridientFactory() = 0;
    virtual Ingridient* createIngridient() = 0;
private:
};

#endif