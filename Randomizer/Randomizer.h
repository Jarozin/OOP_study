#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#pragma once
#include <cstdlib>
class Randomizer
{
public:
    ~Randomizer();
    static Randomizer &Get();
    int getInt();
private:
   Randomizer();
   static Randomizer unique_randomizer;
};

#endif