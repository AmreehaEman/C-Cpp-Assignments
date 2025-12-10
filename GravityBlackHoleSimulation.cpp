#include <iostream>
using namespace std;

// Advanced simulation logic using a reverse loop for falling blocks and conditional porting of blocks from the bottom row (Row 4) to the top row (Row 0).

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

bool gravity = false;
bool isBlackHole = true;
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
void SetGravityStatus(bool status)
{
    gravity = status;
}
void timeTick(int times)
{
    if (!gravity)
        return;

    else
    {
        for (int s = 0; s < times; s++)
        {
            // --- STAGE 1: Standard Gravity Fall (moves blocks down to row 4) ---
            for (int i = 3; i >= 0; i--)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (objects[i][j] == '#')
                    {
                        if (objects[i + 1][j] == '-')
                        {
                            int temp = objects[i + 1][j];
                            objects[i + 1][j] = objects[i][j];
                            objects[i][j] = temp;
                            objects[i][j] = '-';
                        }
                    }
                }
            }
            // --- STAGE 2: Black Hole/Porting Logic (Checks Row 4) ---
            if (isBlackHole)
            {
                // If black hole flag is true, blocks reaching Row 4 are teleported to Row 0.
                for (int s = 0; s < 5; s++)
                {
                    if (objects[4][s] == '#')
                    {
                        if (objects[0][s] == '-')
                        {
                            objects[0][s] = objects[4][s];
                            objects[4][s] = '-';
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    displayWorld();
    SetGravityStatus(true);
    timeTick(1);
    displayWorld();
    return 0;
}