#include <iostream>

float harmonic_mean(float,float);
int main()
{
    using namespace std;
    float a, b, Har;
    cout << "Enter two number:\n"; 
    cin >> a >> b;  
    while (a != 0 && b != 0) 
    {
    Har = harmonic_mean(a, b);
    cout << "Harmonic mean of the two number: " << Har << endl;
    cout << "Enter two number:\n";
    cin >> a >> b;
    }
    cout <<  "Over, bye!\n";
    return 0;
}

float harmonic_mean(float a, float b)
{
    float Har;
    Har = 2.0 * a * b /(a + b);
    return Har;
}