#include <iostream>
using namespace std;

double calculateTotalResistance(double resistance[], int size);

// Total Series Resistance, Calculates the sum of resistor values in a series circuit using a dedicated function. Focuses on function structure, array handling, and using double data types.

int main()
{
    int number;
    cout << "Enter the number of resistors series in circuit:";
    cin >> number;
    double resistors[number];
    for (int i = 0; i < number; i++)
    {

        cout << "Enter the resistor value(in ohm):";
        cin >> resistors[i];
    }
    cout << calculateTotalResistance(resistors, number);
}

double calculateTotalResistance(double resistance[], int size)
{
    float sum=0;
    for (int j = 0; j < size; j++)
    {
        sum+=resistance[j];
    }
    return sum;
    
}