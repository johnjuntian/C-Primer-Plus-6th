#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cout << "Please enter: (Enter'@' for exit)";
    cin >> ch;
    while (ch != '@' )
    {
        if(islower(ch))
            {
                ch = toupper(ch);
                cout << ch;
            }
        else if(isupper(ch))
            {
                ch = tolower(ch);
                cout << ch;    
            }
        cin >> ch;
    }
    cout << "bye,It's over!";
    return 0;
}