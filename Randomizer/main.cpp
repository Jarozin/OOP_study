#include "Randomizer.h"
#include <iostream>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        int a = Randomizer::Get().getInt();
        std::cout << a << std::endl;
    }
    return 0;
}