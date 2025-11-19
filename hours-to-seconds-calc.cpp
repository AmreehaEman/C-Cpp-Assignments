#include <iostream>
using namespace std;
int main()
{
    int hours, seconds;
    cout << "Enter hours: ";
    cin >> hours;
    seconds = hours * 3600;
    cout << "Time in seconds: " << seconds;
    return 0;
}
