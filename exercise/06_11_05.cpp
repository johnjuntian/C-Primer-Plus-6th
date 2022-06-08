#include <iostream>
const float Tax1 = 0.10;
const float Tax2 = 0.15;
const float Tax3 = 0.20;

int main()
{
    using namespace std;
    float income, tax;
    cout << "Enter user's income(tvarps), negative number or non-numeric for quit: ";
    while (cin >> income && income > 0) 
    {
        if (income <= 5000)
            tax = 0;
        else if (income > 5000 && income <= 15000)
            tax =(income - 5000) * Tax1;
        else if (income > 15000 && income <= 35000 )
            tax =(income -15000) * Tax2 + (15000-5000) * Tax1;
        else 
            tax = (income - 35000) * Tax3 + (35000-15000) * Tax2 + (15000-5000) * Tax1;
        cout << "user's tax is " << tax << " tvarps.\n";
        cout << "Next: ";
    }
        cout << "Bye!\n"
    return 0;
}