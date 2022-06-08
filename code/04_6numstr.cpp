// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;//可以修改为（cin >> year）.get(); or (cin >> year).get(ch)
;    cout << "What is its street address?\n";
    char address[88];
    cin.getline(address, 88);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}