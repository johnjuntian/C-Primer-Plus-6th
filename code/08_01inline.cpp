// inline.cpp -- using an inline function
#include <iostream>

//an inline function definition
inline double square(double x){ return x * x;}

int main()
{
    using namespace std;
    double a, b;
    double c = 13.0, d = 2;

    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c++ squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    cout << "d = " << d;
    cout << ", ++d squared = " << square(++d) << "\n";
    cout << "Now d = " << d << "\n";
    return 0;
}