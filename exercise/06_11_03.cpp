#include <iostream>
int main()
{
    using namespace std;
    char ch;
    cout << "Please enter one of the following choices: \n"
    "c) carnivore\t p) pianist\n"
    "t) tree\t\t g) game\n";
    while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
    cout << "Please enter a c,p,t, or g: ";
    cin >> ch;
    }
    
    switch(ch)
    {
        case 'c'   :   cout << "A maple is a carnivore.\n";
                     break;
        case 'p'   :   cout << "A maple is a pianist.\n";
                     break;
        case 't'   :   cout << "A maple is a tree.\n";
                     break;
        case 'g'   :   cout << "A maple is a game.\n";
                     break;
    }
    return 0;

}