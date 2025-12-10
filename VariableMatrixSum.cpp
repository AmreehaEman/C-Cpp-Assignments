#include <iostream>
using namespace std;

// Prompts user for row size and calculates the total sum of all elements in the matrix.

int main()
{
    int rowSize,sum=0;
    cout << "Enter row size: ";
    cin >> rowSize;
    int matrix[rowSize][3];
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "]" << "[" << j << "]: ";
            cin >> matrix[i][j];
            sum+=matrix[i][j];
        }
    }
    cout<<"The sum of elements in the matrix is: "<<sum;
    return 0;
}