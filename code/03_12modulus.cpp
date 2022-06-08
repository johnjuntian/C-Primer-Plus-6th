// modulus.cpp -- uses % operetor to convert lbs to stone
#include <iostream>
int main()
{
    using namespace std;
    const int lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / lbs_per_stn;
    int pounds= lbs % lbs_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";
    return 0;
}