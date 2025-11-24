#include <iostream>
using namespace std;

int isPrime(int num);

int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    cout << isPrime(number);
}
int isPrime(int num)
{
    long long mul = 2;
    int temp = 1, primeCounter = 0;
    if (num < 0)
    {
        cout << "Invalid input";
        return 0;
    }
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i <= num; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                temp = 0;
                break;
            }
        }
        if (temp == 1)
        {
            primeCounter++;
        }
        temp = 1;
    }
    return primeCounter;
}