#include <iostream>
using namespace std;
float howManyStickers(float number)
{
    return 6 * number * number;
}
main()
{
    float lenght, requiredStickers;
    cout << "Enter length of cube:";
    cin >> lenght;
    requiredStickers = howManyStickers(lenght);
    cout << "The number of stickers are : " << requiredStickers;
}
