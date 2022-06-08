// arrobj.cpp -- functions with array objects (C++ 11)
#include <iostream>
const int Seasons = 4; //有顺序之分，要放在需要使用该常数的代码前面
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"}; //*
void fill(double [], int Seasons);
void show(double * pa, int Seasons);

int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}


void fill(double pa[], int Seasons)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " <<Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}


void show(double * da, int Season)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;

}  