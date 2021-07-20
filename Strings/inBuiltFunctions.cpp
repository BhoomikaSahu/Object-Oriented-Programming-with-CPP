#include <iostream>
#include <algorithm>
#include <string>     //To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    //append(): Inserts additional characters at the end of the string (can also be done using ‘+’ or ‘+=’ operator). 
    //Its time complexity is O(N) where N is the size of the new string.
    string s1 = "Bhoomika";
    string s2 = "Bhoomi";
    cout << s1 + s2 << endl;      // o/p -- BhoomikaBhoomi
    //s1.append(s2);
    cout << s1 << endl;           // o/p -- BhoomikaBhoomi
    
    //assign(): Assigns new string by replacing the previous value (can also be done using ‘=’ operator).
    s2.assign("Bhoomika")
        

    // To print string index
    cout << s1[2] << endl;        // o/p -- o   

    // compare() -- To compare two string that is eqaul or not.
    // compare() compares both strings letter by letter, if
    // o/p = -1 that means first string contains letters those ascii values are less than second string
    // o/p = 0  that means both strings are same
    // o/p = 1  that means first string contains letters those ascii values are greater than second string
    cout << s1.compare(s2) << endl;            // o/p -- 0
    if(!s1.compare(s2))               
        cout << "Strings are equal" << endl;   // o/p -- Strings are equal
    
    // clear() -- To clear string 
    s1.clear();                                 
        cout << s1 << endl;         //o/p -- no output

    // empty() -- To check string is empty or not
    // If string is empty, it returns true else false
    if(s1.empty())
        cout << "String is empty" << endl;  //o/p -- String is empty

    // erase() -- To erase characters from given string 
    string a1 = "Nincompoop";
    a1.erase(8,2);        // 1st arg shows position and 2nd ard shows how many charecters you want to erase 
    cout << a1 << endl;   // o/p -- Nipoop

    // find() -- To return index of first letter of substring which you want to find
    cout << a1.find("comp") << endl;  // o/p -- 3

    // insert() -- To insert a substring into given string
    a1.insert(8,"op");    
    cout << a1 << endl;

    // length() and size() -- both are return size of string
    cout << a1.length() << " " << a1.size() << endl ;      // o/p -- 10 10
    
    // substr() -- to return a sub string from given string
    string s = a1.substr(6,3);
    cout << s << endl;            // o/p -- poo
    
    // stoi() -- To conver string to integer
    string st = "101";
    int num = stoi(st);
    cout << num+100 << endl;      // o/p -- 201

    // to_string() -- To convert integer to string
    num = 1234;
    st = to_string(num);
    cout << st + "5" << endl;     // o/p -- 12345 
    
    // <algorithm> hear file contains sort function
    // sort() -- To sort given string
    // begin() -- To return an iterator pointing to the first element
    // end() -- To get an iterator to past the last element
    string s3 = "qwertyuioplkjhgfdsazxcvbnm";
    sort(s3.begin(), s3.end());   
    cout << s3 << endl;         // o/p -- abcdefghijklmnopqrstuvwxyz
    

    return 0; 
}
