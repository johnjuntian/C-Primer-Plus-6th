// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

/*这种语法指出，Stock是这个新类的类型名。该声明让我们能够声明Stock类型的变量——称为对象或实例*/
class Stock   // class declaration
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
//two constructors
    Stock();    //default constructor
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();   // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;
};      // note semicolon at the end

#endif