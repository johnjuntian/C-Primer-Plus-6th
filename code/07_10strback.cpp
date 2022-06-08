// strgback.cpp -- a function that returns a pointer to char
#include <iostream>
char * buildstr(char c, int n);
int main()
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';
    while(n-- > 0) // 先使用n值在执行“--”操作
        pstr[n] = c;
    return pstr;
}
/*注意，变量pstr的作用域为buildstr函数内，因此该函数结束时，
pstr（而不是字符串）使用的内存将被释放。但由于函数返回了pstr的
值，因此程序仍可以通过main( )中的指针ps来访问新建的字符串。*/