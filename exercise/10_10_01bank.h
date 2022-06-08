


typedef unsigned long Deposit;
class Bank
{
private:
  char name[40]; // or std::string name;
  char account[25]; // or std::string account
  Deposit balance;
public:
  Bank(const char* client, const char* num, Deposit bal = 0.0);
  void show(void) const;
  void save(Deposit cash);
  void draw(Deposit cash);
};