#ifndef MODELDUCK_H
#define MODELDUCK_H

#pragma once
#include "duck.hpp"
namespace Duck{


class ModelDuck:public Duck
{
public:
    ModelDuck();
    ~ModelDuck();
    int display() override;
private:

};
}
#endif