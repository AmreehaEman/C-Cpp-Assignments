#include <iostream>
using namespace std;

/*
    TASK: Calculate the total bill for a given quantity of fruit.
    - Demonstrates array declaration, parallel arrays (fruit name and price),
      and using a loop to search for a matching item.
*/

int main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    string word;
    int quantity;
    int price[] = {60, 70, 40, 30};
    cout << "Enter fruit (peach, apple, guava, watermelon): ";
    cin >> word;
    cout << "Enter quantity of fruit: ";
    cin >> quantity;
    for (int i = 0; i < 4; i++)
    {
        if (fruit[i] == word)
        {
            price[i] = price[i] * quantity;
            cout << price[i];
            return 0;
        }
    }
     cout << "That fruit is not listed in items!";
}