#include "duck.hpp"
namespace Duck
{
    int Duck::PerformFly()
    {
        fly_behaviour->Fly();
        return 0;
    }
    
    int Duck::PerformQuack()
    {
        quack_behaviour->Quack();
        return 0;
    }
}