#include "MallardDuck.h"
namespace Duck
{
    MallardDuck::MallardDuck()
    {
        fly_behaviour = new FlyBehaviour::CanFly();
        quack_behaviour = new QuackBehaviour::CanQuack();
    }

    MallardDuck::~MallardDuck()
    {
        delete fly_behaviour;
        delete quack_behaviour;
    }
    int MallardDuck::display()
    {
        std::cout << "I am mallardDuck" << std::endl;
        return 0;
    }
}