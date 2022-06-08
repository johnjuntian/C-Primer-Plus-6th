#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib> //*
struct donate{
    std::string name;
    double money;
};
const int Size = 60;
int main()
{
    using namespace std;
    ifstream inFile;
    char filename[Size];
    cout << "Enter name of data file: ";
    cin.getline(filename, Size);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file" << filename << " .\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int Num, Grand = 0, None = 0;
    cout << "How many Patrons: ";
    inFile >> Num;
    donate * list = new donate [Num];
    for (int i = 0; i < Num; i++)
    {
        cout << "The name of Patrons No " << i + 1 << ": ";
        inFile.get(); //*
        getline(inFile, list[i].name);
        cout << "How much money did he/she donate: ";
        inFile >> list[i].money;
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
        cout << "None\n";
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
        cout << "None\n"; 
    inFile.close();
    delete [] list;
    return 0;
}