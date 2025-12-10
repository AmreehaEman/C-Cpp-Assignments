#include <iostream>
using namespace std;

// Converts user input coordinates (e.g., 'A2') to array indices to check for a 'hit' (*) or 'miss' (.).

int main()
{
    string result, battleShip[5][5]{{".", ".", ".", "*", "*"},
                                    {".", "*", ".", ".", "."},
                                    {".", "*", ".", ".", "."},
                                    {".", "*", ".", ".", "."},
                                    {".", ".", "*", "*", "."}};
    cout << "Enter coordinates to the fire torpedo: ";
    cin >> result;
    int temp=result[1]-'0';
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 && result[0] == 'A')
        {
            if (battleShip[i][temp] == ".")
                cout << "Splash";
            else
                cout << "Boom";
        }

        if (i == 1 && result[0] == 'B')
        {
            if (battleShip[i][temp] == ".")
                cout << "Splash";
            else
                cout << "Boom";
        }

        if (i == 2 && result[0] == 'C')
        {
            if (battleShip[i][temp] == ".")
                cout << "Splash";
            else
                cout << "Boom";
        }

        if (i == 3 && result[0] == 'D')
        {
            if (battleShip[i][temp] == ".")
                cout << "Splash";
            else
                cout << "Boom";
        }

        if (i == 4 && result[0] == 'E')
        {
            if (battleShip[i][temp] == ".")
                cout << "Splash";
            else
                cout << "Boom";
        }
    }
}

// int rowIndex = result[0] - 'A'; // 'A'->0, 'B'->1, etc.
// int colIndex = result[1] - '0'; // '0'->0, '1'->1, etc.

// if (battleShip[rowIndex][colIndex] == ".")
//     cout << "Splash";
// else
//     cout << "Boom";