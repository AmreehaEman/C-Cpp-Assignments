#include <iostream>
using namespace std;

// Coin Value Calculation Converts user-input coin counts (quarters, dimes, etc.) into a total monetary value. Checks if the total change is sufficient to cover a specified due amount.

int main()
{
    float arr[4], dueAmount;
    cout << "Enter quarters:";
    cin >> arr[0];
    cout << "Enter dims:";
    cin >> arr[1];
    cout << "Enter nickels:";
    cin >> arr[2];
    cout << "Enter pennies:";
    cin >> arr[3];
    cout<<"Enter the due amount:";
    cin>>dueAmount;

    arr[0]*=0.25;
    arr[1]*=0.10;
    arr[2]*=0.05;
    arr[3]*=0.01;

    float sum=arr[0]+arr[1]+arr[2]+arr[3];

    if(sum>=dueAmount)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}