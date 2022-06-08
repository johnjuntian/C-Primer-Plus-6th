#include <iostream>
int main()
{
    using namespace std;
    int a,b,c;
    c = 0;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter an other number: ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        cout << i << "+" ;
        c =c + i;
    }
    cout << "\b=" << c << endl;
}