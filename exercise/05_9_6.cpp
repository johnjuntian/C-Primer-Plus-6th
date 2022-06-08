#include <iostream>
#include <string>
const int M = 12;
const int Y = 3;
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
    int sales[Y][M];
    int sum[Y] = {0}, n = 0, total = 0;
    cout << "Enter the sales quantity of C++ For Fools monthly. \n";
    for (int i = 0; i < Y; i++)
    {
        n = i + 1;
        cout << "Years: " << n << endl;
    for (int i = 0; i < M; i++)
    {
        cout << month[i] << ": ";
        cin >> sales[n][i];
        sum[n] = sum[n] + sales[n][i];
    }
    cout << "In the "<< n << "th year, " << "a total of "
    << sum[n] << " copies of C++ For Fools  were sold.\n";
    total = total + sum[n];
    }
    cout << "In the past " << n << "years, a total of " << 
    total << " copies of C++ For Fools have been sold";
    return 0;
}