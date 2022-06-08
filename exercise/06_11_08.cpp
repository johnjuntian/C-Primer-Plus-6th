#include <iostream>
#include <fstream>
#include <cstdlib>// Don't forget.
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
    char ch;
    inFile >> ch; // 不读取空格/换行
    int count = 0;
    while(inFile.good())
    {
        ++count;
        inFile >> ch;
    }
    cout << "Number of characters in the file: " << count << endl;
    inFile.close();
    return 0;
}