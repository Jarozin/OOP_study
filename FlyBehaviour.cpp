#include <FlyBehaviour.hpp>
namespace FlyBehaviour
{
    int CantFly::Fly()
    {
        std::cout << "I can not fly!" << std::endl;   
        return 0;
    }
    
    int CanFly::Fly()
    {
        std::cout << "I can fly!" << std::endl;   
        return 0;
    } 
}


