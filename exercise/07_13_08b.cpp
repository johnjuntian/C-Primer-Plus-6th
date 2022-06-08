#include <iostream>
const int Seasons = 4; //有顺序之分，要放在需要使用该常数的代码前面
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"}; //*
struct season{double spend[Seasons];};

void fill(season *);
void show(season);

int main()
{
    season sp;
    fill(&sp);
    show(sp);
    return 0;
}


void fill(season * pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " <<Snames[i] << " expenses: ";
        cin >> pa->spend[i];
    }
}


void show(season da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da.spend[i] << endl;
        total += da.spend[i];
    }
    cout << "Total Expenses: $" << total << endl;

}  