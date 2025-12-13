#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int const Max_Size = 30;
// global arrays
string board[Max_Size][Max_Size];
string index[Max_Size];
int boardNumber;
// functions
int getGridNumber(int grid);
bool isHas(string cell, int idx);
bool isWinner(string input);
void displayBoard();
bool numValidation(string userInput);
void boardInput();

int main()
{
    string cell;
    int idxIndex = 0;
    cout << "First player has symbol \"X\" and second player has \"O\"" << endl;
    cout << "Enter the size of the N x N grid (e.g., 3 for 3x3): ";
    cin >> boardNumber;
    boardNumber = getGridNumber(boardNumber);
    boardInput();
    int player = 1;
    bool valid = false, valid1 = true;
    displayBoard();
    for (int i = 0; i < (boardNumber * boardNumber); i++)
    {
        cout << "Turn of " << player << " :" << endl;
        cout << "Enter cell number: ";
        cin >> cell;
        while (!numValidation(cell))
        {
            cout << "Invalid Input, Enter again: ";
            cin >> cell;
        }
        int gridNumber = stoi(cell);
        if (gridNumber < 1 || gridNumber > boardNumber * boardNumber)
        {
            cout << "Cell out of range. Enter again.\n";
            i--;
            continue;
        }

        valid = isHas(cell, idxIndex);
        if (valid)
        {
            cout << "Invalid Input, Enter again";
            i--;
            valid = false;
            continue;
        }
        else
        {
            int col = (gridNumber - 1) % boardNumber;
            int row = (gridNumber - 1) / boardNumber;
            if (player == 1)
            {
                board[row][col] = "X";
                index[i] = cell;
                idxIndex++;
            }
            else
            {
                board[row][col] = "O";
                index[i] = cell;
                idxIndex++;
            }
        }
        if (player == 1)
        {
            player = 2;
        }
        else
        {
            player = 1;
        }
        displayBoard();
        if (isWinner("X"))
        {
            cout << "Winner is Player 1" << endl;
            return 0;
        }
        else if (isWinner("O"))
        {
            cout << "Winner is Player 2" << endl;
            return 0;
        }
    }

    cout << "Match is tie";
    return 0;
}

int getGridNumber(int grid)
{
    while (cin.fail() || grid < 2 || grid > Max_Size)
    {

        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Invalid input (must be a number between 2 and " << Max_Size << "). Enter again: ";
        cin >> grid;
    }
    return grid;
}

bool isHas(string cell, int idx)
{
    for (int j = 0; j < idx; j++)
    {
        if (cell == index[j])
        {
            return true;
        }
    }
    return false;
}

bool isWinner(string input)
{
    bool temp = false;
    // ------------------main diagnol------------------
    for (int i = 0; i < boardNumber; i++)
    {
        if (board[i][i] == input)
        {
            temp = true;
        }
        else
        {
            temp = false;
            break;
        }
    }
    if (temp)
    {
        return true;
    }
    // -----------second diagnol-----------------
    int tempIndex = boardNumber - 1;
    for (int j = 0; j < boardNumber; j++)
    {
        if (board[j][tempIndex] == input)
        {
            temp = true;
        }
        else
        {
            temp = false;
            break;
        }
        tempIndex--;
    }
    if (temp)
    {
        return true;
    }
    // -------------for rows----------------
    for (int i = 0; i < boardNumber; i++)
    {
        for (int j = 0; j < boardNumber; j++)
        {
            if (board[i][j] == input)
            {
                temp = true;
            }
            else
            {
                temp = false;
                break;
            }
        }
        if (temp)
        {
            return true;
        }
    }

    // -----------------for columns-----------------
    for (int i = 0; i < boardNumber; i++)
    {
        for (int j = 0; j < boardNumber; j++)
        {
            if (board[j][i] == input)
            {
                temp = true;
            }
            else
            {
                temp = false;
                break;
            }
        }
        if (temp)
        {
            return true;
        }
    }

    return false;
}

void displayBoard()
{
    cout << "------------------------------------" << endl;
    for (int i = 0; i < boardNumber; i++)
    {
        for (int j = 0; j < boardNumber; j++)
        {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
}
bool numValidation(string userInput)
{
    if (userInput.empty())
    {
        return false;
    }

    for (int i = 0; i < userInput.length(); i++)
    {
        if (!isdigit(userInput[i]))
        {
            return false;
        }
    }
    return true;
}
void boardInput()
{
    int cellCounter = 1;
    for (int i = 0; i < boardNumber; i++)
    {
        for (int j = 0; j < boardNumber; j++)
        {
            board[i][j] = to_string(cellCounter);
            cellCounter++;
        }
    }
}