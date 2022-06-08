#include <iostream>
#include <string>
const int M = 12;
int main ()
{
    using namespace std;
    string month[M] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "Dcember"
    } ;
    int sales[M];
    int sum = 0;
    cout << "Enter the sales quantity of C++ For Fools monthly. \n";
    for (int i = 0; i < M; i++)
    {
        cout << month[i] << ": ";
        cin >> sales[i];
        sum = sum + sales[i];
    }
    cout << "A total of " << sum << " books have been sold this year.\n";
    return 0;
}