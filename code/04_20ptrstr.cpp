// ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring> // declare strlen(), strcpy
int main()
{
    using namespace std;
    char animal[20] = "bear"; // animal holds bear
    const char * bird = "wren"; // bird holds address of string
    char * ps; // uninitialized

    cout << animal << " and "; // display bear
    cout << bird << "\n"; // display wren
    cout << *bird << endl;
    cout << (char *)bird << endl;
    cout << (int *)bird << endl;
    //cout << ps << "\n" //may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal; //ok if input < 20 chars
    // cin >> ps; Too horrible a blunder to try;
    // ps doesn't point to allocated space

    ps = animal;//set ps to point to string
//将animal赋给ps并不会复制字符串而只是复制地址。
//这样,这两个指针将指向相同的内存单元和字符串。
    cout << ps << "!\n";//ok,same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)animal << endl;

    ps = new char [strlen(animal) + 1]; // get new storage
//上述代码使用strlen( )来确定字符串的长度， 并将它加1来获得包含空字符时该字符串的长度。 
//随后，程序使用new来分配刚好足够存储该字符串的空间.
    strcpy(ps, animal); // copy string to new storege
//strcpy( )函数接受2个参数.第一个是目标地址,第二个是要复制的字符串的地址。 
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;
    return 0;
}