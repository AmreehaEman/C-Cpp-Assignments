#include <iostream>
using namespace std;

// TASK: Counts the number of common characters between two strings. Modifies the second string to prevent double counting.

string word1, word2;

void checkCommon();

int main()
{
    cout << "Enter 1st string ";
    cin >> word1;
    cout << "Enter 2nd string ";
    cin >> word2;
    checkCommon();
    return 0;
}
void checkCommon()
{
    int temp=0, length=word2.length();
    for (int i = 0; ((word1[i] != '\0') ); i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (word1[i] == word2[j])
            {
                temp++;
                word2[j]=' ';
                break;
            }
        }
       
      
    }
     cout<<temp;
}
