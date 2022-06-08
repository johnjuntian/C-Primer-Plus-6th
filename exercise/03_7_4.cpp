#include <iostream>
const int D_h = 24, H_m = 60, M_s = 60;
int main()
{
    using namespace std;
    long time;
    int days, hours, minutes, seconds;
    cout << "Enter the number of seconds: ________\b\b\b\b\b\b\b\b";
    cin >> time;
    days = time / (D_h * H_m * M_s);
    hours = (time - days * D_h * H_m * M_s)/ (H_m * M_s);
    minutes = (time - days * D_h * H_m * M_s -hours * H_m * M_s)/M_s;
    seconds = time - days * D_h * H_m * M_s -hours * H_m * M_s -minutes * M_s;
    cout << time << " seconds = " << days << " days, " << hours << " hours, " 
    << minutes << " minutes, " << seconds << " seconds\n";
    return 0;
}
//It took me 15 minutes to write the program.