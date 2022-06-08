#include <iostream>
int d = 0;
void times(const char * a, int b = 0);

int main()
{

    char a[10] = "hello!";
    times(a);
    times(a);
    times(a, 1);
    return 0;
}


void times(const char * a, int b)
{
    static int c = 0;  // 没有链接性的静态持续变量
    c++;
    if (b == 0)
    {
        std::cout << "a: " << a << "\n";
    }
    else
    {
        for(int i = 1; i <= c; i++)
            std::cout<< i << "print\ta: " << a << "\n";
    }
}
