#include <iostream>
using namespace std;

// Checks if user-provided ball coordinates fall within a predefined target area (the goal boundaries).

int main()
{
    string goal[7]{{"#            #"},
                   {"#            #"},
                   {"#            #"},
                   {"##############"},
                   {"      #       "},
                   {"      #       "},
                   {"      #       "}};
    string inputCoords;
    cout << "Enter the ball's position (row can never be greater than 6 or column can never be greater than 14) (e.g., 'R2C5'): ";
    cin >> inputCoords;
    int userRow = inputCoords[1] - '0';
    int userCol = inputCoords[3] - '0';
    if (userRow < 3 && userRow >= 0 && userCol > 0 && userCol < 14)
    {
        cout << "Yes you have goaled";
    }
    else
    {
        cout << "No, you missed!" << endl;
    }
}
