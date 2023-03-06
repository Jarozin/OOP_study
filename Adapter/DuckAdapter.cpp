#include "DuckAdapter.h"

DuckAdapter::DuckAdapter(Duck *duck)
{
    this->duck = duck;
}

DuckAdapter::~DuckAdapter()
{

}

void DuckAdapter::Squick()
{
    duck->Quack();
    std::cout << "But like a turkey" << std::endl;
}