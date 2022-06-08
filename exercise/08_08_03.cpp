#include <iostream>
#include <string>

void capital(std::string & a);
int main()
{
    using namespace std;
    string a;
    cout << "Enter a string (q to quit): ";
    getline(cin, a); // cin.get(a, 20)?
    while(a != "q")
    {
        capital(a);
        cout << a << endl;
        cout << "Next string (q to quit): ";
        getline(cin, a);
    }
    cout << "Bye.\n";
    return 0;
}

void capital(std::string & a)
{
    for(int i = 0; i < a.length(); i++)
        a[i] = toupper(a[i]);
}