// usestock1.cpp -- using the Stock class
// compile with stock10.cpp
#include <iostream>
#include "10_04stock10.h"
int main()
{
    {
    using std::cout;
    cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";
    }
    return 0;
}
/*您可能注意到了， 在程序清单10.6中， main()的开头和末尾多了一个大括号。 诸如stock1和
stock2等自动变量将在程序退出其定义所属代码块时消失。 如果没有这些大括号， 代码块将为
整个main()， 因此仅当main()执行完毕后， 才会调用析构函数。 在窗口环境中， 这意味着将在
两个析构函数调用前关闭， 导致您无法看到最后两条消息。 但添加这些大括号后， 最后两个
析构函数调用将在到达返回语句前执行， 从而显示相应的消息。*/