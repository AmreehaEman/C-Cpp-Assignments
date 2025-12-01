#include <iostream>
using namespace std;

// Applies a repeated transformation (add 2 for odd, subtract 2 for even) to each element of a fixed-size array.

void evenOdd();
int arr[3], operationNeed;
int main()
{
    cout << "Enter number of times even odd transformation need to be done:";
    cin >> operationNeed;
    cout << "Enter elements one by one(just three)" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    evenOdd();
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void evenOdd()
{
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < operationNeed; i++)
        {
            
            if (arr[j] % 2 == 0)
            {
                arr[j] = arr[j] - 2;
            }
            else
            {
                arr[j] = arr[j] + 2;
            }
        }
            
    }
}