#include <iostream>
using namespace std;
int main()
{
    string day;
    float amount, payable;
    while (true)
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter total purchase amount: ";
        cin >> amount;
        if (day == "Sunday" || day == "sunday")
            payable = amount - (amount * 0.10);
        else
            payable = amount - (amount * 0.05);
        cout << "Payable amount: " << payable << endl;
    }
    return 0;
}
