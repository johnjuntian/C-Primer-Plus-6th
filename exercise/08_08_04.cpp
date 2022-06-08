
#include <iostream>
using namespace std;
#include <cstring>      // for strlen(), strcpy()
struct stringy{
    char *str;          // points to a string
    int ct;             // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
void set(stringy &, const char*);
void show(const char*, int n = 1);
void show(const stringy &, int n = 1);
int main(void)
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
/* first argument is a reference,
allocates space to hold copy of testing,
sets str member of beany to point to the new block, 
copies testing to newblock, 
and sets ct member of beanty*/
    show(beany); // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    delete[]beany.str; //***
    return 0;
}

void set(stringy & a, const char* ch)
{
    int len = strlen(ch);
    char *str = new char[len + 1];
    strcpy(str, ch);
    a.str = str;
    a.ct = len;
}
void show(const char* a, int n)// 函数定义要把函数原型赋值的默认参数删除，不然编译会出错
{
    for (int i = 0; i < n; i++)
        cout << a << endl;

}
void show(const stringy & a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a.str << endl;
}