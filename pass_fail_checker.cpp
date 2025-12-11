#include <iostream>
using namespace std;

string num(float marks)
{
    if (marks > 50)
        return "The student is Pass";
    if (marks <= 50)
        return "The student is Fail";
}
int main()
{
    float score;
    cout << "Enter score:";
    cin >> score;
    cout << num(score);
    return 0;
}