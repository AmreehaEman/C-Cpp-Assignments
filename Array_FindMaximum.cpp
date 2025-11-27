#include <iostream>
using namespace std;

// FUNCTION: findLargestNumber finds the maximum value within a user-defined integer array
int findLargestNumber(int arr[], int size);

int main()
{
    int count, maximumNumber;
    cout << "Enter the number of elements:";
    cin >> count;
    if (count < 0)
    {
        cout << "Invalid input,number of values should be greater than 0";
    }
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter value:";
        cin >> arr[i];
    }
    maximumNumber = findLargestNumber(arr, count);
    cout<<"Maximumnumber is :"<<maximumNumber;
    return 0;
}

int findLargestNumber(int arr[], int size)
{
    int maximum = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}
