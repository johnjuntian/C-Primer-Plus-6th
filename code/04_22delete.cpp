// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;
char * getname(void); // function prototype
int main()
{
    char * name;

    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;

    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;
    return 0;
}

char * getname()//return pointer to new string
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) +1];
    strcpy(pn, temp);
    return pn;
}