#include <iostream>
using namespace std;
float inchesToFeet(float inc)
{
    float b;
    return b = inc / 12;
}
int main()
{
    float inches, feet;
    cout << "Enter the measurement in inches: ";
    cin >> inches;
    feet = inchesToFeet(inches);
    cout << "Equivalent in feet: " << feet;
    return 0;
}