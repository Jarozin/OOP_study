#include "DuckAdapter.h"
#include <iostream>
int main()
{
    Turkey turk;
    Duck dck;
    DuckAdapter turkey_duck(&dck);
    turk.Squick();
    turkey_duck.Squick();
    return 0;
}