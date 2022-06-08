// carrots.cpp -- food processing program
// uses and displays a variable
#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;    //声明语句（definition）指出了要存储的数据类型和程序对存储在这里的数据使用的名称
    
    carrots = 25;    //赋值语句
    cout << "I have";
    cout << carrots;     //cout将变量转换为字符串形式
    cout << "carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. New I have " << carrots << " carrots." <<endl;
    return 0;
}
