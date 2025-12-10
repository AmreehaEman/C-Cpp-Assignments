#include <iostream>
using namespace std;

// Logic to determine if a 3x3 matrix is an identity matrix by checking the diagonal (must be 1s) and non-diagonal elements (must be 0s).

int main()
{

    int matrix[3][3];
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "]" << "[" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    // if(matrix[1][1]==1&&matrix[0][0]==1&& matrix[2][2]==1&&matrix[1][0]==0&&matrix[0][2]==0&& matrix[0][1]==0&&matrix[1][2]==0&&matrix[2][0]==0&& matrix[2][1]==0)
    // cout<<"It is dentity matrix";
    // else
    // {
    //     cout<<"It's not identity";
    // }
    bool valid = 0;
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][i] == 1)
            valid = 1;
        else
        {
            valid = 0;
            break;
        }
    }
    if (valid)
    {
        for (int i = 0; i < 3; i++)
        {
            if (valid == 0)
            {
                break;
            }
            for (int j = 0; j < 3; j++)
            {
                if (j == i)
                {
                    continue;
                }

                if (matrix[i][j] == 0)
                {
                    valid = 1;
                }
                else
                {
                    valid = 0;
                    break;
                }
            }
        }
        if (valid)
        {
            cout << "Identity matrix";
        }
        else
        {
            cout << "Not identity";
        }

        return 0;
    }