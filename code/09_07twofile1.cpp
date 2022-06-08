// twofile1.cpp -- variable with external and internal linkage
#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

// function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}