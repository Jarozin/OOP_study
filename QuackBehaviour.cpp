#include <QuackBehaviour.hpp>
namespace QuackBehaviour
{
    int CantQuack::Quack()
    {
        std::cout << "Quacking" << std::endl;
        return 0;
    }

    int CanQuack::Quack()
    {
        std::cout << "not Quacking" << std::endl;
        return 0;
    }
}