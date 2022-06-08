#include <iostream>
int main()
{
    using namespace std;
    int year = 0;
    double  Cleo=100, Daphne = 100;
    for(int i = 1; Cleo <= Daphne; i++)
    {
        year = i;
        Cleo = 0.05*Cleo + Cleo;
        Daphne = Daphne + 10;
        cout << year << "years" << endl;
        cout << "Cleo have: $" << Cleo << endl
        << "Daphne have: $" << Daphne << endl;
    }
    cout << year << "years later,Cleo's investment is worth more than Daphne's: \n" 
    << "Cleo have: $" << Cleo <<endl
    << "Daphne have: $" << Daphne << endl;
    return 0;
}