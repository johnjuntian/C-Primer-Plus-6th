#include <iostream>
#include <cstring>
#include <new>
struct chaff
{
    char dross[20];
    int slag;
};
char buffer[2*sizeof(chaff)];
const int N = 2;

int main()
{
    // option 1
    using namespace std;
    chaff *ps1 = new (buffer) chaff[N];
    strcpy(ps1[0].dross, "option_1");
    ps1[0].slag = 1;
    strcpy(ps1[1].dross, "OPTION_1");
    ps1[1].slag = 2;
    // option2
    chaff *ps2 = new chaff[2];
    strcpy(ps2[0].dross, "option_2");
    ps2[0].slag = 100;
    strcpy(ps2[1].dross, "OPTION_2");
    ps2[1].slag = 200;
    for(int i = 0; i < 2; i++)
        cout << "dross: "   << ps1[i].dross << " slag: " << ps1[i].slag
                  << "\ndross: " << ps2[i].dross << " slag: " << ps2[i].slag
                  << endl;
    delete []ps2;
    return 0;
}