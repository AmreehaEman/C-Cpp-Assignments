#include <iostream>
using namespace std;

// Reads two separate arrays and prints them in a specific order: Array 1[0], followed by all of Array 2, then Array 1[1]. A demonstration of manipulating print order for data presentation.

int main()
{
    int  num2, arr1[2];
    cout<<"Enter the elements of first array (must be 2): "<<endl;
    cin>>arr1[0];
    cin>>arr1[1];
    cout<<"Enter the number of element in second array: ";
    cin>>num2;
    int arr2[num2];
    for (int i = 0; i < num2; i++)
    {
        cout<<"Enter element:";
        cin>>arr2[i];
    }
    cout<<arr1[0];
    for (int j = 0; j < num2; j++)
    {
        cout<<" "<<arr2[j];
    }
    cout<<" "<<arr1[1];
    return 0;
}