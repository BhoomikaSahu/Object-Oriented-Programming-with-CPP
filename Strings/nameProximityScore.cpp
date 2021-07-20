#include<iostream>
using namespace std;
int proximityScore(string s1, string s2)
{
    int count=0;
    for(int i=0; s1[i]!='\0'; i++)
    {
        if(s1[i] == s2[i])
            {
                count = count+2;
            }
        else
        {
            for(int j=0; s2[j]!='\0'; j++)
            {
                if(s1[i] == s2[j])
                {
                    count++;
                    break;
                }
            }

        }
        
    }
    return count;
}
int main()
{
    string str1 , str2 ; 
    cout << "Enter First Name : ";
    cin >> str1;
    cout << "Enter Second Name : ";
    cin >> str2;
    cout << proximityScore(str1, str2);
    return 0;
}