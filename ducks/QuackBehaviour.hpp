#include <iostream>
namespace QuackBehaviour
{
    class QuackBehaviour
    {
        public:
            virtual int Quack() = 0;
    };
    
    class CantQuack: public QuackBehaviour
    {
        int Quack();
    };
    
    class CanQuack: public QuackBehaviour
    {
        int Quack();
    };
}


