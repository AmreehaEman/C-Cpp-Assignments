// This program takes a word and a letter from the user 
// and uses a function to check if the letter is present in the word.

#include<iostream>
using namespace std;
bool isFind(string targetWord, char searchLetter);
int main()
{
    char letter;
    string word;
    cout<<"Enter a word:";
    cin>>word;
    cout<<"Enter letter which you want to find in given word:";
    cin>>letter;
    if(isFind(word, letter)){
        cout<<"Letter is present in the word.";
    }
    else{
        cout<<"Letter is not present in the word.";
    }
}
bool isFind(string targetWord, char searchLetter)
{
    for (int i = 0; i < targetWord.length(); i++) 
    {
        if(searchLetter==targetWord[i])
        {
            return 1;
        }
    }
    return 0;
}