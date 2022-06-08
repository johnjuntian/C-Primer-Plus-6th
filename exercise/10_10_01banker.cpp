#include "10_10_01bank.h"
#include <iostream>

Bank::Bank(const char* client, const char* num, Deposit bal)
{
  strncpy(name, client, 39);
  name[39] = '\0';
  strncpy(account, num, 24);
  account[24] = '\0';
  balance = bal;
}

void Bank::show() const
{
    using std::cout;
    using std::endl; 
    cout << "Name: " << name << endl;
    cout << "Account: " << account << endl;
    cout << "Balance: " << balance << endl;
}

void Bank::save(Deposit cash)
{
    balance += cash;
}

void Bank::draw(Deposit cash)
{
    balance -= cash;
}