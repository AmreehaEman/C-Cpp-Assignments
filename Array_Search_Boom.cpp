#include <iostream>
using namespace std;

/*
    TASK: Check if the string array contains the value "7".
    - Demonstrates array input, function calling, linear search, and 
      using a flag variable (`temp`) to track the search result.
*/

void checkSeven();

string arr[100];
int idx;


int main()
{
    cout << "Enter number of elements:"<<endl;
    cin >> idx;
    cout << "Enter values one per line"<<endl;
    for (int i = 0; i < idx; i++)
    {
        cin >> arr[i];
    }
    checkSeven();
    return 0;
}
void checkSeven()
{
    int temp = 0;
    for (int j = 0; j < idx; j++)
    {
        if (arr[j] == "7")
        {
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {

        cout << "there is no 7 in the array";
    }
    else
    {
        cout << "Boom";
    }
}