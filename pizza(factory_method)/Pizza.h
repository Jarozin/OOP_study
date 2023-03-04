#ifndef PIZZA_H
#define PIZZA_H

#pragma once
#include <string>
#include <iostream>
class Pizza
{
public:
    Pizza();
    virtual ~Pizza() = 0;
    int prepare();//буду использовать этот метод для печати
    virtual int bake() = 0;
protected:
    std::string pizza_name;
};

#endif