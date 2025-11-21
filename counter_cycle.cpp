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
// Function to find sum of specific locations
int sumNumber(int number)
{
    int sum1 = 0, sum2 = 0, sum3 = 0, digit = 0;
    int count1 = 1, count2 = 2, count3 = 3;    // three counter varibles to track positions   
    for (int loopCounter = 1; loopCounter <= number; loopCounter++)
    {
        cout << "Enter digit:";
        cin >> digit;
        if (loopCounter == count1)
        {
            sum1 += digit;
            count1+=3;
            continue;
        }
        else if (loopCounter == count2)
        {
            sum2 += digit;
            count2+=3;
            continue;
        }
        else 
        {
            sum3 += digit;
            count3+=3;
            continue;
        }
    }

    cout << "Sum1=" << sum1 << endl;
    cout << "Sum2=" << sum2 << endl;
    cout << "Sum3=" << sum3 << endl;

    return 0;
    
}