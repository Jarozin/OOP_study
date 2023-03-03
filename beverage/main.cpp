#include "Espresso.h"
#include "Milkshake.h"
#include "mocha.h"
#include <iostream>
int main()
{
    Espresso espr;
    Mocha espr_with_mocha((Beverage *)&espr);
    Milkshake mlk;
    Mocha mlk_with_mocha((Beverage *)&mlk);
    std::cout << espr_with_mocha.getDescription() << " costs: " << espr_with_mocha.cost() << std::endl;
    std::cout << mlk_with_mocha.getDescription() << " costs: " << mlk_with_mocha.cost() << std::endl;
    return 0;
}