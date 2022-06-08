#include <iostream>

using namespace std;
struct people
{
    char first[10];
    char last[10];
    char grade; 
    unsigned int age;
};

int main()
{
    people one;
    cout << "What is your first name?";
    cin.getline(one.first, 10);

    cout << "What is your last name?";
    cin.getline(one.last, 10);

    cout << "What letter grade do you deserve?";
    cin >> one.grade;

    cout << "What is your age?";
    cin >> one.age;

    cout << "Name: " << one.last << ", " << one.first << endl;
    cout << "Grade: " << ++one.grade << endl;
    cout << "Age: " << one.age << endl;
    return 0;
}