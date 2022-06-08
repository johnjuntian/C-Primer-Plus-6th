#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    const int Size = 10;
    double arr[Size];
    double avg, num, sum = 0.0;
    int i = 0, cnt = 0;
    cout << "Please enter donation: ";
    for (; i < Size-1 && cin >> num; i++ )
    {
        arr[i] = num;
        sum += arr[i];
        cout << "Please enter donation: ";
    }
    if (cin >> num)
    {
        i++;
        arr[i] = num;
        sum += arr[i];
    }
    if (i != 0)
    {
        avg = sum/i;
        for (int n = 0; n < i; n++)
        {
        if (arr[n] > avg )
            cnt++;
        }
    cout << "avg = " << avg << ",and there are " 
    << cnt << " numbers that are above average.\n";
    }else
        cout << "0oops.. No data." << endl;
    return 0;
}