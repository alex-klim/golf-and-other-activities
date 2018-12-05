#include <iostream>
#include "move.h"

int main()
{
    Move a(-0.3, 0.5);
    std::cout << "a move object:\n";
    a.showmove();
    Move b(0.1, 0.5);
    std::cout << "b move object:\n";
    b.showmove();
    Move c = a.add(b);
    std::cout << "c = a + b:\n";
    c.showmove();
    std::cout << "c reset to (2,2):\n";
    a.reset(2, 2);
    a.showmove();
    return 0;
}
