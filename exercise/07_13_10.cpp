
#include <iostream>
const int SIZE = 3;
double add(double x, double y) { return x + y; }
double sub(double x, double y) { return x - y; }
double mult(double x, double y) { return x * y; }
typedef double (*pe)(double, double);               //*
void calculate(double, double, pe [], int);         //*
pe pf[3]= {add, sub, mult};                     //*
int main(void)
{
    double x, y;
    std::cout << "Enter two values (q to quit): \n";
    while(std::cin >> x >> y)
    {
        std::cout << "Result (add, sub, mult): \n";
        calculate(x, y, pf, SIZE);
        std::cout << "Next values: \n";
    }
    return 0;
}
void calculate(double x, double y, pe * pf, int n)//*
{
    for (int i = 0; i < n; i++)
        std::cout << pf[i](x, y) << std::endl;
}

