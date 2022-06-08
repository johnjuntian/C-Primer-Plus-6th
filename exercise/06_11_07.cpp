#include <iostream>
#include <cctype>
const int Num = 15;
int main()
{
    using namespace std;
    char word[Num];
    int vowel = 0, consonant = 0, other = 0;
    cout << "Enter words (q to quit):\n";
    while (cin >> word && word[0] != 'q' || word[1] != '\0') 
    {
    if (isalpha(word[0]))
    {
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u'
        || word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
            vowel++;
        else
            consonant++;
    }
    else 
        other++;
    }
    cout << vowel << " words beginning with vowels.\n"
         << consonant << " words beginning with consonants.\n"
         << other << " others.\n";
    
    return 0;
}