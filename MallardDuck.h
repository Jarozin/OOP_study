#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#pragma once
#include "duck.hpp"
namespace Duck{
    class MallardDuck:public Duck
    {
    public:
        MallardDuck();
        ~MallardDuck();
        int display();
    private:
    
    };
}
#endif