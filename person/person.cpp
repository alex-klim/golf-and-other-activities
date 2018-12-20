#include "person.h"
#include <iostream>

void Person::Show() const
{
    std::cout << mFirstName << " " << mLastName << '\n';
}

void Person::FormalShow() const
{
    std::cout << mLastName << " " << mFirstName << '\n';
}

Person::Person(const string& ln, const char* fn)
{
    if(strlen(fn) >= LIMIT) {
        // dealing with bad parameter
    }
    strncpy(mFirstName, fn, LIMIT);
    mLastName = ln;
}
