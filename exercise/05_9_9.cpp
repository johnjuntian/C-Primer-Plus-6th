#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string word;
    int i = -1;
    cout << "Enter words (to stop, type the word done): ";
    do
    {
        cin >> word;
        i++;
    } while (word != "done");
    cout << "You entered a total of " << i << " words.";
    return 0;
}