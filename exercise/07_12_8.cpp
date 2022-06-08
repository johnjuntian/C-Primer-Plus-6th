#include <iostream>
using namespace std;
int replace(char * str, char c1, char c2);
int replace2(char * str, char c1, char c2);

int main()
{
    char a = 'a';
    char b = 'b';
    char str[20] = "aabbccaabbcc";
    cout << "This is method #1\n";
    int count = replace(str, a, b);
    cout << "count = " << count << endl;
    cout << str << endl;
    cout << "&str(main) = " << &str << endl;

    char str2[20] = "aabbccaabbcc";
    cout << "\n\nThis is method #2\n";
    int count2 = replace2(str2, a, b);
    cout << "count2 = " << count << endl;
    cout << str2 << endl;
    cout << "&str2(main) = " << &str2 << endl;

    return 0;

}

int replace(char * str, char c1, char c2)
{
  int count = 0;
  for (int i = 0; str[i] != '\0' ; i++)
    if(str[i] == c1)
    {
      str[i] = c2;
      count++;
     }
  cout << "&str(func) = " << &str << endl;
  return count;
}

int replace2(char * str, char c1, char c2)
{
    int count = 0;
    while(*str)
    {
        if(*str == c1)
        {
            *str = c2;
            count++;
        }
        str++;
    }
    cout << "&str(func2) = " << &str << endl;
    return 0;
}
