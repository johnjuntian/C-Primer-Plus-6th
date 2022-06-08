#include <iostream>
#include <cstring>
struct donate{
    std::string name;
    double money;
};
int main()
{
    using namespace std;
    int Num, Grand = 0, None = 0;
    cout << "How many Patrons: ";
    cin >> Num;
    donate * list = new donate [Num];
    for (int i = 0; i < Num; i++)
    {
        cout << "The name of Patrons No " << i + 1 << ": ";
        cin.get();
        getline(cin, list[i].name);
        cout << "How much money did he/she donate: ";
        cin >> list[i].money;
    }
    cout << "Grand Patrons: \n";
    for (int i = 0; i < Num ; i++)
    {
        if (list[i].money > 10000)
        {
            Grand++;
            cout << list[i].name << "\t" << list[i].money << endl;
        }
    }
    if (Grand == 0)
        cout << "None.\n";
    cout << "Patrons: \n";
    for (int i = 0; i < Num ; i++)
    {
    if (list[i].money <= 10000)
        {
            None++;
            cout << list[i].name << "\t" << list[i].money << endl;
        }
    } 
    if (None == 0)
        cout << "None.\n"; 
    delete [] list;
    return 0;
}