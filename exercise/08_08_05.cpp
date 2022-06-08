#include <iostream>
template <typename T>
T max5(T * a);

int main()
{
    int x[5] = {1, 3, 7, 9, 8};
    double y[5] = {1.3, 4.5, 2.7, 9.8, 2.2};
    std::cout << "max5_x = " << max5(x) << std::endl;
    std::cout << "max5_y = " << max5(y) << std::endl;

    decltype(max5(y)) z = max5(y);
    std::cout << "max5_y = " << z << std::endl;


    return 0;
}

template <typename T> // Don't forget this *
T max5(T * a)
{
    T b = a[0];
    for(int i = 0; i < 5; i++)
    {
        if (b < a[i])
            b = a[i];
    }
    return b;
}