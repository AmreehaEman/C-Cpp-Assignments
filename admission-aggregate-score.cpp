#include <iostream>
using namespace std;
int main()
{
    string name;
    float matric, inter, ecat, aggregate;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter matric marks (out of 1100): ";
    cin >> matric;
    cout << "Enter intermediate marks (out of 550): ";
    cin >> inter;
    cout << "Enter ECAT marks (out of 400): ";
    cin >> ecat;
    aggregate = (matric / 1100 * 10) + (inter / 550 * 40) + (ecat / 400 * 50);
    cout << "Aggregate score for " << name << " is: " << aggregate << "%";
    return 0;
}
