#ifndef PIZZA_H
#define PIZZA_H

#pragma once

class Pizza
{
public:
    Pizza();
    virtual ~Pizza() = 0;
    virtual int prepare() = 0;
    virtual int bake() = 0;
private:

};

#endif