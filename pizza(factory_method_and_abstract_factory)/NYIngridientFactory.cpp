#include "NYIngridientFactory.h"

NYIngridientFactory::NYIngridientFactory()
{

}

NYIngridientFactory::~NYIngridientFactory()
{

}

Ingridient* NYIngridientFactory::createIngridient()
{
    return new Cheese();
}