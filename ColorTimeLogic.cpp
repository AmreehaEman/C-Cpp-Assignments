#include <iostream>
using namespace std;

string colour[30];
int idx;

int time();
int main()
{
    int totalSeconds;
    cout << "Enter number of colours: ";
    cin >> idx;
    cout << "Enter colours one per line:" << endl;
    for (int i = 0; i < idx; i++)
    {
        cin >> colour[i];
    }
    totalSeconds = time();
    cout << "Total seconds are: " << totalSeconds;
    return 0;
}
int time()
{
    int seconds = 2;
    for (int i = 0; i < (idx - 1); i++)
    {
        if (colour[i] != colour[i + 1])
        {
            seconds += 1;
        }
        seconds += 2;
    }
    return seconds;
}