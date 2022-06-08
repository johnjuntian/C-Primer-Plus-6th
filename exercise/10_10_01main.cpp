#include <iostream>
#include "10_10_01bank.h"

int main()
{
    using namespace std;
    char name[40]; 
    char account[25];
    Deposit cash;
    cout << "Enter your name: ";
    cin.getline(name, 40);
    cout << "Enter your account: ";
    cin.getline(account, 25);
    Bank user = Bank(name, account);
    user.show();
    cout << "How much cash to deposit: ";
    cin >> cash;
    user.save(cash);
    user.show();
    cout << "How much cash to withdraw: ";
    cin >> cash;
    user.draw(cash);
    user.show();`   
    return 0;
}