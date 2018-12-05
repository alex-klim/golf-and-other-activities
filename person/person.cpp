/*
 * =====================================================================================
 *
 *       Filename:  person.cpp
 *
 *    Description:  source file for person header
 *
 *        Version:  1.0
 *        Created:  11/27/2018 11:56:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Klymenko ,
 *   Organization:  home
 *
 * =====================================================================================
 */
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
