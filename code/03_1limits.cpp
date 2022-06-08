// limits.cpp -- some integer limits
#include <iostream>
#include <climits>//定义了符号常量，来表示类型的限制。
int main()
{
    using namespace std;
    int n_char = CHAR_MAX;
    int n_int = INT_MAX;//声明和初始化合并在了一起
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    
    cout << "char is " << sizeof (char) << "bytes." << endl; 
    cout << "int is " << sizeof (int) << "bytes." << endl; //对类型名使用sizeof运算符时，应该将名称放在括号中
    cout << "short is " << sizeof n_short << "bytes." << endl;  //对变量名使用sizeof运算符时，括号是可选的
    cout << "long is " << sizeof n_long << "bytes." << endl;
    cout << "long long is " << sizeof n_llong << "bytes." << endl;
    cout << endl;
    
    cout << "Maximum values: " << endl;
    cout << "char: " << n_char << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;
    
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per bytes = " << CHAR_BIT << endl;
    return 0;
}
