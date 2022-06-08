#include <iostream>
const int n = 10;
void input(float ar[], int);
void show(const float ar[]);
float mean(const float ar[]);
using namespace std;
int main()
{

    float ar[n + 1], m;
    ar[10] = 0;
    cout << "Enter your golf scores(q to finish):\n";
    input(ar, n);
    show(ar);
    m = mean(ar);
    cout << "Your golf mean score: " << m << endl;
    return 0;
    
}

void input(float ar[], int n)
{
    for (int i = 0; i < n && cin >> ar[i]; i++)
        ar[10]++;
}
void show(const float ar[])
{
    cout << "The golf scores you entered:";
    for (int i = 0; i < ar[10]; i++)
        cout << ar[i] << ", ";
    cout << "\b\b. " << endl;  
}
float mean(const float ar[])
{
    float sum = 0;
    for (int i = 0; i < ar[10]; i++)
        sum += ar[i];
    return sum/ar[10];
}