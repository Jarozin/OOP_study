#include <iostream>
#include "duck.hpp"
#include "MallardDuck.h"
#include "ModelDuck.h"
int main()
{
    Duck::Duck *my_duck;
    Duck::MallardDuck mallarduck;
    my_duck = &mallarduck;
    my_duck->display();
    my_duck->PerformFly();
    Duck::ModelDuck model_duck;
    my_duck = &model_duck;
    my_duck->display();
    my_duck->PerformFly();
    return 0;
}