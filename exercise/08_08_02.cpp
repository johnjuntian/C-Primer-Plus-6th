#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
    char bar[20];
    double weight;
    int calorie;
};

void fill(CandyBar & a, const char * b = "Millennium Munch", const double c = 2.85, const int d = 350);
void show(CandyBar & a);

int main()
{
    CandyBar a;
    fill(a);
    show(a);
    fill(a, "haolilai", 2.5, 400);
    show(a);
    return 0;
}

void fill(CandyBar & a, const char * b, const double c, const int d)
{
    strncpy(a.bar, b, 20); // or strcpy(a.bar, b); or 
    a.calorie = c;
    a.weight = d;
}

void show(CandyBar & a)
{
    cout << "bar: " << a.bar << endl;
    cout << "weight = " << a.weight << endl;
    cout << "calorie = " << a.calorie << endl;
}

