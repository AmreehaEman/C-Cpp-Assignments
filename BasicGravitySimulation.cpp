#include <iostream>
using namespace std;

// Implements a 5x5 world where blocks ('#') fall due to gravity.
// The bottom row (Row 4) acts as a solid ground, preventing further movement.

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

bool gravity = false;

void displayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void setGravityStatus(bool status)
{
    gravity = status;
}

void timeTick(int times)
{
    if (!gravity)
        return;

    for (int t = 0; t < times; t++)
    {
        // IMPORTANT: Loop backwards from row 3 up to 0.
        // This ensures the blocks fall one row at a time per tick, preventing
        // a block from skipping multiple empty spaces in a single pass.
        for (int row = 3; row >= 0; row--)
        {
            for (int col = 0; col < 5; col++)
            {
                if (objects[row][col] == '#' && objects[row + 1][col] == '-')
                {
                    objects[row + 1][col] = '#';
                    objects[row][col] = '-';
                }
            }
        }
    }
}

int main()
{
    displayWorld();
    setGravityStatus(true);
    timeTick(3);
    displayWorld();
    return 0;
}
