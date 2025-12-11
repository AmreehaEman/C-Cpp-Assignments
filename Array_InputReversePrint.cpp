#include <iostream>
using namespace std;

void printReverseArray(int arr[], int size);

// Collects array elements from the user and prints them in reverse order. Illustrates basic user input handling and function use with arrays.

int main()
{
    int count;
    cout << "Enter the number of elements:";
    cin >> count;
    if(count<0)
    {
        cout<<"Invalid input,number of values should be greater than 0";
    }
    int arr[count];
    // function call
    printReverseArray(arr, count);
    return 0;  
}

void printReverseArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value:";
        cin >> arr[i];
    }
    cout << "In reverse order" << endl;
    for (int i = (size - 1); i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}