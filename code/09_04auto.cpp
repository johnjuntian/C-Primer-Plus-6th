// autoscp.cpp -- illustrating scope of automatic variables
#include <iostream>
void oil(int x);
int main()
{
    using namespace std;
    int texas = 31;
    int year = 2011;
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "In oil(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = ";
    cout << &x << endl;
    {
        int texas = 113;
        cout << "In block, texas = " << texas; // 第二个texas变量（该代码块外部的）不可见
        cout << ", &texas = " << &texas << endl;
        cout << "In block, x = " << x << ", &x = "; // 代码块外部的x变量可见
        cout << &x << endl;
    }
    cout << "Post-block texas = " << texas; 
    // 程序离开上一个代码块，释放了最新的texas使用的内存，第二个texas再次可见
    cout << ", &texas = " << &texas << endl;
}