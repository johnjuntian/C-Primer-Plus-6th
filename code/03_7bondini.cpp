// bondini.cpp  -- using escape sequences
#include <iostream>
int main()
{
    using namespace std;
    cout << "\007Operating \"HyperHype\" is now activated!\n";
    cout << "Eneter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\007You entered " << code << "...\n";
    cout << "\007Code verified! Proceed with Plan 23!\n";
    return 0;
}