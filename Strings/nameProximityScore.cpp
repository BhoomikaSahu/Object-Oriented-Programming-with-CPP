/*Given two first names of two persons, please calculate name_proximity_score. Name proximity score is calculated as follows:
• If a letter occurs in the same position in both names, the score increments by two.
• If a letter occurs in both names, but in different positions, the score is incremented by 1.
• Once a letter in a particular position is used in any of the names, it cannot be considered again. However, if the same letter occurs in an
used.
Input: The first line contains the first name & the second line contains the second name
Output: Only an integer value, showing the name_proximity_score
Sample test cases :
Input:
      Amitabh
      Ajitabh
Output:
      12
Input:
      Ryaan
      Nagesh
Output:
      2
*/

#include<iostream>
using namespace std;

int name_proximity_score(string s1, string s2)
{
    int score=0;
    for(int i=0; s1[i]!='\0'; i++)
    {
        if(s1[i] == s2[i])
            score = score+2;    
        else
            for(int j=0; s2[j]!='\0'; j++)
                if(s1[i] == s2[j])
                {
                    score++;
                    break;
                }
    }
    return score;
}

int main()
{
    string name1, name2 ; 

    cout << "Enter First Name : ";
    cin >> name1;

    cout << "Enter Second Name : ";
    cin >> name2;

    cout << name_proximity_score(name1, name2); 

    return 0;
}