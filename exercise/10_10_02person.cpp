#include "10_10_02.h"
#include <iostream>

Person::Person(const std::string & ln, const char * fn )
{
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
    using namespace std;
    cout << fname << endl << lname << endl;
}
void Person::FormalShow() const
{
    using namespace std;
    cout << lname << endl << fname << endl;
}