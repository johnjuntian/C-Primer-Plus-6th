#include <iostream>
#include <cstring>      // for strlen(), strcpy()
template <class T> T maxn(T * a, int n);

// explicit specialization for the char * type
template <> char * maxn(char * a[], int n);

int main()
{
    int x[6] = {1, 3, 7, 9, 8, 12};
    double y[4] = {1.3, 4.5, 2.7, 2.2};
    char * a[5] = {"tian jun", "hu jianpingmama", "nori tang", "tian yu", "tian taijun"};
    std::cout << "maxn_x = " << maxn(x, 6) << std::endl;
    std::cout << "maxn_y = " << maxn(y, 4) << std::endl; //decltype(maxn(y, 4)) z = maxn(y, 4);
    std::cout << "maxn_a = " << maxn(a, 5) << std::endl;
    return 0;
}

template <typename T> // Don't forget this *
T maxn(T * a, int n)
{
    T b = a[0];
    for(int i = 0; i < n; i++)
    {
        if (b < a[i])
            b = a[i];
    }
    return b;
}

template <> char * maxn (char * a[], int n)
{
    char * x = a[0];
    for(int i = 0; i < n; i++)
    {
        if (strlen(x) < strlen(a[i]))
            x = a[i];
    }
    return x;

}