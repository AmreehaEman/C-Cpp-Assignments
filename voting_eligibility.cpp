#include <iostream>
using namespace std;

// function to check conditions
void vote(int duration)
{
    if (duration >= 18)
        cout << "You are eligible for vote!";
    if (duration < 18)
        cout << "You are not eligible!";
}
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    vote(age);
}