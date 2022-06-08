#include "09_06_04.h"
using namespace SALES;
Sales st[2];
double ar[4] = {13, 11, 18, 14};
int main()
{
    setSales(st[0]);
    showSales(st[0]);
    setSales(st[1], ar, 4);
    showSales(st[1]);
    return 0;
}
