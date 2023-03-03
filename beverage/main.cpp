#include "Espresso.h"
#include "Milkshake.h"
#include "mocha.h"
#include "Whip.h"
#include <iostream>
int main()
{
    Espresso espr;
    Mocha espr_with_mocha((Beverage *)&espr);
    Milkshake mlk;
    Mocha mlk_with_mocha((Beverage *)&mlk);
    std::cout << espr_with_mocha.getDescription() << " costs: " << espr_with_mocha.cost() << std::endl;
    std::cout << mlk_with_mocha.getDescription() << " costs: " << mlk_with_mocha.cost() << std::endl;
    Whip mlk_mocha_whip((Beverage *)&mlk_with_mocha);
    std::cout << mlk_mocha_whip.getDescription() << " costs: " << mlk_mocha_whip.cost() << std::endl;

    return 0;
}