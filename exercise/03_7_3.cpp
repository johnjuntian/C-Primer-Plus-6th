#include <iostream>
const float D_m = 60.0, M_s = 60.0;
int main()
{
    using namespace std;
    int degrees, minutes, seconds;
    float arc;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: __\b\b";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: __\b\b";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: __\b\b";
    cin >> seconds;
    arc = degrees + minutes/D_m + seconds/D_m/M_s;
    cout << degrees <<" degrees, " << minutes << " minutes, " 
    << seconds << " seconds = " << arc << " degrees\n"; 
    return 0;
}