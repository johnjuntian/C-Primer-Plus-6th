#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char word[20];
    int i = -1;
    cout << "Enter words (to stop, type the word done): ";
    do
    {
        cin >> word;
        i++;
    } while (strcmp(word, "done"));
    cout << "You entered a total of " << i << " words.";
    return 0;
}