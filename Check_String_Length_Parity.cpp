#include <iostream>
using namespace std;

/*
    TASK: Check if the length of a user-input string is even or odd.
    - Demonstrates string input using getline() to capture spaces, 
      and using the modulo operator (%) to check parity (even/odd).
*/

int main()
{
    string word;
    int lenght;
    cout<<"Enter s string: ";
    getline(cin, word);
    lenght=word.length();
    if(lenght%2==0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}