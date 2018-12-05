#include "golf.h"

#include <iostream>

int main()
{
    // interactive version
    golf g;
    setGolf(g);
    showGolf(g);

    // reset handicap
    std::cout << "\nReset handicap:\n";
    handicap(g, 28);
    showGolf(g);
    std::cout << "\nNon interactive version:\n";

    // non-interactive version
    golf g2;
    setGolf(g2, "Ann Birdfree", 24);
    showGolf(g2);
    return 0;
}
