#include "ModelDuck.h"
namespace Duck
{
    ModelDuck::ModelDuck()
    {
        fly_behaviour = new FlyBehaviour::CantFly();
        quack_behaviour = new QuackBehaviour::CantQuack();
    }

    ModelDuck::~ModelDuck()
    {
        delete fly_behaviour;
        delete quack_behaviour;
    }

    int ModelDuck::display()
    {
        std::cout << "I am a model duck!" << std::endl;
        return 0;
    }
}