#include "FILIngridientFactory.h"

FILIngridientFactory::FILIngridientFactory()
{

}

FILIngridientFactory::~FILIngridientFactory()
{

}
Ingridient* FILIngridientFactory::createIngridient()
{
    return new Dough();
}