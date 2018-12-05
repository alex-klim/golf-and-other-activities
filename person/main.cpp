#include "person.h"

#include <iostream>

int main()
{
    Person one{"Alex", "Klim"};
    one.Show();
    one.FormalShow();
    std::cout << "\n";

    Person two{"Buddy"};
    two.Show();
    two.FormalShow();
    std::cout << "\n";

    const char* sur = "Surname";
    Person three{"Gary", sur};
    three.Show();
    three.FormalShow();
    std::cout << "\n";

    // more than 25 characters scenario
    Person four{"asd", "agkdysakduyagsduyaskudyaksuydyadusydaysdkuyasgdkyasyd"};
    four.Show();
    four.FormalShow();
    return 0;
}
