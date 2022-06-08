#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks, unsigned snumbers);
int main()
{
    using namespace std;
    double total, choices, snumbers;
    cout << "Enter the total number of choices on the game card and\n"
    "the number of picks allowed,and\n"
    "the special number of choices on the game card :";
    while ((cin >> total >> choices >> snumbers) && choices <= total) //*
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, snumbers);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";       
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned snumbers)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n * p;
    return result/snumbers;
}