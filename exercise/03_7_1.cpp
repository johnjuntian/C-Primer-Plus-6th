#include <iostream>
const int T = 12; // 1ft = 12in

int main()
{
    using namespace std;
    int ft,in;
    cout << "Enter your height(in):____\b\b\b\b";
    cin >> in;
    ft = in / T;
    in = in - 12 * ft;
    cout << "in = " << ft << "ft + " << in << "in.\n";
    return 0;
}

