// morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put: ";
    cout.put(ch);
    cout.put('!');//using cout.put() to display a char constant

    cout << endl << "Done" << endl;
    return 0 ; 
}