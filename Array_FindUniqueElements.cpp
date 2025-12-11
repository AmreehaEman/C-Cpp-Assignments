#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of elements:";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter value:";
        cin >> arr[i];

        // To check whether the number is entered before or not

        for (int j = 0; j < i; j++)
        {

            if (arr[i] == arr[j])
                cout << "Already Entered" << endl;
        }
    }

    // Takes user input into an array and uses nested loops with a flag to print only the unique values. Demonstrates advanced iteration control and data filtering logic.
    cout << "Unique elements:";

    for (int unique = 0; unique < num; unique++)
    {
        int temp = 0;
        for (int checker = 0; checker < unique; checker++)
        {

            if (arr[checker] == arr[unique])
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            cout << arr[unique]<<" ";
    }
}