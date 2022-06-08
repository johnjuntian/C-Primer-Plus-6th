// n!
#include <iostream>
unsigned long int factorial(int);

int main()
{
    using namespace std;
    cout << "Enter a number(q to exit): ";
    int n;
    while (cin >> n && n >= 0)
    factorial(n);
    return 0;
}

unsigned long int factorial(int n)
{
    unsigned long int fa;
    if (n > 0)
    {
        fa = n * factorial(n -1);
        std::cout << n << "! = " << fa << std::endl;
        return fa;
    }
    else 
    {
        std::cout << n << "! = " << 1 << std::endl;
        return 1;
    }
    

}