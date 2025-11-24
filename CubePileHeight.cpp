#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;


long long pileCubes(long long number);

int main()
{
    long long num;
    cout << "Enter number:";
    cin >> num;
    cout << pileCubes(num);
    return 0;
}
long long pileCubes(long long number)
{
    long long sum = 0,i;
    for (i = 1; sum < number; i++)
    {
        sum = sum + i*i*i;
        if (sum == number)
        {
            return i;
        }
    }
    return -1;
}
