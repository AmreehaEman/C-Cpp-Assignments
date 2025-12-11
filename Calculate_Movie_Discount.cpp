#include <iostream>
using namespace std;

/*
    TASK: Calculate the movie price after applying a discount.
    - Demonstrates array searching and applying different discounts based 
      on the movie's position (index) in the array using the modulo operator (i % 2).
*/

int main()
{
    string movies[] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string name;
    float price = 500;
    cout << "Enter name of movie (Gladiator, StarWars, Terminator, TakingLives, TombRider): ";
    cin >> name;
    for (int i = 0; i < 5; i++)
    {
        if (movies[i] == name)
        {
            if (i % 2 == 0)
            {
                price = price - (price * 0.10);
                cout << "Price : " << price;
                return 0;
            }
            else
            {
                price = price - (price * 0.05);
                cout << "Price : " << price;
                return 0;
            }
        }
    }
    
    
        cout << "That movie is not in the list!";
    
}