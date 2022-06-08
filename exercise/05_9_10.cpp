#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter number of rows: ";
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for(int i = 0; i < n; i++)
        {
            cout << ".";
        }
        x++;
        for(int i = 0; i < x; i++)
        {
            cout << "\b";
        }
        for(int i = 0; i < x; i++)
        {
            cout << "*";
        }
        cout << endl;

    }
}