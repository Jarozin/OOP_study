#include "duck.hpp"
namespace Duck
{
    int Duck::PerformFly()
    {
        fly_behaviour->Fly();
    }
    
    int Duck::PerformQuack()
    {
        quack_behaviour->Quack();
    }
}