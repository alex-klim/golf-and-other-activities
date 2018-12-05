#include <string>
#include <iostream>
#include <cstring>

using std::string;

class Person {
private:
    static constexpr size_t LIMIT = 25;
    string mLastName; // Person's last name
    char mFirstName[LIMIT]; // Person's first name
public:
    Person() {
        mLastName = "";
        mFirstName[0] = '\0';
    } // #1

    Person(const string & ln, const char * fn = "Heyyou"); // #2
    // the following methods display mLastName and mFirstName
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};
