#include <iostream>
using namespace std;

void time(int,int);

int main()
{
    int hour, minutes;
    cout << "Enter the number of hour: " ;
    cin >> hour;
    cout << "Enter the number of minutes:" ;
    cin >> minutes;
    time(hour,minutes);
    return 0;
}

void time(int hour,int minutes)
{
    cout << "Time: " << hour << ":" << minutes << endl;
}