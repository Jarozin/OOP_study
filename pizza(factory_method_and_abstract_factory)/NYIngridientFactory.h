#ifndef NYINGRIDIENTFACTORY_H
#define NYINGRIDIENTFACTORY_H

#pragma once
#include "IngridientFactory.h"
#include "Cheese.h"
class NYIngridientFactory : public IngridientFactory
{
public:
    NYIngridientFactory();
    ~NYIngridientFactory();
    Ingridient* createIngridient();
private:

};

#endif