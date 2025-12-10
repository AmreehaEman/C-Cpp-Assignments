#include <iostream>
using namespace std;

// Counts the number of rows where all three elements in that row are identical (e.g., [5, 5, 5]).

int main()
{
    int rowSize, j, count = 0;
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
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        j = 0;
        if (matrix[i][j] == matrix[i][j + 1] && matrix[i][j] == matrix[i][j + 2])
        {
            count++;
        }
        j++;
    }
    cout << "The total same rows are: " << count;

    return 0;
}