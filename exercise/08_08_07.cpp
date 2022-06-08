// tempover.cpp -- template overloading
#include <iostream>

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Total sum of all things:";
    decltype(SumArray(things, 6)) sum_thing = SumArray(things, 6);
    cout << sum_thing << endl;
    cout << "Total sum of all debts:";
    decltype(SumArray(pd, 3)) sum_debts = SumArray(pd, 3);
    cout << sum_debts << endl;
    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += *arr[i]; // 记得加‘*’解除引用运算符

    return sum;
}

