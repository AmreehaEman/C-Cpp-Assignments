#include <iostream>
using namespace std;

float calculateDamage(string type, string opponentType, float power, float oppnentDefence);

int main()
{
    string type, opponentType;
    float opponentDefense, power, result;
    cout << "Enter your type of attack:";
    cin >> type;
    cout << "Enter opponent type of attack:";
    cin >> opponentType;
    cout << "Enter your power:";
    cin >> power;
    cout << "Enter opponent defence:";
    cin >> opponentDefense;
    if(opponentDefense==0)
    {
        cout<<"Error";
        return 0;
    }
    result = calculateDamage(type, opponentType, power, opponentDefense);
    if (result == 0)
    {
        cout << "Invalid Input";
    }
    cout << result;
    return 0;
}
float calculateDamage(string type, string opponentType, float power, float oppnentDefence)
{
    float damage;
    if (type == "fire" && opponentType == "grass")
    {
        damage = 50 * (power / oppnentDefence) * 2;
        return damage;
    }
    else if (type == "grass" && opponentType == "fire")
    {
        damage = 50 * (power / oppnentDefence) * 0.5;
        return damage;
    }
    else if (type == "water" && opponentType == "fire")
    {
        damage = 50 * (power / oppnentDefence) * 2;
        return damage;
    }
    else if (type == "fire" && opponentType == "water")
    {
        damage = 50 * (power / oppnentDefence) * 0.5;
        return damage;
    }
    else if (type == "fire" && opponentType == "electric")
    {
        damage = 50 * (power / oppnentDefence) * 1;
        return damage;
    }
    else if (type == "electric" && opponentType == "fire")
    {
        damage = 50 * (power / oppnentDefence) * 1;
        return damage;
    }
    else if (type == "water" && opponentType == "grass")
    {
        damage = 50 * (power / oppnentDefence) * 0.5;
        return damage;
    }
    else if (type == "grass" && opponentType == "water")
    {
        damage = 50 * (power / oppnentDefence) * 2;
        return damage;
    }
    else if (type == "water" && opponentType == "electric")
    {
        damage = 50 * (power / oppnentDefence) * 0.5;
        return damage;
    }
    else if (type == "electric" && opponentType == "water")
    {

        damage = 50 * (power / oppnentDefence) * 2;
        return damage;
    }
    else if (type == "electric" && opponentType == "grass")
    {
        damage = 50 * (power / oppnentDefence) * 1;
        return damage;
    }

    else if (type == "grass" && opponentType == "electric")
    {
        damage = 50 * (power / oppnentDefence) * 1;
        return damage;
    }
    else
        return 0;
}