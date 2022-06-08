// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
double * fill_array(double  * ar, int limit);
void show_array(const double * ar, double * arr);
void revalue(double r, double * ar , double * arr);

int main()
{
    using namespace std;
    double properties[Max];
    double * arr = fill_array(properties, Max);
    show_array(properties, arr);
    if ( arr - &properties[0]  > 0) //*
    {
        cout << "Enter revaluation factor: ";
        double factor;
/*另外请记住，非数字输入将设置一个错误条件，禁止进一步读取输入。
如果程序在输入循环后还需要进行输入，则必须使用cin.clear( )重
置输入， 然后还可能需要通过读取不合法的输入来丢弃它们。*/
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, arr);
        show_array(properties, arr);
    }
    cout << "Done.\n";
    return 0;
}

double * fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();  //重置输入
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } 
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return &ar[i];
}

// the following function can use, but not alter,
// the array whose address is ar

void show_array(const double * ar, double * arr)
{
    using namespace std;
    for (int i = 0; i < arr - &ar[0]; i++)
    {
        cout << "Property #" << (i +1) << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], double * arr)
{
    for (int i = 0; i < arr - &ar[0]; i++)
        ar[i] *= r; 
}