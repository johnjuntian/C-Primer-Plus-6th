#include <iostream>
using namespace std;
void two();
void three();
int main()
{
    int i;
    int n;
    n = 2;
    for (i=0; i<n; i++)
        two();
    for (i=0; i<n; i++)
        three();
    return 0;
}

void two()
{
    cout << "Three blind mice" << endl;
}

void three()
{
    cout << "See how they run" << endl;
}
