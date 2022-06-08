// choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>
int main()
{
    using namespace std;
// C, original C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
//C++11 -- create and initialize array object
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;
//C++98 STL
    vector<double> a2(4);
// no simple way to initialize in C98
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
//use array notation
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

//misdeed
    a1[-4] = 20.2;
//上述代码将转换为如下代码*（a1-4） = 20.2;
//其含义是：找到a1指向的地方，向前移两个double元素，并将20.2存到目的地。
//也就是说，将信息存储到数组的外面，与C语言一样，C++也不检查这种超届错误。
    cout << "a1[-4]: " << a1[-4] << " at " << &a1[-4] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4" << endl
    << &a4[0] << endl 
    << &a4[1] << endl
    << &a4[2] <<endl
    << &a4[3] << endl;
    cout << "a3" << endl
    << &a3[0] << endl 
    << &a3[1] << endl
    << &a3[2] <<endl
    << &a3[3] << endl;
    cout << "a1" << endl
    << &a1[0] << endl 
    << &a1[1] << endl
    << &a1[2] <<endl
    << &a1[3] << endl;
    cout << "a2" << endl
    << &a2[0] << endl 
    << &a2[1] << endl
    << &a2[2] <<endl
    << &a2[3] << endl;
    return 0;
}