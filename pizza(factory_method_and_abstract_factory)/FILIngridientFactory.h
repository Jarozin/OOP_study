#ifndef FILINGRIDIENTFACTORY_H
#define FILINGRIDIENTFACTORY_H

#pragma once
#include "IngridientFactory.h"
#include "Dough.h"
class FILIngridientFactory : public IngridientFactory
{
public:
    FILIngridientFactory();
    ~FILIngridientFactory();
    Ingridient* createIngridient();
private:

};

#endif