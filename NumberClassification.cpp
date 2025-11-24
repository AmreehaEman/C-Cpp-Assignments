#include <iostream>
using namespace std;

string howBad(int number);
int isPrime(int num);

int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    cout << howBad(number);
    return 0;
}
string howBad(int number)
{
    int a, sum = 0;
    for (int i = 1; number > 0; i++)
    {
        a = number % 2;
        sum += a;
        number = number / 2;
    }
    if (sum % 2 == 0)
    {
        if (isPrime(sum))
        {
            return "Evil,Pernicious";
        }
        else
        {
            return "Evil";
        }
    }
    else
    {
        if (isPrime(sum))
        {
            return "Odious, Pernicious";
        }
        else
        {
            return "Odious";
        }
    }
}

int isPrime(int num)
{
    int p = 1;
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            p = 0;
            break;
        }
    }
    return p;
}