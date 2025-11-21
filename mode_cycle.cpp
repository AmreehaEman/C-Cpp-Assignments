#include <iostream>
using namespace std;

int sumNumber(int number);

int main()
{
    int length;
    cout << "Enter length of (number of digits):";
    cin >> length;
    sumNumber(length);
}

int sumNumber(int number)
{
    int sum1 = 0, sum2 = 0, sum3 = 0, digit;
    for (int counter = 1; counter <= number; counter++)
    {
        cout << "Enter digit:";
        cin >> digit;
        if (counter % 3 == 1)
        {
            sum1 += digit;
        }
        else if (counter % 3 == 0)
        {
            sum3 += digit;
        }
        else
        {
            sum2 += digit;
        }
    }

    cout << "Sum1=" << sum1 << endl;
    cout << "Sum2=" << sum2 << endl;
    cout << "Sum3=" << sum3 << endl;
}