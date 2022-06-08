// compile with eternal.cpp
#include <iostream>
extern double warming;

// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Updateing global warming to " << warming;
    cout << " degrees.\n";
}

void local()
{
    double warming = 0.8; // new variable hides external one

    cout << "Local warming = " << warming << " degrees.\n";
// Access global variable with the scope resolution operator
    cout << "But global warming = " << ::warming; // the scope resolution operator
    cout << " degrees.\n";
}