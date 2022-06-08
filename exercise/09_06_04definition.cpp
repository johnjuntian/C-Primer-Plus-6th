#include <iostream>
#include "09_06_04.h"
namespace SALES
{
void setSales(Sales & s, const double ar[], int n)
{
    if (n >= QUARTERS)
    {
        for(int i = 0; i < QUARTERS; i++)
            s.sales[i] = ar[i];
        double sum = 0.0;
        for(int i = 0; i < QUARTERS; i++)
            sum += s.sales[i];
            s.average = sum / QUARTERS;
    }
    else
    {
        for(int i = 0; i < n; i++)
            s.sales[i] = ar[i];
        for(int i = n; i < QUARTERS; i++)
            s.sales[i] = 0;
    double sum = 0.0;
    for(int i = 0; i < QUARTERS; i++)
        sum += s.sales[i];
        s.average = sum / n;
    }
    s.max = s.sales[0];
    for(int i = 1; i < QUARTERS; i++)
    {
        if(s.max < s.sales[i])
            s.max = s.sales[i];
    }
    s.min = s.sales[0];
    for(int i = 1; i < QUARTERS; i++)
    {
        if(s.min > s.sales[i])
            s.min = s.sales[i];
    }
}

void setSales(Sales & s)
{
    using std::cout;
    using std::cin;
    cout << "Enter sales for 4 quarters(Whitespace separated): ";
    cin >> s.sales[0] >> s.sales[1] >> s.sales[2] >> s.sales[3];
    double sum = 0.0;
    for(int i = 0; i < QUARTERS; i++)
        sum += s.sales[i];
    s.average = sum / QUARTERS;
    s.max = s.sales[0];
    for(int i = 1; i < QUARTERS; i++)
    {
        if(s.max < s.sales[i])
            s.max = s.sales[i];
    }
    s.min = s.sales[0];
    for(int i = 1; i < QUARTERS; i++)
    {
        if(s.min > s.sales[i])
            s.min = s.sales[i];
    }
}

void showSales(const Sales & s)
{
    using std::cout;
    cout << "sales for 4 quarters:\n";
    for(int i = 0; i < QUARTERS; i++)
        cout << s.sales[i] << "\n";
    cout << "average: " << s.average << "\n";
    cout << "max: " << s.max << "\n";
    cout << "min: " << s.min << "\n";
}
}