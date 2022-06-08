// fltadd.cpp -- precision problems with  float
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.4e+22f;
    float b = a + 1.0f;//float类型只能表示数字中的前6位或前7位，修改23位，不会对这个值有任何影响

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}