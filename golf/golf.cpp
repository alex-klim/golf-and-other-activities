#include <iostream>
#include <cstring>
#include <limits>

#include "golf.h"

void setGolf(golf& g, const char* name, int hc)
{
    if(strlen(name)+1 > Len)
    {
        // name size exceeds current limit
    }
    strncpy(g.fullname, name, Len);
    g.handicap = hc;
}

int setGolf(golf& g)
{
    char tname[Len] = "";
    int thc;
    std::cout << "Enter name:\n";
    std::cin.getline(tname, Len);
    if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
    std::cout << "Enter handicap:\n";
    std::cin >> thc;
    setGolf(g, tname, thc);
    return tname ? 1 : 0;
}

void handicap(golf& g, int hc)
{
    g.handicap = hc;
}

void showGolf(const golf& g)
{
    std::cout << "Name: " << g.fullname
        << ", handicap: " << g.handicap << '\n';
}
