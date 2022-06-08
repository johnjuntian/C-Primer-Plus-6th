// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);    //function prototype for simon()

int main()
{
    using namespace std;
    simon(3);
    cout << "pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n) //c++不允许将函数定义嵌套在另一个函数定义中，每个函数定义都是独立的，所有函数创建都是平等的。
{
    using namespace std;
    cout << "Simon says touch your toes " << n << "times." << endl;
}
