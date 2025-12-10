#include <iostream>
using namespace std;

// Finds the column with the highest sum and correctly swaps that entire column with the first column (j=0).

int main()
{
    int rowSize, sum = 0, firstColSum = 0;
    cout << "Enter row size: ";
    cin >> rowSize;
    int matrix[rowSize][5];
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < rowSize; j++)
        {
            cout << "Enter element at position [" << j << "]" << "[" << i << "]: ";
            cin >> matrix[j][i];
            sum += matrix[j][i];
            if (i == 0)
            {
                firstColSum = sum;
            }
        }
        if (firstColSum < sum)
        {
            for (int t = 0; t < 5; t++)
            {
                int temp = matrix[t][i];
                matrix[t][i] = matrix[t][0];
                matrix[t][0] = temp;
            }
            firstColSum=sum;
        }
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}