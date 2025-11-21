#include <iostream>
using namespace std;

string RockPaperSissors(string p1, string p2);

main()
{
    string player1, player2;
    cout<<"Turn of player 1: ";
    cin >> player1;
    cout<<"Turn of player 2: ";
    cin >> player2;
    cout << RockPaperSissors(player1, player2);
}
string RockPaperSissors(string p1, string p2)
{
    if ((p1 == "Rock" || p1=="rock") && (p2 == "Scissors" || p2=="scissors"))
        return "The winner is player 1";
    if ((p1 == "Scissors" || p1=="scissors") && (p2 == "Paper" || p2 =="paper"))
        return "The winner is player 1";
    if ((p1 == "Paper" || p1 =="paper") && (p2 == "Rock" || p2=="rock"))
        return "The winner is player 1";

    if ((p1 == "Scissors" || p1=="scissors") && (p2 == "Rock" || p2=="rock"))
        return "The winner is player 2";
    if ((p1 == "Paper" || p1 =="paper") && (p2 == "Scissors" || p2=="scissors"))
        return "The winner is player 2";
    if ((p1 == "Rock" || p1=="rock") && (p2 == "Paper" || p2 =="paper"))
        return "The winner is player 2";

    if ((p1 == "Scissors" || p1=="scissors") && (p2 == "Scissors" || p2=="scissors"))
        return "It's draw";
    if ((p1 == "Paper" || p1 =="paper") && (p2 == "Paper" || p2 =="paper"))
        return "It's draw";
    if ((p1 == "Rock" || p1=="rock") && (p2 == "Rock" || p2=="rock"))
        return "It's draw";

    return "Invalid Input!";
}