#include <iostream>
const int n = 5;
int Fill_array(double * ar, int);
void Show_array(double * ar, int);
void Reverse_array(double * ar, int);

int main()
{
    double ar[n];
    int x = Fill_array(ar, n);
    std::cout << "First operation: \n";
    Show_array(ar, x);

    std::cout << "Second operation: \n";
    Reverse_array(ar, x);
    Show_array(ar, x);

    std::cout << "Third operation: \n";
    Reverse_array(ar, x);
    Reverse_array(ar + 1, x - 1);
    Show_array(ar, x);
    
    return 0;
}


int Fill_array(double * ar, int n)
{
    int i = 0;
    std::cout << "Enter number(double): ";
    for (; i < n && std::cin >> ar[i]; i++)
        std::cout << "Next number: ";
    return i;
}

void Show_array(double * ar, int n)
{
    for(int i = 0; i < n; i++)
        std::cout << "ar[" << i << "] = " << ar[i] << std::endl; 
}

void Reverse_array(double * ar, int n)
{
    double arr[n];
    for(int i = 0; i < n; i++ )
        arr[i] = ar[i];
    for(int i = 0; i < n; i++ )
        ar[i] = arr[n - i - 1];
}