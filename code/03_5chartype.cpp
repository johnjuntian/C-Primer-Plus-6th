//chartype.cpp -- the char type
#include <iostream>
int main()
{
    using namespace std;
    char ch;
  

    cout << "Enter a character: " << endl;
    cin >> ch;
    
    cout << "Hola! ";
    cout << "Thank you for the \"" << ch << "\" character," ;//对于char类型，cout只输出数字对应在ASCII编码中的字符
//以下书本之外，自己做的额外扩展代码，可以忽略。
    int number;
    number = ch;
    cout <<"the ASCII code for " <<  "\""<< ch << "\" is number \"" << number <<  "\""<< "." << endl;

    int ch1;
    char ch2;
    cout << "Enter a digital (0~127): " << endl;
    cin >> ch1;
    ch2 = ch1;
    cout << "Thank you for the \"" << ch1 << "\" digital," ;
    cout << "ASCII code  " <<  "\""<< ch1 << "\" is charater \"" << ch2 <<  "\"" << "." << endl; //char数据类型，cout只输出字符，不输出数字。

    return 0;

    
}