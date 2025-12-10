#include <iostream>
using namespace std;
void printCars(int carData[5][5], int rowSize);

// Simple function to print a 5x5 2D integer array.

int main()
{

    int carData[5][5] = {
        {1, 2, 3, 4, 5}, {18, 11, 13, 12, 15}, {23, 54, 56, 23, 21}, {23, 7, 23, 1, 8}, {4, 6, 4, 32, 23}};
        printCars(carData, 5);
}

void printCars(int carData[5][5], int rowSize)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << carData[i][j] << "\t";
        }
        cout << endl;
    }
}