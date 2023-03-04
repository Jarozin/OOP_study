#include "Randomizer.h"

Randomizer Randomizer::unique_randomizer;
Randomizer::Randomizer()
{

}

Randomizer::~Randomizer()
{

}

Randomizer& Randomizer::Get()
{
    return unique_randomizer;
}

int Randomizer::getInt()
{
    return rand();
}
