// sqrt.cpp -- using the sqrt() function
#include  <iostream>
#include  <cmath> //通过cmath文件来提供函数的原型

int main()
{
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area); //开根号
    cout << "That's the equivalent of a square " << side
         << " feet to the side." <<endl;
    cout << "How fascinating!" << endl;
    return 0;
}
