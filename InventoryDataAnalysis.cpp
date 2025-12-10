#include <iostream>
using namespace std;
int blueCars(int carData[][5], int rowsize);
void toyotaBlue(int carData[5][5], int rowSize);
void nissanCars(int carData[][5], int rowSize);
int converter(int carData[][5], string color[5], string shade);
void matrix(int carData[][5]);

// Functions to query car data (e.g., total blue cars, specific row/column sums) and display the matrix transpose.


int main()
{
    string shade;
    string color[5] = {"Red", "Black", "Brown", "Blue", "Grey"};
    string cars[5] = {"Suzuki", "toyota", "nissan", "bmw", "audi"};
    int carData[5][5] = {
        {10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    toyotaBlue(carData, 5);
    cout << "Total red cars: " << blueCars(carData, 5);
    cout << endl;
    nissanCars(carData, 5);
    cout << endl<<"Enter color: ";
    cin >> shade;
    cout << "Sum of " << shade << " is: " << converter(carData, color, shade)<<endl;
    matrix(carData);
}

void toyotaBlue(int carData[5][5], int rowSize)
{
    cout << carData[1][3] << endl;
}
int blueCars(int carData[][5], int rowsize)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += carData[i][3];
    }
    return sum;
}
void nissanCars(int carData[][5], int rowSize)
{
    for (int i = 0; i < 5; i++)
    {
        cout << carData[2][i] << "\t";
    }
}
int converter(int carData[][5], string color[5], string shade)
{
    cout << endl;
    int sum = 0, index;
    for (int i = 0; i < 5; i++)
    {
        if (color[i] == shade)
        {
            index = i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        sum += carData[i][index];
    }
    return sum;
}
void matrix(int carData[][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << carData[j][i] << "\t";
        }
         cout << endl;
    }
   
}
