#include <iostream>
#include "QuackBehaviour.hpp"
#include "FlyBehaviour.hpp"
namespace Duck
{
    class Duck
    {
        protected:
            FlyBehaviour::FlyBehaviour *fly_behaviour;
            QuackBehaviour::QuackBehaviour *quack_behaviour;
        public:
            int PerformFly();
            int PerformQuack();
            virtual int display() = 0;
    }
}