#include <iostream>
const int Strsize = 20;
const int Size = 4;
struct bop{
    char fullname[Strsize];
    char title[Strsize];
    char bopname[Strsize];
    int preference;
};
int main()
{
    using namespace std;
    bop group[Size] = {
        {"Michael Jackson","Great singer","MJ",1},
        {"John Lennon","Pop singer ","John",2},
        {"Steven Jobs","CEO","Jobs",0},
        {"Socrates","Philosopher","Ph",1}
    };
    cout <<"Benevolent Order of Programmers Report\n"
    "a. display by name\tb. display by title\n"
    "c. display by bopname\td. display by preference\n"
    "q. quit\n";
    cout << "Enter your choice:";
    char ch;
    cin >> ch;
    while (ch != 'q')
    {
        switch(ch)
        {
            case 'a':{
                    for(int i = 0; i < Size; i++)
                        cout << group[i].fullname << endl;
                    break;}
            case 'b':{
                    for(int i =0; i < Size; i++)
                        cout << group[i].title << endl;
                    break;}
            case 'c':{
                    for (int i =0; i < Size; i++)
                        cout << group[i].bopname << endl;
                    break;}
            case 'd':{
                    for(int i = 0; i < Size; i++)
                        switch(group[i].preference)
                        {
                            case 0: cout << group[i].fullname << endl;break;
                            case 1: cout << group[i].title << endl;break;
                            case 2: cout << group[i].bopname << endl;break;
                        }
                    break;}
        }
        cout << "Next choice:";
        cin >> ch;
    }
    cout << "Bye!" << endl;
    return 0;
}
