// static.cpp -- using a static local variable
#include <iostream>
#include <string>
using std::string;
void strcount(const string str);

int main()
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    ;
    while(getline(cin, input) && input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        // 试图使用get(char *, int)读取空行讲导致cin为false
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str)
{
    using namespace std;
    static int total = 0;
    int count = str.length();
    cout << "\"" << str << "\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}