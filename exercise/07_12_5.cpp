#include <iostream>
double choose(const double ar[], int n);
int main()
{
    using namespace std;
    double arr[5] = {3.5, 8, 2, 9.7, 9.8};
    double max = choose(arr, 5);
    cout << "max = " << max << endl;
    return 0; 
}

double choose(const double ar[], int n)
{
  double max = ar[0];
  for (int i = 0; i < n; i++)
  {
    if (ar[i] > max)
      max = ar[i];                
   }  
  return max;
}
