#include <iostream>

int main()
{
    using namespace std;
    int L,M;
    cout << "请输入距离（单位long）：";
    cin >> L;
    M = 220*L;
    cout << L << "long = " << M << "码." << endl;
    return 0;
}