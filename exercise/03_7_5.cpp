#include <iostream>
int main()
{
    using namespace std;
    long long world_p,US_p;
    long double percent;
    cout << "Enter the world's population: __________\b\b\b\b\b\b\b\b\b\b";
    cin >> world_p;
    cout <<"Enter the population of the US: _________\b\b\b\b\b\b\b\b\b";
    cin >> US_p;
    percent = (long double)US_p/(long double)world_p *100;
    cout <<"The population of the US is " << percent << "% of the world population.\n";
    return 0;
}
//It took me 19 minutes to write this program.