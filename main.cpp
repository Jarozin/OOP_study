#include <iostream>
#include "duck.hpp"
#include "MallardDuck.h"
#include "ModelDuck.h"
int main()
{
    Duck::Duck *my_duck = new Duck::MallardDuck();
    my_duck->display();
    my_duck->PerformFly();
    my_duck = new Duck::ModelDuck();
    my_duck->display();
    my_duck->PerformFly();
    return 0;
}