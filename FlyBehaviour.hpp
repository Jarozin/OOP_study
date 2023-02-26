#include <iostream>
namespace FlyBehaviour
{
    class FlyBehaviour
    {
        public:
            virtual int Fly() = 0;
    };
    
    class CantFly:public FlyBehaviour
    {
        int Fly();
    };
    
    class CanFly: public FlyBehaviour
    {
        int Fly();
    };
}


