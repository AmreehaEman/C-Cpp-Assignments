#include <iostream>
using namespace std;

string evenOrOdd(int num)
{
    if (num % 2 == 0)
        return "even";
    else
        return "odd";
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << evenOrOdd(number);
    return 0;
}
