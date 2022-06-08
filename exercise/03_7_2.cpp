#include <iostream>
float bim(float,float);
const int Foot_inch = 12;
const float Inch_m = 0.0254;
const float Kg_pound = 2.2;
int main ()
{
    using namespace std;
    int h_foot, h_inch, w_pound, height_inch;
    float height_m, weight_kg, BIM;
    cout << "Enter your height: _foot__inch\b\b\b\b\b\b\b\b\b\b\b";
    cin >> h_foot;//5
    cout << "Enter your height: "<< h_foot <<"foot__inch\b\b\b\b\b\b";
    cin >> h_inch;//10
    cout << "Enter your weight: ___pound.\b\b\b\b\b\b\b\b\b";
    cin >> w_pound;//145
    height_inch = h_foot * Foot_inch + h_inch;
    height_m = height_inch * Inch_m;
    weight_kg = w_pound / Kg_pound;
    BIM = bim(weight_kg,height_m);
    cout << "your BIM is: " << BIM << ".\n";
    return 0;
}

float bim(float weight,float height)
{
    return weight / (height * height);
}