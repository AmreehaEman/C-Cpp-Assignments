#include <iostream>
using namespace std;

// This code is about the use of string.
void InfiniteName(string a)
{
    cout << "" << a << endl;
}


int main()
{
    string name;
    cout << "Enter name:";
    cin >> name;
    while (true)
    {
        InfiniteName(name);
    }
    return 0;
}