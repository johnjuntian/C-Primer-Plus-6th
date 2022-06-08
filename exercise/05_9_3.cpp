#include <iostream>
#include <vector>
int main()
{

    using namespace std;
    int a,b = 0,c = 0;
    vector<int>d(100);
    cout << "Enter some numbers, and the program adds them up.\n" 
    << "If you want to exit, enter 0.\n";
    do
    {
        cout << "Enter a number: ";
        cin >> a;
        d[c] = a;
        c= c + 1;
        b = b + a;
        cout << "Sum(" ;
        for (int i = 0; i < c; i++)
        cout << d[i] << "+" ; 
        cout <<  "\b)=" << b << endl;
    } while (a != 0);
    return 0;  
}