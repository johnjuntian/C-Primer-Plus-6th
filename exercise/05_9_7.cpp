
#include <iostream>
#include <string>
struct car
{
    std::string make;
    int year;
};

int main()
{
    using namespace std;
    int n;
    cout << "How many cars do you wish to catalog?";
    cin >> n;
    cin.get();//容易被忽略
    car * cars = new car [n];

    for (int i = 0; i < n; i++)
    {
        cout << "Car #" << i+1 << ":\n" ;
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year make: ";
        (cin >> cars[i].year).get();
    }
    cout << "Here is your collection: \n";
    for (int i = 0; i < n; i++)
        cout << cars[i]. year << "\t" << cars[i].make << endl;

    delete [] cars;
    return 0;
}

/*
错误示范
#include <iostream>
#include <string>
using namespace std;
struct car
{
    string make;
    int year;
};

int main()
{
    int n;
    cout << "How many cars do you wish to catalog?";
    cin >> n;
    car * cars = new car [n];

    for (int i = 0; i < n ; i++)
    {
        cout << "Car #" << i+1 << ":\n" ;
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year make: ";
        cin >> cars[i].year;
    }
    cout << "Here is your collection: \n";
    for (int i = 0; i < n; i++)
        cout << cars[i]. year << "\t" << cars[i].make << endl;

    delete [] cars;
    return 0;
}*/
